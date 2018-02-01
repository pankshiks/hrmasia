 <?php
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php  print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <span class="submitted"><?php print $submitted ?></span>
  <?php endif; ?>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <div class="links"><?php print render($content['links']); ?></div>
    <?php endif; ?>

    <?php //print render($content['comments']); ?>
  </div>
  <?php if($type != 'poll'){?> 
  <div id="fb-root"></div>
  <script>(function(d, s, id) {
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) return;
    js = d.createElement(s); js.id = id;
    js.src = 'https://connect.facebook.net/en_GB/sdk.js#xfbml=1&version=v2.11';
    fjs.parentNode.insertBefore(js, fjs);
  }(document, 'script', 'facebook-jssdk'));</script>
  
  <?php 
    $path = current_path();
    global $base_url;
    $path_alias = $base_url.'/'.drupal_lookup_path('alias',$path);
    //$path_alias = 'http://hrmasia.com';
  ?>
  <div class="fb-wrap wrap1">
    <div class="fb-like" data-href="<?php print $path_alias; ?>" data-layout="button_count" data-action="like" data-size="small" data-show-faces="true" data-share="false"></div>
  </div>

  <!-- Twitter Follow button -->
  <div class="twitter-wrap wrap1">
    <a href="https://twitter.com/TwitterDev" class="twitter-follow-button" data-show-count="true">Follow @TwitterDev</a><script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>
  </div>

   <!-- Link In Follow button -->
  <div class="linkin-wrap wrap1">
    <script src="//platform.linkedin.com/in.js" type="text/javascript"> lang: en_US</script>
    <script type="IN/FollowCompany" data-id="1807878" data-counter="right"></script>
  </div>

  <!-- Facebook Share button -->
  <div class="fbshare-wrap wrap1">
    <div class="fb-share-button" data-href="<?php print $path_alias; ?>" data-layout="button_count" data-size="small" data-mobile-iframe="true"><a class="fb-xfbml-parse-ignore" target="_blank" href="https://www.facebook.com/sharer/sharer.php?u=http%3A%2F%2Fhrmasia.com%2F&amp;src=sdkpreparse">Share</a></div>
  </div>

    <!-- Link in Share button -->
  <div class="tweet-wrap wrap1">
    <!-- Tweet Button -->
    <a href="https://twitter.com/share?ref_src=twsrc%5Etfw" class="twitter-share-button" data-show-count="true">Tweet</a>
    
    <!-- <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script> -->
  </div>

  <!-- Link in Share button -->
  <div class="linkinshare-wrap wrap1">
    <!-- <script src="//platform.linkedin.com/in.js" type="text/javascript"> lang: en_US</script> -->
    <script type="IN/Share" data-url="<?php print $path_alias; ?>" data-counter="right"></script>
  </div>

  <div class="fb-comments" data-href="<?php print $base_url.$path_alias; ?>" data-numposts="2"></div>
  <?php }?>
</div>
