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

  // Exported menu link: menu-inaturalist_aadir-usuario:inat/add/user
  $menu_links['menu-inaturalist_aadir-usuario:inat/add/user'] = array(
    'menu_name' => 'menu-inaturalist',
    'link_path' => 'inat/add/user',
    'router_path' => 'inat/add/user',
    'link_title' => 'Añadir usuario',
    'options' => array(
      'attributes' => array(
        'title' => 'Añadir usuario',
      ),
      'identifier' => 'menu-inaturalist_aadir-usuario:inat/add/user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-inaturalist_especies:inat/taxons
  $menu_links['menu-inaturalist_especies:inat/taxons'] = array(
    'menu_name' => 'menu-inaturalist',
    'link_path' => 'inat/taxons',
    'router_path' => 'inat/taxons',
    'link_title' => 'Especies',
    'options' => array(
      'attributes' => array(
        'title' => 'Especies de iNaturalist',
      ),
      'identifier' => 'menu-inaturalist_especies:inat/taxons',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-inaturalist_lugares:inat/places
  $menu_links['menu-inaturalist_lugares:inat/places'] = array(
    'menu_name' => 'menu-inaturalist',
    'link_path' => 'inat/places',
    'router_path' => 'inat/places',
    'link_title' => 'Lugares',
    'options' => array(
      'attributes' => array(
        'title' => 'iNaturalist places',
      ),
      'identifier' => 'menu-inaturalist_lugares:inat/places',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-inaturalist_observaciones:inat/observations
  $menu_links['menu-inaturalist_observaciones:inat/observations'] = array(
    'menu_name' => 'menu-inaturalist',
    'link_path' => 'inat/observations',
    'router_path' => 'inat/observations',
    'link_title' => 'Observaciones',
    'options' => array(
      'attributes' => array(
        'title' => 'Observaciones de iNaturalist',
      ),
      'identifier' => 'menu-inaturalist_observaciones:inat/observations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
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
