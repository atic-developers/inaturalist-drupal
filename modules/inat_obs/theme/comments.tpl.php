<?php 


global $base_url;
$hour = substr($comments['updated_at'], strpos($comments['updated_at'],'T'),9);
$hour['0'] = '';
$data = strstr($comments['updated_at'], 'T', true).' - '.$hour;

?>
<div class='comment' id='comments-<?php print($comments['id'])?>'>  
  <div class='user-column'> 
  <div class='user-name'> <?php print($comments['user']['name']) ?>
    </div>
    <a href='<?php print($base_url)?>/inat/user/<?php print($comments['user_id'])?>'>
     <img class='usericon' alt='' src='<?php print($comments['user']['user_icon_url'])?>'></img>
    </a>
  </div>
  <div class='body-column'>
    <div class='comment-body'> <?php print($comments['body'])?> </div>
    <div class='comment-data'> Updated at:  <?php  print($data)?> </div>
  </div>
  <div class= 'ident-column'> 
   <?php if(isset($comments['taxon'])): ?>
    <div class='taxo'> Taxon Identification </div> 
    <div class='info'> 
       <div class='name-c'> <?php print($comments['taxon']['name'])?> </div>
       <div class='name-c'> Common name:  <?php print($comments['taxon']['common_name']['name'])?> </div>
     </div>
     <div class='image'> 
       <a href='<?php print($base_url)?>/inat/taxa/<?php print($comments['taxon']['id'])?>'>
         <img class='usericon' alt='' src='<?php print($comments['taxon']['image_url'])?>'></img>
       </a>
     </div>
   <?php endif; ?>
  </div>
  <div class='actions'>
   <?php  if(isset($_SESSION['user_login'])): ?>
       <?php if( $_SESSION['user_login'] == $comments['user']['login'] ): ?>  
  <div class='delete_button'> <a href='<?php print($base_url)?>/inat/observation/<?php print($comments['parent_id'])?>/comment/<?php print($comments['id'])?>'> <?php print(t('Delete comment')) ?> </a> </div>
       <?php endif; ?>
   <?php endif; ?>
  </div>



</div>
