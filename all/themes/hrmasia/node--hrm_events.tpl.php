 
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

    <div class="post-body content-padding"> <?php print render($content['body']); ?> </div>
      <!--<div class="related-articles">
	<?php print views_embed_view('related_post','block_5'); ?> 
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
    
    <!--<div class="disqus-block"> <?php print render($content['disqus']); ?>  </div>-->
    
  </div>
  
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div>
