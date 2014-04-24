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
//dsm($observation);
global $base_url;
?>
<? dsm($observation); ?>
<div class="inat_observation row" id="obs_<?php print($observation['id']); ?>">
  <div class="photo">
    <?php if (array_key_exists('photos_count',$observation) && $observation['photos_count'] == 0): ?>
      <span class="no_photo"><?php print(t('No photo')); ?></span>
    <?php else: ?>
      <?php //TODO considere multiple photos ?>
      <img src="<?php print($observation['photos'][0]['small_url']); ?>" alt="<?php print($observation['description']); ?>" />
    <?php endif; ?>
  </div> <!-- /photo -->
  <h2><a href="<?php print($base_url . '/inat/observations/' . $observation['id']); ?>"><?php print($observation['species_guess']); ?></a></h2>
  <div class="description"><?php print($observation['description']); ?></div>
  <div class="observer"><?php print(t('Observer: ') . $observation['user']['login']); ?></div>
  <div class="date"><?php 
    $d = DateTime::createFromFormat('Y-m-d', $observation['observed_on'])->format('l j F Y');
    print(t('Date observed: ').$d);
    ?></div>
  <div class="place"><?php print(t('Place: ').$observation['place_guess']); ?></div>

</div>
