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

foreach( $observations as $id => $obs) {
  dsm($obs);
  print($obs);
}


?>


