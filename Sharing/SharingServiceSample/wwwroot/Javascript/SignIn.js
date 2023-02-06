function LoginWithEmailAddress(){

    GetPlayerInfo = GetPlayerCombinedInfoRequestParams();
    GetPlayerInfo.GetUserAccountInfo = true;

    var loginRequest = {
        // Currently, you need to look up the correct format for this object in the API-docs:
        // https://api.playfab.com/Documentation/Client/method/LoginWithCustomID
        Email: document.getElementById("user-email").value,
        Password: document.getElementById("user-password").value,
        TitleId: "6FAEA",
        InfoRequestParameters: GetPlayerInfo

    };
    
    PlayFabClientSDK.LoginWithEmailAddress(loginRequest, LoginCallback);
}

var LoginCallback = function (result, error) {
    if (result !== null) {
        document.getElementById("resultOutput").innerHTML = "Congratulations, you made your first successful API call!";
        document.getElementById("userId").value = result.data.InfoResultPayload.AccountInfo.Username;
        console.log("Comes past PlayFabId: "+result.data.InfoResultPayload.AccountInfo.Username);
        document.getElementById("sessionId").value = result.data.SessionTicket;
        console.log("Comes past SessionTicket: "+result.data.SessionTicket);
        document.getElementById("submit-button").click();
    } else if (error !== null) {
        document.getElementById("resultOutput").innerHTML =
            "Something went wrong with your first API call.\n" +
            "Here's some debug information:\n" +
            CompileErrorReport(error);
    }
}

function SignUpWithEmailAddress(){
    var signupRequest = {
        TitleId: "6FAEA",
        Email: document.getElementById("user-email").value,
        Password: document.getElementById("user-password").value
    };
    PlayFabClientSDK.RegisterPlayFabUser(signupRequest, LoginCallback);
}

function SwitchSignupLogin(){
    console.log("Inside switch method.");
    LogIn = document.getElementById("login-button");
    SignUp = document.getElementById("signup-button");
    UserName = document.getElementById("user-name");
    Switch = document.getElementById("switch-button");

    if(LogIn.hidden == true){
        LogIn.hidden = false;
        SignUp.hidden = true;
        UserName.hidden = true;
        Switch.value = "No account? Sign up!"
    } else {
        LogIn.hidden = true;
        SignUp.hidden = false;
        UserName.hidden = false;
        Switch.value = "Already signed up? Log in!"
    }
}

// This is a utility function we haven't put into the core SDK yet.  Feel free to use it.
function CompileErrorReport(error) {
    if (error === null)
        return "";
    var fullErrors = error.errorMessage;
    for (var paramName in error.errorDetails)
        for (var msgIdx in error.errorDetails[paramName])
            fullErrors += "\n" + paramName + ": " + error.errorDetails[paramName][msgIdx];
    return fullErrors;
}

const PlayerProfileViewConstraints = function() {

        var obj = {
            ShowAvatarUrl: false,
            ShowBannedUntil: false,
            ShowCampaignAttributions: false,
            ShowContactEmailAddresses: false,
            ShowCreated: false,
            ShowDisplayName: false,
            ShowExperimentVariants: false,
            ShowLastLogin: false,
            ShowLinkedAccounts: false,
            ShowLocations: false,
            ShowMemberships: false,
            ShowOrigination: false,
            ShowPushNotificationRegistrations: false,
            ShowStatistics: false,
            ShowTags: false,
            ShowTotalValueToDateInUsd: false,
            ShowValuesToDate: false
        }

        return obj;
}

const GetPlayerCombinedInfoRequestParams = function() {

        var obj = {
            GetCharacterInventories: false,
            GetCharacterList: false,
            GetPlayerProfile: false,
            GetPlayerStatistics: false,
            GetTitleData: false,
            GetUserAccountInfo: false,
            GetUserData: false,
            GetUserInventory: false,
            GetUserReadOnlyData: false,
            GetUserVirtualCurrency: false,
            PlayerStatisticNames: null,
            ProfileConstraints: PlayerProfileViewConstraints,
            TitleDataKeys: null,
            UserDataKeys: null,
            UserReadOnlyDataKeys: null
        }

        return obj;
}