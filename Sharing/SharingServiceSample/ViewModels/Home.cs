using System.ComponentModel;
using System;
using System.Collections.Generic;
using SharingService.Models;
using System.ComponentModel.DataAnnotations;

namespace SharingService.ViewModels
{
    public partial class Home
    {
        [RegularExpression("([a-zA-Z0-9_-]+)", ErrorMessage = "Only letters/numbers, '_' & '-' allowed.")]
        public string UserName {get; set;}
        [Required]
        [EmailAddress]
        public string UserEmail {get; set;}
        [Required]
        [PasswordPropertyTextAttribute]
        public string UserPassword {get; set;}
        public string ErrorMessage{get; set;}

        public Home(){

        }

        #nullable enable
        public Home(string userEmail, string userPassword, string? userName){
            
            UserEmail = userEmail;
            UserPassword = userPassword;
            UserName = userName;

        }
        #nullable disable
    }

}