
<?php
global $base_url; 
 ?>
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
