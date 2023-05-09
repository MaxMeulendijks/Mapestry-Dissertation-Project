using System;
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
// Comment out the next line to use CosmosDb instead of InMemory for the anchor cache.
//#define INMEMORY_DEMO

using Microsoft.AspNetCore.Builder;
using Microsoft.AspNetCore.Hosting;
using Microsoft.AspNetCore.Rewrite;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;
using Microsoft.EntityFrameworkCore;
using SharingService.Data;
using SharingService.Models;

namespace SharingService
{
    public class Startup
    {
        public Startup(IConfiguration configuration)
        {
            this.Configuration = configuration;
        }

        public IConfiguration Configuration { get; }

        // This method gets called by the runtime. Use this method to add services to the container.
        public void ConfigureServices(IServiceCollection services)
        {
            services.AddControllers();
            services.AddDistributedMemoryCache();
            services.AddControllersWithViews().AddSessionStateTempDataProvider();
            services.AddRazorPages();

            services.AddSession(options =>
            {
                options.Cookie.HttpOnly = true;
                options.Cookie.IsEssential = true;
            });

            services.AddDbContext<MyDbContext>(options => options.UseSqlServer(Configuration.GetConnectionString("MapestryLink")));
            services.AddScoped<MyDbContext>();

            // Add an http client
            services.AddHttpClient<SpatialAnchorsTokenService>();
        }

        // This method gets called by the runtime. Use this method to configure the HTTP request pipeline.
        public void Configure(IApplicationBuilder app, IWebHostEnvironment env)
        {
            if (env.IsDevelopment())
            {
                app.UseDeveloperExceptionPage();
            }

            app.UseStaticFiles();
            app.UseHttpsRedirection();
            app.UseRouting();
            app.UseSession();

            app.UseEndpoints(endpoints => {
                endpoints.MapControllers();
                endpoints.MapControllerRoute("Default", "{controller}/{action}",
            new { controller = "Home", action = "Index"});
                endpoints.MapControllerRoute("Login", "{controller}/{action}",
            new { controller = "Home", action = "LogIn"});
                endpoints.MapControllerRoute("Configuration", "{controller}/{action}",
            new { controller = "Configuration", action = "StartUp"});
                endpoints.MapRazorPages();
            } );
        }
    }
}
