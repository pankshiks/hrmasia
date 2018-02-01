 
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
	  $share_block = module_invoke('sharethis','block_view','sharethis_block');

    ?>
    
   <div class="acticle-top content-padding">
    <div class="post-title"> <h1> <?php print $node->title; ?> </h1> </div>
    <div class="post-summary"> <?php print render($node->body[$node->language][0]['safe_summary']);  ?> </div>
    <div class="author-date"> <span class="post-date"><?php print render($content['field_date']) ;?></span> </div>
   </div>
    <div class="social-share-post content-padding"> <?php print render($share_block['content']); ?> </div>

    <?php   

      if (isset($node->body['und']) && !empty($node->body['und'])) {
        $ads_array = explode("<p>", $node->body['und'][0]['safe_value']);

        $ad_count = 3;
        foreach ($ads_array as $key => $value) {
          if($key % 4 == 0 && $key > 0){
            /*$ads_array[$key] = $value."<div id='div-gpt-ad-1456419201166-".$ad_count."'>
                  <script type='text/javascript'>
                  googletag.cmd.push(function() { googletag.display('div-gpt-ad-1456419201166-".$ad_count."'); });
                  </script>
                  </div>";
                  $ad_count++;*/

            $ads_array[$key] = $value.'<div style ="width:100%"class="mpu-size ad-'.$ad_count.'"><img src="/hrmasia/sites/default/files/field/images/92300732.jpg"></div>';
                  $ad_count++;
          }
        }
        $node->body['und'][0]['safe_value'] = implode("<p>", $ads_array);
        ?>
        <div class="post-body content-padding"> <?php print render($node->body['und'][0]['safe_value']); ?> </div>
        <?php
      }
    ?>  

    <!-- <div class="post-body content-padding"> <?php //print render($content['body']); ?> </div> -->


    <!-- Facebook Like button -->
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
      <!--<div class="related-articles">
	<?php //print views_embed_view('related_post','block_5'); ?> 
      </div>-->
   
   <!--<div class="subscribe-block">
		<?php
			//global $user;
			//if(!$user->uid)
			//{
			//	print 'Login in as subscriber to read the full article. Not a Subscriber Yet? Register Now!';
			//	print '<div classs="subscribebutton">' . l('Subscribe Now', 'user/register', array('query' => array('destination' => $_GET['q']))). '</div>';
		//	}
		//	else 
		//	{
		//		print render($subscribe_block['content']); 
		//	}
		?>  
    </div>-->
    
    <!--<div class="disqus-block"> <?php //print render($content['disqus']); ?>  </div>-->
    
  </div>
  
  <?php print render($content['links']); ?>
  <?php //print render($content['comments']); ?>

</div>
