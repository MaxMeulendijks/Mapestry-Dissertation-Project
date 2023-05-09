using UnityEngine;
using Yarn;

/// Stores compiled Yarn programs in a form that Unity can serialise.
public class YarnProgramLine
{
    public string id {get; set;} 
    public string text {get; set;}
    public string file {get; set;}
    public string node {get; set;}
    public int lineNumber {get; set;}

    public YarnProgramLine(string id, string text, string file, string node, int lineNumber)
    {
        this.id = id;
        this.text = text;
        this.file = file;
        this.node = node;
        this.lineNumber = lineNumber;
    }


}