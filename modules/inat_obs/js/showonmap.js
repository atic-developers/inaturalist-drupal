 Drupal.behaviors.inat_obs = {
    attach: function (context, settings) {
      jQuery('#edit-inat-obs-add-reference-und-0-target-id').change(function (){ 
      var id = parseInt(jQuery(this).val().split('(').pop().replace(')',''));

      jQuery.ajax({
        url: Drupal.settings.basePath + 'inat/add/inat_transect/edit/showonmap/' + id,
        })
        .done(function( data ) {
           var map = Drupal.leaflet_widget["leaflet-widget_inat-obs-add-map"]; 
           var poliline = new Array();
           var obj = data['transect'].split('(').pop().split(')').shift().split(','); 
          
           for (x in obj){
             if(obj[x].substring(0,1) != ' ') {
               var lng = parseFloat(obj[x].split(' ')[0].replace(' ',''));
               var lat = parseFloat(obj[x].split(' ')[1].replace(' ',''));
             } else {
               var lng = parseFloat(obj[x].split(' ')[1].replace(' ',''));
               var lat = parseFloat(obj[x].split(' ')[2].replace(' ',''));
             }
            var point = new L.LatLng(lat, lng);
            poliline.push(point);
            console.log(poliline);
           }
           map.eachLayer(function(layer) {
             if(layer.hasOwnProperty('_latlngs')) {
               map.removeLayer(layer);
             }
           });
           var firstpolyline = new L.Polyline(poliline);
           map.addLayer(firstpolyline);
           map.fitBounds(poliline);

        });       
      });

    }

  };
