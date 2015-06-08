<?php
/**
 * @file
 * inat_sitebuilding.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inat_sitebuilding_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'transects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Transects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Transectos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'inat_obs_add_map';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Points */
  $handler->display->display_options['fields']['inat_obs_add_map']['id'] = 'inat_obs_add_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['table'] = 'field_data_inat_obs_add_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['field'] = 'inat_obs_add_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['label'] = '';
  $handler->display->display_options['fields']['inat_obs_add_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['inat_obs_add_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['inat_obs_add_map']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_center' => array(
      'lat' => '',
      'lon' => '',
      'geocode' => 'Find my location',
    ),
    'geofield_map_zoom' => '8',
    'geofield_map_min_zoom' => '0',
    'geofield_map_max_zoom' => '0',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  /* Campo: Contenido: Descripción */
  $handler->display->display_options['fields']['inat_obs_add_description']['id'] = 'inat_obs_add_description';
  $handler->display->display_options['fields']['inat_obs_add_description']['table'] = 'field_data_inat_obs_add_description';
  $handler->display->display_options['fields']['inat_obs_add_description']['field'] = 'inat_obs_add_description';
  $handler->display->display_options['fields']['inat_obs_add_description']['label'] = '';
  $handler->display->display_options['fields']['inat_obs_add_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['inat_obs_add_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['inat_obs_add_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Contenido: Portada */
  $handler->display->display_options['fields']['field_portada']['id'] = 'field_portada';
  $handler->display->display_options['fields']['field_portada']['table'] = 'field_data_field_portada';
  $handler->display->display_options['fields']['field_portada']['field'] = 'field_portada';
  $handler->display->display_options['fields']['field_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portada']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id=title> [title] </div>
<div id=cos> <div id=photo> [field_portada] </div> <div id=description> [inat_obs_add_description] </div>';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inat_transect' => 'inat_transect',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['path'] = 'transects';

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Bloque */
  $handler = $view->new_display('block', 'Bloque', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Points */
  $handler->display->display_options['fields']['inat_obs_add_map']['id'] = 'inat_obs_add_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['table'] = 'field_data_inat_obs_add_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['field'] = 'inat_obs_add_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['label'] = '';
  $handler->display->display_options['fields']['inat_obs_add_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['inat_obs_add_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['inat_obs_add_map']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['inat_obs_add_map']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_center' => array(
      'lat' => '',
      'lon' => '',
      'geocode' => 'Find my location',
    ),
    'geofield_map_zoom' => '8',
    'geofield_map_min_zoom' => '0',
    'geofield_map_max_zoom' => '0',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  /* Campo: Contenido: Descripción */
  $handler->display->display_options['fields']['inat_obs_add_description']['id'] = 'inat_obs_add_description';
  $handler->display->display_options['fields']['inat_obs_add_description']['table'] = 'field_data_inat_obs_add_description';
  $handler->display->display_options['fields']['inat_obs_add_description']['field'] = 'inat_obs_add_description';
  $handler->display->display_options['fields']['inat_obs_add_description']['label'] = '';
  $handler->display->display_options['fields']['inat_obs_add_description']['element_label_colon'] = FALSE;
  $translatables['transects'] = array(
    t('Master'),
    t('Transectos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Portada'),
    t('Custom text'),
    t('<div id=title> [title] </div>
<div id=cos> <div id=photo> [field_portada] </div> <div id=description> [inat_obs_add_description] </div>'),
    t('Page'),
    t('Entity Reference View Widget'),
    t('Bloque'),
  );
  $export['transects'] = $view;

  return $export;
}
