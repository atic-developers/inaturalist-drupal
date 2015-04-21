<?php
/**
 * iNaturalist theme for observations
 * Copyright 2014 Projecte Ictineo SCCL (www.projecteictineo.com)
 * aGPLv3
 *
 * All data is recived in $content variable
 * the structure is like the retoruned by
 * inaturalist api
 */
global $base_url;
  drupal_add_js(libraries_get_path('cycle2').'/jquery.cycle2.js');
  drupal_add_js(libraries_get_path('cycle2').'/jquery.cycle2.tile.js');
?>


<div class="inat_observation row" id="obs_<?php print($observation['id']); ?>">
  <div class="photo">
    <?php if (array_key_exists('photos_count',$observation) && $observation['photos_count'] == 0): ?>  
      <span class="no_photo"><?php print(t('No photo')); ?></span>
    <?php elseif(isset($observation['photos'][0])): ?>
      <div class="cycle-slideshow  img-wrapper img-wrapper-<?php print $id; ?>"
      data-cycle-slides="> figure"
      data-cycle-fx=fade
      >
        <?php foreach($observation['photos'] as $id => $img): ?>
          <figure>
            <img src="<?php print($img['small_url']); ?>" alt="<?php print($observation['description']); ?>" class="img-<?php print $id; ?>"/>
            <figurecaption><?php print($img['attribution']); ?></figurecaption>
          </figure>
        <?php endforeach; ?>
      </div>
     <?php else: ?>       
<?php print('<span class="no_photo"> <img src="'.$base_url.'/sites/all/modules/inat/modules/inat_obs/img/default.png"></img></span>'); ?>
 
   <?php endif; ?>
    
  </div> <!-- /photo -->
  <div id=delete>
    <?php if( variable_get('user_login_moment','') == $observation['user_login'] ): ?>
    <div id=enlace><?php print('<a href="'.$base_url.'/inat/delete/observation/'.$observation['id'].'"> Delete Observation </a>');?> </div>
    <div id=enlace><?php print('<a href="'.$base_url.'/inat/delete/observation/'.$observation['id'].'"> Join to project </a>');?> </div>
    <?php endif; ?>
 </div>
  <h2><a href="<?php print($base_url . '/inat/observation/' . $observation['id']); ?>"><?php print($observation['species_guess']); ?></a></h2>
  <div class="description"><?php print($observation['description']); ?></div>
  
 
  <?php if(isset($observation['user']['login'])): ?>
     <div class="observer"><span class="label"><?php print(t('Observer: ') ."</span>". $observation['user']['login']); ?></div> 
  <?php endif; ?>

    <div class="date"><span class="label"><?php if(isset($observation['observed_on'])){ 
        $d = DateTime::createFromFormat('Y-m-d', $observation['observed_on'])->format('l j F Y');
        print(t('Date observed: ')."</span>".$d);
        } ?>
    </div>


  <?php if(isset($observation['place_guess']) && $observation['place_guess'] != ''): ?>
    <div class="place"><span class="label"><?php print(t('Place: ')."</span>".$observation['place_guess']); ?></div>
  <?php endif; ?>
</div>
