Drupal.behaviors.ColorBox = {
  attach: function (context, settings) {
    jQuery( ".tax label" ).click(function () {
    jQuery.colorbox({html: jQuery(this).find(".content").html(), width: "80%", height:"500px", scalePhotos: true, overlayClose: true, reposition: true});
    });
  }
}
