<?php
/**
 * @file
 * inat_sitebuilding.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function inat_sitebuilding_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-inaturalist_transects:transects
  $menu_links['menu-inaturalist_transects:transects'] = array(
    'menu_name' => 'menu-inaturalist',
    'link_path' => 'transects',
    'router_path' => 'transects',
    'link_title' => 'Transects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-inaturalist_transects:transects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Añadir usuario');
  t('Especies');
  t('Lugares');
  t('Observaciones');
  t('Transects');


  return $menu_links;
}
