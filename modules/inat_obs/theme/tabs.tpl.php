<?php
global $base_url;
$aux = 1;
$aux2 = 'checked="checked"';
print('<section class="tabs">');
foreach($taxons as $id => $taxa){
   if(isset($taxa['taxon']['photo_url'])) {
   print ('<input id="tab-'.$aux.'" type="radio" name="radio-set" class="tab-selector-'.$aux.'" '.$aux2.' />');
   print ('<label for="tab-'.$aux.'" class="tab-label-'.$aux.'"><img src="'.$taxa['taxon']['photo_url'].'"> </img> </label>');
   }else {
   print ('<input id="tab-'.$aux.'" type="radio" name="radio-set" class="tab-selector-'.$aux.'" '.$aux2.' />');
   print ('<label for="tab-'.$aux.'" class="tab-label-'.$aux.'"><img src="'.$base_url.'/sites/all/modules/inat/modules/inat_obs/img/default.png"> </img> </label>');
   }
   $aux2 = '';
   $aux++;
}
print('<div class="clear-shadow"></div>');
print('<div class="contentin">');
$aux = 1;  
foreach($taxons as $id => $taxa){
  print(' <div class="content content-'.$aux.'">');
    print('<span id="title"><a href="'.$base_url.'/taxa/'.$taxa['taxon']['id'].'"><h2>'.$taxa['taxon']['name'].'    </h2> </a>'.t('Observation number: ').'<div id="num">'  .$taxa['taxon']['listed_taxa_count'].'</div></span>');
    print('<span id="sum"><div id="hola2">'.$taxa['taxon']['wikipedia_summary'].'</div></span>');
    print ('<div class="grid">');
    if ($taxa['taxon']['taxon_photos'] == 'NULL' || $taxa['taxon']['taxon_photos'] == ''){
    }
    else {
      foreach ($taxa['taxon']['taxon_photos'] as $number => $photo) {
      print('<figure class="effect-lexi">
            <img src="'.$photo['photo']['medium_url'].'" alt="img12"/>
            <figcaption>
              <h2> <span></span></h2>
              <p>'.$photo['photo']['attribution'].'</p>
              <a href="'.$base_url.'/inat/taxa/'.$photo['taxon_id'].'">View more</a>
            </figcaption>     
          </figure>');
      }
      print('</div>');
  print(' </div>');
   $aux++;
    }
}
print('</div>');
print('</section>');
