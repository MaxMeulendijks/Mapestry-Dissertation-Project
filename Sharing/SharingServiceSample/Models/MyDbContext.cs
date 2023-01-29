using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
#nullable disable

namespace SharingService.Models
{
    public partial class MyDbContext : DbContext
    {
        public MyDbContext()
        {
        }

        public MyDbContext(DbContextOptions<MyDbContext> options)
            : base(options)
        {
        }

        public virtual DbSet<Anchors> Anchors { get; set; }
        public virtual DbSet<HuntAnchors> HuntAnchors { get; set; }
        public virtual DbSet<Hunts> Hunts { get; set; }
        public virtual DbSet<PlayerHunts> PlayerHunts { get; set; }
        public virtual DbSet<Users> Users { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            if (!optionsBuilder.IsConfigured)
            {
#warning To protect potentially sensitive information in your connection string, you should move it out of source code. See http://go.microsoft.com/fwlink/?LinkId=723263 for guidance on storing connection strings.
                optionsBuilder.UseSqlServer("Server=tcp:mapestry-server.database.windows.net,1433;Initial Catalog=Mapestry;Persist Security Info=False;User ID=MapestryPrime;Password=IlIlfavid1;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;");
            }
        }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.Entity<Anchors>(entity =>
            {
                entity.HasKey(e => new { e.AnchorName, e.UserName });

                entity.Property(e => e.AnchorName)
                    .HasColumnName("anchor_name")
                    .HasMaxLength(50);

                entity.Property(e => e.UserName)
                    .HasColumnName("user_name")
                    .HasMaxLength(50);

                entity.Property(e => e.AnchorDescription)
                    .HasColumnName("anchor_description")
                    .HasColumnType("text");

                entity.Property(e => e.AnchorKey)
                    .IsRequired()
                    .HasColumnName("anchor_key")
                    .HasMaxLength(50);

                entity.Property(e => e.IsPublic).HasColumnName("is_public");

                entity.HasOne(d => d.UserNameNavigation)
                    .WithMany(p => p.Anchors)
                    .HasForeignKey(d => d.UserName)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_Anchors_Users");
            });

            modelBuilder.Entity<HuntAnchors>(entity =>
            {
                entity.HasKey(e => new { e.HuntName, e.HuntCreatorId, e.AnchorName, e.AnchorCreatorId });

                entity.HasIndex(e => e.YarnScriptName)
                    .HasName("IX_HuntAnchors")
                    .IsUnique();

                entity.Property(e => e.HuntName)
                    .HasColumnName("hunt_name")
                    .HasMaxLength(50);

                entity.Property(e => e.HuntCreatorId)
                    .HasColumnName("hunt_creator_id")
                    .HasMaxLength(50);

                entity.Property(e => e.AnchorName)
                    .HasColumnName("anchor_name")
                    .HasMaxLength(50);

                entity.Property(e => e.AnchorCreatorId)
                    .HasColumnName("anchor_creator_id")
                    .HasMaxLength(50);

                entity.Property(e => e.YarnScriptName)
                    .IsRequired()
                    .HasColumnName("yarn_script_name")
                    .HasMaxLength(10)
                    .IsFixedLength();

                entity.HasOne(d => d.Anchor)
                    .WithMany(p => p.HuntAnchors)
                    .HasForeignKey(d => new { d.AnchorName, d.AnchorCreatorId })
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_HuntAnchors_Anchors");

                entity.HasOne(d => d.Hunt)
                    .WithMany(p => p.HuntAnchors)
                    .HasForeignKey(d => new { d.HuntName, d.HuntCreatorId })
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_HuntAnchors_Hunts");
            });

            modelBuilder.Entity<Hunts>(entity =>
            {
                entity.HasKey(e => new { e.HuntName, e.UserName });

                entity.Property(e => e.HuntName)
                    .HasColumnName("hunt_name")
                    .HasMaxLength(50);

                entity.Property(e => e.UserName)
                    .HasColumnName("user_name")
                    .HasMaxLength(50);

                entity.Property(e => e.HuntDescription)
                    .HasColumnName("hunt_description")
                    .HasColumnType("text");

                entity.HasOne(d => d.UserNameNavigation)
                    .WithMany(p => p.Hunts)
                    .HasForeignKey(d => d.UserName)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_Hunts_Users");
            });

            modelBuilder.Entity<PlayerHunts>(entity =>
            {
                entity.HasKey(e => new { e.PlayerName, e.HuntName, e.CreatorName });

                entity.Property(e => e.PlayerName)
                    .HasColumnName("player_name")
                    .HasMaxLength(50);

                entity.Property(e => e.HuntName)
                    .HasColumnName("hunt_name")
                    .HasMaxLength(50);

                entity.Property(e => e.CreatorName)
                    .HasColumnName("creator_name")
                    .HasMaxLength(50);

                entity.HasOne(d => d.PlayerNameNavigation)
                    .WithMany(p => p.PlayerHunts)
                    .HasForeignKey(d => d.PlayerName)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_PlayerHunts_Users");

                entity.HasOne(d => d.Hunts)
                    .WithMany(p => p.PlayerHunts)
                    .HasForeignKey(d => new { d.HuntName, d.CreatorName })
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_PlayerHunts_Hunts");
            });

            modelBuilder.Entity<Users>(entity =>
            {
                entity.HasKey(e => e.UserName)
                    .HasName("PK_Users_1");

                entity.Property(e => e.UserName)
                    .HasColumnName("user_name")
                    .HasMaxLength(50);

                entity.Property(e => e.UserDescription)
                    .HasColumnName("user_description")
                    .HasColumnType("text");
            });

            OnModelCreatingPartial(modelBuilder);
        }

        partial void OnModelCreatingPartial(ModelBuilder modelBuilder);
    }
}
