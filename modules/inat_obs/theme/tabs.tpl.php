<?php
global $base_url;
dsm($taxons);
$aux = 1;
$aux2 = 'checked="checked"';
print('<section class="tabs">');
foreach($taxons as $id => $taxa): 
   print ('<input id="tab-'.$aux.'" type="radio" name="radio-set" class="tab-selector-'.$aux.'" '.$aux2.' />');
   print ('<label for="tab-'.$aux.'" class="tab-label-'.$aux.'"><img src="'.$taxa['image_url'].'"> </img> </label>');
   $aux2 = '';
   $aux++;
endforeach ; 
print('<div class="clear-shadow"></div>');
print('<div class="contentin">');
$aux = 1;  
foreach($taxons as $id => $taxa): 
  print(' <div class="content content-'.$aux.'">');
    print('<span id="title"><a href="'.$base_url.'/taxa/'.$taxa['id'].'"><h2>'.$taxa['name'].'    </h2> </a>'.t('Observation number: ').'<div id="num">'  .$taxa['listed_taxa_count'].'</div></span>');
    print('<span id="sum"><div id="hola2">'.$taxa['wikipedia_summary'].'</div></span>');
    print ('<div class="grid">
          <figure class="effect-lexi">
            <img src="'.$taxa['taxon_photos']['0']['photo']['medium_url'].'" alt="img12"/>
            <figcaption>
              <h2> <span></span></h2>
              <p>'.$taxa['taxon_photos']['0']['photo']['attribution'].'</p>
              <a href="'.$base_url.'/inat/taxa/'.$taxa['taxon_photos']['0']['taxon_id'].'">View more</a>
            </figcaption>     
          </figure>
          <figure class="effect-lexi">
            <img src="'.$taxa['taxon_photos']['1']['photo']['medium_url'].'" alt="img12"/>
            <figcaption>
              <h2> <span></span></h2>
              <p>'.$taxa['taxon_photos']['1']['photo']['attribution'].'</p>
              <a href="'.$base_url.'/inat/taxa/'.$taxa['taxon_photos']['1']['taxon_id'].'">View more</a>
            </figcaption>     
          </figure>
          </div>');
  print(' </div>');
   $aux++;
endforeach;
print('</div>');
print('</section>');
