Drupal.behaviors.ColorBox = {
  attach: function (context, settings) {
    jQuery( ".tax > label" ).click(function () {
      jQuery.colorbox({inline:true, width: '80%', height: '500px', href: function() {var url = $(this).(attr("class"));return '.' + '.content';}, scalePhotos: true, overlayClose: true, reposition: true});
    }
    )}
};
