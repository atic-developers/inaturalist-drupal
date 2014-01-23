<?php
/**
 * iNaturalist theme for observations
 * Copyright 2014 Projecte Ictineo SCCL (www.projecteictineo.com)
 * aGPLv3
 *
 * All data is recived in $content variable
 * the structure is like is retoruned by
 * inaturalist api
 */
dsm($content);

foreach( $content as $id => $obs) {
  print('<div class="obs-wrapper '. $id .'" id="obs_'.$id.'">');
  print('  <h2>'.$obs['species_guess'].'</h2>');
  print('  <img src="'.$obs['photos'][0]['medium_url'].'" />');
  print('</div>');

}


?>
