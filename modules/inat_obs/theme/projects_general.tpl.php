<?php
/**
 * iNaturalist theme for observations
 * Copyright 2014 Projecte Ictineo SCCL (www.projecteictineo.com)
 * aGPLv3
 *
 * All data is recived in $content variable
 * the structure is like is retoruned by
 * inaturalist api
 */

/**
 * Add mapping bases
 */
print('<a href="#"> switch featured </a>');
foreach( $projects as $id => $obs) {
  print($obs);
}
print('<a href="#"> prev </a><a href="#"> next </a>');

?>


