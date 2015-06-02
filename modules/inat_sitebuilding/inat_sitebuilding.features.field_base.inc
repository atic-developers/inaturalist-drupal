<?php
/**
 * @file
 * inat_sitebuilding.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function inat_sitebuilding_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_imatges'
  $field_bases['field_imatges'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_imatges',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_observer_on'
  $field_bases['field_observer_on'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_observer_on',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_zona_horaria'
  $field_bases['field_zona_horaria'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zona_horaria',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '0 ' => ' Abu Dhabi',
        '1 ' => ' Adelaide',
        '2 ' => ' Africa/Johannesburg',
        '3 ' => ' Alaska',
        '4 ' => ' Almaty',
        '5 ' => ' American Samoa',
        '6 ' => ' Mid-Atlantic',
        '7 ' => ' Arizona',
        '8 ' => 'Asia/Magadan',
        '9 ' => ' Astana',
        '10 ' => ' Athens',
        '11 ' => ' Atlantic Time (Canada)',
        '12 ' => 'Atlantic/Cape_Verde',
        '13 ' => 'Auckland',
        '14 ' => 'Australia/Perth',
        '15 ' => 'Azores',
        '16 ' => 'Baghdad',
        '17 ' => 'Baku',
        '18 ' => 'Bangkok',
        '19 ' => 'Beijing',
        '20 ' => 'Belgrade',
        '21 ' => 'Berlin',
        '22 ' => ' Bern',
        '23 ' => ' Bogota',
        '24 ' => ' Brasilia',
        '25 ' => ' Bratislava',
        '26 ' => ' Brisbane',
        '27 ' => ' Brussels',
        '28 ' => ' Bucharest',
        '29 ' => ' Budapest',
        '30 ' => ' Buenos Aires',
        '31 ' => ' Cairo',
        '32 ' => ' Canberra',
        '33 ' => ' Cape Verde Is.',
        '34 ' => ' Caracas',
        '35 ' => ' Casablanca',
        '36 ' => ' Central America',
        '37 ' => ' Central Time (US & Canada)',
        '38 ' => ' Chennai',
        '39 ' => ' Chihuahua',
        '40 ' => ' Chongqing',
        '41 ' => ' Copenhagen',
        '42 ' => ' Darwin',
        '43 ' => ' Dhaka',
        '44 ' => ' Dublin',
        '45 ' => ' Eastern Time (US & Canada)',
        '46 ' => ' Edinburgh',
        '47 ' => ' Ekaterinburg',
        '48 ' => ' Europe/London',
        '49 ' => ' Fiji',
        '50 ' => ' Georgetown',
        '51 ' => ' Greenland',
        '52 ' => ' Guadalajara',
        '53 ' => ' Guam',
        '54 ' => ' Hanoi',
        '55 ' => ' Harare',
        '56 ' => ' Hawaii',
        '57 ' => ' Helsinki',
        '58 ' => ' Hobart',
        '59 ' => ' Hong Kong',
        '60 ' => ' Indiana (East)',
        '61 ' => ' International Date Line West',
        '62 ' => ' Irkutsk',
        '63 ' => ' Islamabad',
        '64 ' => ' Istanbul',
        '65 ' => ' Jerusalem',
        '66 ' => ' Kabul',
        '67 ' => ' Kamchatka',
        '68 ' => ' Karachi',
        '69 ' => ' Kathmandu',
        '70 ' => ' Kolkata',
        '71 ' => ' Krasnoyarsk',
        '72 ' => ' Kuala Lumpur',
        '73 ' => ' Kuwait',
        '74 ' => ' Kyiv',
        '75 ' => ' La Paz',
        '76 ' => ' Lima',
        '77 ' => ' Lisbon',
        '78 ' => ' Ljubljana',
        '79 ' => ' London',
        '80 ' => ' Madrid',
        '81 ' => ' Magadan',
        '82 ' => ' Marshall Is.',
        '83 ' => ' Mazatlan',
        '84 ' => ' Melbourne',
        '85 ' => ' Mexico City',
        '87 ' => ' Midway Island',
        '88 ' => ' Minsk',
        '89 ' => ' Monrovia',
        '90 ' => ' Monterrey',
        '91 ' => ' Moscow',
        '92 ' => ' Mountain Time (US & Canada)',
        '93 ' => ' Mumbai',
        '94 ' => ' Muscat',
        '95 ' => ' Nairobi',
        '96 ' => ' New Caledonia',
        '97 ' => ' New Delhi',
        '98 ' => ' Newfoundland',
        '99 ' => ' Novosibirsk',
        '100 ' => ' Nuku\'alofa',
        '101 ' => ' Osaka',
        '102 ' => ' Pacific Time (US & Canada)',
        '103 ' => ' Pacific/Majuro',
        '104 ' => ' Pacific/Port_Moresby',
        '105 ' => ' Paris',
        '106 ' => ' Perth',
        '107 ' => ' Port Moresby',
        '108 ' => ' Prague',
        '109 ' => ' Pretoria',
        '110 ' => ' Quito',
        '111 ' => ' Rangoon',
        '112 ' => ' Riga',
        '113 ' => ' Riyadh',
        '114 ' => ' Rome',
        '115 ' => ' Samoa',
        '116 ' => ' Santiago',
        '117 ' => ' Sapporo',
        '118 ' => ' Sarajevo',
        '119 ' => ' Saskatchewan',
        '120 ' => ' Seoul',
        '121 ' => ' Singapore',
        '122 ' => ' Skopje',
        '123 ' => ' Sofia',
        '124 ' => ' Solomon Is.',
        '125 ' => ' Sri Jayawardenepura',
        '126 ' => ' St. Petersburg',
        '127 ' => ' Stockholm',
        '128 ' => ' Sydney',
        '129 ' => ' Taipei',
        '130 ' => ' Tallinn',
        '131 ' => ' Tashkent',
        '132 ' => ' Tbilisi',
        '133 ' => ' Tehran',
        '134 ' => ' Tijuana',
        '135 ' => ' Tokelau Is.',
        '136 ' => ' Tokyo',
        '137 ' => ' UTC',
        '138 ' => ' Ulaan Bataar',
        '139 ' => ' Urumqi',
        '140 ' => ' Vienna',
        '141 ' => ' Vilnius',
        '142 ' => ' Vladivostok',
        '143 ' => ' Volgograd',
        '144 ' => ' Warsaw',
        '145 ' => ' West Central Africa',
        '146 ' => ' Yakutsk',
        '147 ' => ' Yerevan',
        '148 ' => ' Zagreb',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'inat_obs_add_id_please'
  $field_bases['inat_obs_add_id_please'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'inat_obs_add_id_please',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Sí',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'inat_obs_add_map'
  $field_bases['inat_obs_add_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'inat_obs_add_map',
    'foreign keys' => array(),
    'indexes' => array(
      'bbox' => array(
        0 => 'top',
        1 => 'bottom',
        2 => 'left',
        3 => 'right',
      ),
      'bottom' => array(
        0 => 'bottom',
      ),
      'centroid' => array(
        0 => 'lat',
        1 => 'lon',
      ),
      'geohash' => array(
        0 => 'geohash',
      ),
      'lat' => array(
        0 => 'lat',
      ),
      'left' => array(
        0 => 'left',
      ),
      'lon' => array(
        0 => 'lon',
      ),
      'right' => array(
        0 => 'right',
      ),
      'top' => array(
        0 => 'top',
      ),
    ),
    'locked' => 0,
    'module' => 'geofield',
    'settings' => array(
      'backend' => 'default',
      'srid' => 4326,
    ),
    'translatable' => 0,
    'type' => 'geofield',
  );

  // Exported field_base: 'inat_obs_add_species_guess'
  $field_bases['inat_obs_add_species_guess'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'inat_obs_add_species_guess',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
