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
$prev_url = $base_url . '/inat/places/';
$next_url = $prev_url;
if($current_page > 1) {
  $prev_url .= $current_page - 1;
} else {
  $prev_url .= '1';
}
$next_url .= $current_page + 1;


foreach($places as $id => $place):
?>
<div class="inat_place row row-<?php print($id); ?>" id="prj_<?php print($place['id']); ?>">
  <div class="photo">
      <img src="<?php //print($place['photo_url']); ?>"/>
  </div> <!-- /photo -->
  <h2><a href="<?php print($base_url . '/inat/place/' . $place['id']); ?>"><?php print($place['display_name']); ?></a></h2>

</div>
<?php endforeach; ?>
<div class="pager-wrapper">
  <span id="prev-link" class="pager link"><a href="<?php print $prev_url; ?>"><?php print t('Prev'); ?></a></span>
  <span id="next-link" class="pager link"><a href="<?php print $next_url; ?>"><?php print t('Next'); ?></a></span>
</div>
