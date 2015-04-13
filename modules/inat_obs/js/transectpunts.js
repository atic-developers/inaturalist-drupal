alert('oaoaoao');
Drupal.behaviors.inat_obs = {                                                                                                                   
   attach: function (context, settings) {
     var map = Drupal.leaflet_widget["leaflet-widget_inat-obs-add-map"]; 
     for each ( var point in Drupal.settings.inat_obs.punts) {
       console.log(point);  
     }

   }
};
