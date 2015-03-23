<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div> 

<?php //showing all observations associated with the transect
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'inat_observation')
  ->propertyCondition('status', NODE_PUBLISHED)
  ->fieldCondition('inat_obs_add_reference', 'target_id', (integer) $node->nid, '=')
  ->range(0, 10)
  ->addMetaData('account', user_load(1)); // Run the query as user 1.

$result = $query->execute();
if (isset($result['node'])) {
 $news_items_nids = array_keys($result['node']);
 $news_items = entity_load('node', $news_items_nids);
}
 foreach ($news_items as $norender) {
   $render = node_view($norender, $view_mode = 'teaser');
   $rendered= drupal_render($render);
   print ($rendered);
}
?>
<div class="inat_observation row" id="obs_<?php print($id); ?>">                                                                      
  <div class="photo">
    <?php if (array_key_exists('photos_count',$observation) && $observation['photos_count'] == 0): ?>  
      <span class="no_photo"><?php print(t('No photo')); ?></span>
    <?php elseif(isset($observation['photos'][0])): ?>
      <div class="cycle-slideshow  img-wrapper img-wrapper-<?php print $id; ?>"
      data-cycle-slides="> figure"
      data-cycle-fx=fade
      >
        <?php foreach($observation['photos'] as $id => $img): ?>
          <figure>
            <img src="<?php print($img['small_url']); ?>" alt="<?php print($observation['description']); ?>" class="img-<?php print $id; ?>"/>
            <figurecaption><?php print($img['attribution']); ?></figurecaption>
          </figure>
        <?php endforeach; ?>
      </div>
     <?php else: ?>       
<?php print('<span class="no_photo"> <img src="'.$base_url.'/sites/all/modules/inat/modules/inat_obs/img/default.png"></img></span>'); ?>
 
   <?php endif; ?>
 </div> <!-- /photo -->
  <h2><a href="<?php print($base_url . '/inat/observation/' . $observation['id']); ?>"><?php print($observation['species_guess']); ?></a></h2>
  <div class="description"><?php print($observation['description']); ?></div>
  
 
  <?php if(isset($observation['user']['login'])): ?>
     <div class="observer"><span class="label"><?php print(t('Observer: ') ."</span>". $observation['user']['login']); ?></div> 
  <?php endif; ?>

    <div class="date"><span class="label"><?php if(isset($observation['observed_on'])){ 
        $d = DateTime::createFromFormat('Y-m-d', $observation['observed_on'])->format('l j F Y');
        print(t('Date observed: ')."</span>".$d);
        } ?>
    </div>


  <?php if(isset($observation['place_guess']) && $observation['place_guess'] != ''): ?>
    <div class="place"><span class="label"><?php print(t('Place: ')."</span>".$observation['place_guess']); ?></div>
  <?php endif; ?>
</div>                      
