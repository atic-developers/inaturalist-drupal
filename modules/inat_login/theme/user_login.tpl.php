<?php
if($login['user_icon_url'] == NULL) { $login['user_icon_url'] = variable_get('inat_base_url', 'http://www.inaturalist.org') . '/attachment_defaults/users/icons/defaults/thumb.png'; }
// Template del modúl de login
?>

<div id='user-data'>  
  <h4 id='login'> <?php print $login['login'] ?> </h4>
  <div id='usr-img'>  <img src='<?php print $login['user_icon_url'] ?>'> </img></div>
  <div id='profile'> <a href='<?php print $login['uri'] ?>'> Profile </a> </div> 
</div> 


<?
?>
