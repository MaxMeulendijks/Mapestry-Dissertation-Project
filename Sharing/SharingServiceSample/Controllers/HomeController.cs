using Microsoft.AspNetCore.Mvc;
using SharingService.Models;
using SharingService.ViewModels;
using System.Linq;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;
using PlayFab;
using PlayFab.ClientModels;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Http;

namespace SharingService.Controllers
{
    public class HomeController : Controller
    {
        private readonly MyDbContext dbContext;

        public const string Username = "UserName";
        public const string PlayFabSessionId = "PlayFabSessionId";

        public HomeController(MyDbContext dbContext)
        {
            this.dbContext = dbContext;
        }

        // GET api/anchors/find
        public ActionResult Index()
        {
            Home home = new Home();

                return View(home);
        }

        [HttpPost]
        public async Task<ActionResult> LogIn(Home home)
        {
            PlayFabSettings.staticSettings.TitleId = "AC437";

            if(!ModelState.IsValid)
            {
                return View(home);
            }
            
            if(home.UserName != null)
            {
                var requestSignup = new RegisterPlayFabUserRequest{Email = home.UserEmail, Password = Encrypt(home.UserPassword), Username = home.UserName, DisplayName = home.UserName};
                var signupTask = await PlayFabClientAPI.RegisterPlayFabUserAsync(requestSignup);

                if(signupTask.Error != null)
                {
                    home.ErrorMessage = signupTask.Error.ErrorMessage;
                    return RedirectToAction("LogInError", "Home",  home);
                }
            }

            home.ErrorMessage = "";

            var request = new LoginWithEmailAddressRequest{Email = home.UserEmail, Password = Encrypt(home.UserPassword),
                                                             InfoRequestParameters = new GetPlayerCombinedInfoRequestParams{GetUserAccountInfo = true}};
            var loginTask = await PlayFabClientAPI.LoginWithEmailAddressAsync(request);

            if(loginTask.Error != null){
                home.ErrorMessage = loginTask.Error.ErrorMessage;
                return View(home);
            }

            //Setting session variables

            HttpContext.Session.Clear();
            HttpContext.Session.SetString(Username, loginTask.Result.InfoResultPayload.AccountInfo.Username);
            HttpContext.Session.SetString(PlayFabSessionId, loginTask.Result.SessionTicket);

            return RedirectToAction("StartUp", "Configuration");
        }

        string Encrypt(string pass) {
            System.Security.Cryptography.MD5CryptoServiceProvider x = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] bs = System.Text.Encoding.UTF8.GetBytes(pass);
            bs = x.ComputeHash(bs);
            System.Text.StringBuilder s = new System.Text.StringBuilder();
            foreach(byte b in bs) {
                s.Append(b.ToString("x2").ToLower());
            }

            string sEncrypted = s.ToString();

            return sEncrypted;

        }
    }
}
