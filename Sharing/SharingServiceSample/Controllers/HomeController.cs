using Microsoft.AspNetCore.Mvc;
using SharingService.Models;
using SharingService.ViewModels;
using System.Linq;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;

namespace SharingService.Controllers
{
    public class HomeController : Controller
    {
        private readonly MyDbContext dbContext;

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
        public ActionResult LogIn(Home home)
        {
                return RedirectToAction("StartUp", "Configuration", home);
        }
    }
}
