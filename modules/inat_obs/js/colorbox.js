Drupal.behaviors.ColorBox = {
  attach: function (context, settings) {
    jQuery('.tax input#tab-45').click(function () {
      jQuery.colorbox({inline:true,href:'.contentin .content.content-45'});
    }
    ) }
};
