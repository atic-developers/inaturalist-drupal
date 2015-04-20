Drupal.behaviors.inat_login = {                                                  
    attach: function (context, settings) {
     jQuery('#usrinfo-logout').click(function (){
       Finestra = window.open('http://www.inaturalist.org/logout','finestra');
       alert('Tu sessión en Inaturalits.org ha sido cerrada');
       Finestra.close();
     })
    }
}
