<?php
/**
 * @file
 * inat_sitebuilding.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function inat_sitebuilding_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-inaturalist.
  $menus['menu-inaturalist'] = array(
    'menu_name' => 'menu-inaturalist',
    'title' => 'iNaturalist menu',
    'description' => 'The iNaturalist menu contains access iNaturalist modules pages, like in site www.inaturalist.org',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The iNaturalist menu contains access iNaturalist modules pages, like in site www.inaturalist.org');
  t('iNaturalist menu');


  return $menus;
}
