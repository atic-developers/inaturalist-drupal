<?php
global $base_url;
if($login['user_icon_url'] == NULL) { $login['user_icon_url'] = variable_get('inat_base_url', 'http://www.inaturalist.org') . '/attachment_defaults/users/icons/defaults/thumb.png'; }
drupal_add_js(drupal_get_path('module', 'inat_login') . '/js/sessionout.js');   
// Template del modúl de login
?>
<div id='user-data'>  
  <h4 id='login'> <?php print $login['name'] ?> </h4>
  <div id='usr-img'>  <img src='<?php print $login['user_icon_url'] ?>'> </img></div> 
 <div id='profile'> <a href='<?php  print $base_url . '/inat/user/'. $login['id'] ?>'> Profile </a> </div> 
  <div id='usrinfo-logout'> <a href='<?php print $base_url; ?>/inat/user/logout'> Logout </a> </div> 
  <div id='email'> <?php print $login['email'] ?> </div> 
</div> 


<?
?>
