# Mapestry

Take the Title Id and Developer Secret key from your account on PlayFab.com, and place them in:
Assets/PlayFabSDK/Shared/Public/Resources/PlayFabSharedSettings.asset

Mapbox will add a separate section at the top in the UI. Click Mapbox > Setup.
Login to your Mapbox account on Mapbox.com and generate an access token that can go in here.

Create an Spatial Anchor resource in Azure, fetch your resource's ID & Key, as well as the domain, and place them in:
Assets/AzureSpatialAnchors.SDK/Resources/SpatialAnchorConfig.asset

In the Shared folder, there is a Connection String for a database. Create a database and place your URL in there.