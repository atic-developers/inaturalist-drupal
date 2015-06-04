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
?>
<div class="inat_project row" id="prj_<?php print($user['id']); ?>">
<?php if ($user['medium_user_icon_url'] == 'NULL' || $user['medium_user_icon_url'] == '' ) { ?>
  <div class="photo">
  <img src="<?php print(variable_get('inat_base_url','http://www.inaturalist.org'))?>/attachment_defaults/users/icons/defaults/medium.png"/>  
  </div> <!-- /photo -->

<?php }
 else { ?>
  <div class="photo">
      <img src="<?php print($user['medium_user_icon_url']); ?>"/>  
  </div> <!-- /photo -->
<?php } ?>
  <h2><a href="<?php print($base_url . '/inat/user/' . $user['id']); ?>"><?php print($user['name']); ?></a></h2>
  <div class="observation_count"> <div class=label> Observation Count: </div>  <h2> <?php print($user['observations_count']); ?> </h2></div>
  <div class="ident_count"><div class=label> Identification Count:  </div><h2><?php print($user['identifications_count']); ?> </h2></div>
  <div class="journal_count"><?php print($user['description']); ?></div>
  <div class="description"><?php print($user['description']); ?></div>

</div>
