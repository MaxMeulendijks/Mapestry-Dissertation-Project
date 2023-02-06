using Microsoft.AspNetCore.Mvc;
using SharingService.Models;
using SharingService.ViewModels;
using System.Linq;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Logging;
using Microsoft.AspNetCore.Authorization;

namespace SharingService.Controllers
{
    [Route("configuration")]
    public class ConfigurationController : Controller
    {
        private readonly MyDbContext dbContext;
        private readonly ILogger logger;

        public ConfigurationController(MyDbContext dbContext, ILogger<ConfigurationController> logger)
        {
            this.dbContext = dbContext;
            this.logger = logger;
        }

        [HttpPost]
        [AllowAnonymous]
        public ActionResult StartUp(Home home)
        {
            Users user = dbContext.Users.FirstOrDefault<Users>(u => u.UserName == home.userId);
            logger.LogError("User ID = "+home.userId+" & Session ID = "+home.sessionId);
            List<Anchors> userAnchors =  dbContext.Anchors.Where<Anchors>(a => a.UserName == home.userId).ToList<Anchors>();
            List<Hunts> userHunts = dbContext.Hunts.Where<Hunts>(h => h.UserName == home.userId).ToList<Hunts>();
            UserConfiguration userConfiguration = new UserConfiguration(user, userAnchors, userHunts);

            return View("Configuration", userConfiguration);
        }
    }
}