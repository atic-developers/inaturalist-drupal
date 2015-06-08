Drupal.behaviors.ColorBox = {
  attach: function (context, settings) {
    jQuery( ".tax input#tab-45" ).click(function () {
      jQuery.colorbox({inline:true, width: '80%', height: '500px', href:'.contentin .content.content-45', scalePhotos: true, overlayClose: true, reposition: true});
    }
    )}
};
