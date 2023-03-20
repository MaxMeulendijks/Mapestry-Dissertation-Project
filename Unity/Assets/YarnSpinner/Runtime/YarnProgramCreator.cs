using UnityEngine;
using UnityEditor;
using System.IO;
using System.Linq;
using System.Globalization;
using Yarn.Compiler;
using Yarn;
using System.Collections.Generic;
using CsvHelper;
using CsvHelper.Configuration;

public class YarnProgramCreator : MonoBehaviour
    {    
        // culture identifiers like en-US
        public string baseLanguageID;

        public string[] stringIDs;

        public bool AnyImplicitStringIDs => compilationStatus == Status.SucceededUntaggedStrings;
        public bool StringsAvailable => stringIDs?.Length > 0;

        public Status compilationStatus;
        
        public bool isSuccesfullyCompiled = false;

        public string compilationErrorMessage = null;

        public TextAsset baseLanguage;
        public YarnTranslation[] localizations = new YarnTranslation[0];

        private void OnValidate() {
            if (baseLanguageID == null) {
                baseLanguageID = CultureInfo.CurrentCulture.Name;
            }
        }

        public YarnProgram ImportYarn(string sourceText, string fileName)
        {
            Debug.LogError("Inside importer method");
            try
            {
                // Compile the source code into a compiled Yarn program (or
                // generate a parse error)
                compilationStatus = Compiler.CompileString(sourceText, fileName, out Program compiledProgram, out IDictionary<string, Yarn.Compiler.StringInfo> stringTable);

                Debug.LogError("Used compiler");
                // Create a container for storing the bytes
                var programContainer = ScriptableObject.CreateInstance<YarnProgram>();
                Debug.LogError("Created YarnProgram");         

                using (var memoryStream = new MemoryStream())
                using (var outputStream = new Google.Protobuf.CodedOutputStream(memoryStream))
                {
                    Debug.LogError("Write to output stream");  
                    // Serialize the compiled program to memory
                    compiledProgram.WriteTo(outputStream);
                    outputStream.Flush();

                    byte[] compiledBytes = memoryStream.ToArray();

                    programContainer.compiledProgram = compiledBytes;

                    isSuccesfullyCompiled = true;

                    // var outPath = Path.ChangeExtension(ctx.assetPath, ".yarnc");
                    // File.WriteAllBytes(outPath, compiledBytes);
                }

                if (stringTable.Count > 0) {

                    
                    Debug.LogError("Before using stream or writer.");  
                    using (var memoryStream = new MemoryStream()) 
                    using (var textWriter = new StreamWriter(memoryStream)) {
                        // Generate the localised .csv file

                        Debug.LogError("Before CsvHelper.configuration");  
                        // Use the invariant culture when writing the CSV
                        var configuration = new CsvHelper.Configuration.Configuration(
                            System.Globalization.CultureInfo.InvariantCulture
                        );
                        Debug.LogError("Before CsvHelper.CsvWriter");  

                        var csv = new CsvHelper.CsvWriter(
                            textWriter, // write into this stream
                            configuration // use this configuration
                            );
                        Debug.LogError("Before IEnumerable");

                        List<YarnProgramLine> lines = new List<YarnProgramLine>();
                        foreach(var line in stringTable)
                        {
                            lines.Add(new YarnProgramLine(line.Key, line.Value.text, line.Value.fileName, line.Value.nodeName, line.Value.lineNumber));
                        }

                        // var lines = stringTable.Select(x => new {
                        //     id = x.Key, 
                        //     text=x.Value.text,
                        //     file=x.Value.fileName,
                        //     node=x.Value.nodeName,
                        //     lineNumber=x.Value.lineNumber
                        // });

                        Debug.LogError("Before writing records."); 
                        //csv.WriteRecords(lines);
                        csv.WriteHeader<YarnProgramLine>();
                         Debug.LogError("After header.");
                        csv.NextRecord();
                        Debug.LogError("Next Record");
                        foreach (var line in lines)
                        {
                            csv.WriteRecord(line);
                            csv.NextRecord();
                        }
                        Debug.LogError("Before flush."); 
                        textWriter.Flush();

                        memoryStream.Position = 0;

                        Debug.LogError("Before stream reading."); 
                        using (var reader = new StreamReader(memoryStream)) {
                            var textAsset = new TextAsset(reader.ReadToEnd());
                            textAsset.name = $"{fileName} ({baseLanguageID})";

                            programContainer.baseLocalisationStringTable = textAsset;
                            baseLanguage = textAsset;
                            programContainer.localizations = localizations;
                        }

                        stringIDs = lines.Select(l => l.id).ToArray();

                    }
                }
                Debug.LogError("About to return YarnProgram");    
                return programContainer;

            }
            catch (Yarn.Compiler.ParseException e)
            {
                isSuccesfullyCompiled = false;
                compilationErrorMessage = e.Message;
                Debug.LogError("Error occurred: "+e.Message);
                return null;
            }            
        }
    }

    public class YarnProgramLineMap : ClassMap<YarnProgramLine>
{
    public YarnProgramLineMap()
    {
        Map(m => m.id).Index(0).Name("id");
        Map(m => m.text).Index(1).Name("text");
        Map(m => m.file).Index(2).Name("text");
        Map(m => m.node).Index(3).Name("text");
        Map(m => m.lineNumber).Index(4).Name("text");
    }
}



