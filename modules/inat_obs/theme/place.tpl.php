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
<div class="inat_project row" id="prj_<?php print($place['id']); ?>">
  <div class="photo">
      <img src="<?php print($place['photo_url']); ?>"/>
  </div> <!-- /photo -->
  <h2><a href="<?php print($base_url . '/inat/place/' . $place['id']); ?>"><?php print($place['display_name']); ?></a></h2>
  <?php //if($place['id'] != 48460): ?><a href="<?php print($base_url . '/inat/place/' . $place['parent_id']); ?>"><?php print(t('Parent')); ?></a><?php //endif;?>

</div>
