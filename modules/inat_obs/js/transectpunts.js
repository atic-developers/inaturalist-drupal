Drupal.behaviors.inat_obs = {                                              attach: function (context, settings) {
     var map = Drupal.settings.leaflet[0].lMap;
     for ( var x in Drupal.settings.inat_obs.punts) {
       lat = Drupal.settings.inat_obs.punts[x].lat;
       lng = Drupal.settings.inat_obs.punts[x].lon;
       var points = L.marker([lat, lng]).addTo(map);
       points.bindPopup("<div id=popup>" + Drupal.settings.inat_obs.punts[x].pop + " </div>");
     }

   }
};
