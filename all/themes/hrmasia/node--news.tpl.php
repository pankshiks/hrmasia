 <div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.4";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
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
	  //$share_block = module_invoke('sharethis','block_view','sharethis_block');
	  //$subscribe_block = module_invoke('notifications_ui','block_view','subscriptions');
    ?>
    <div class="acticle-top">
    <!--<div class="post-category"> <?php print render($content['field_tags']); ?> </div>-->
    <div class="post-title"> <h1> <?php print $node->title; ?> </h1> 
    
     <div class="social-share-post"> <?php //print render($share_block['content']); ?> 
<script src="//platform.linkedin.com/in.js" type="text/javascript"> lang: en_US</script>
<script type="IN/Share" data-url="http://hrmasia.com<?php print $node_url; ?>"></script>
      <div class="fb-like" data-href="http://hrmasia.com<?php print $node_url; ?>" 
      data-layout="button_count" data-action="like" data-show-faces="false" data-share="false"></div>
     </div>

    </div>
    
    <div class="author-date"> <span class="author"><?php print $name;  ?></span> - <span class="post-date"><?php print render($content['field_date']) ;?></span> </div>
    </div>
   
    <div class="post-image img-responsive">
      <a target="_blank" href="/sites/default/files/<?php print $node->field_image['und'][0]['filename']; ?>"><?php print render($content['field_image']); ?>
   </a>
<!-- <a href="/sites/default/files/<?php //print $node->field_image['und'][0]['filename']; ?>" target="_blank" style="float: left;">
        View larger image <img width="28px" src="http://hrmasia.com/sites/default/files/zoom-tool.png" style="float: right; padding-left: 9px; margin-bottom: 11px;"></a>-->
 </div>
    <div class="post-summary content-padding"> <?php print render($node->field_news_summary['und'][0]['value']);  ?> </div>
        
      
    	<div class="post-body"> <?php print render($content['body']); ?> </div>
     
	
<a href="http://hrmasia.com/news" class="single_news-link">Click here for more HRM News</a>

<!--<div class="ibm-capm" style="float: left; background: rgb(247, 247, 247) none repeat scroll 0% 0%; padding: 28px; margin: 40px 0px 3px;">
<div class="block-content-title" style="border-bottom: 1px solid rgb(204, 204, 204); width: 50%; margin-bottom: 35px; padding-bottom: 15px;">Social tools for collaboration</div>
<a href="http://hrmasia.com/content/social-tools-collaboration" target="_blank">
<img src="http://www.hrmasia.com/sites/default/files/ibm-newman.jpg" width="450"></a>
<p> Today's modern HR teams want to use social tools within their workplaces to more effectively collaborate with their talent and colleagues. Mat Newman, IBM's Collaboration Executive in Southeast Asia, explains how the company's product offerings are being tailored with this purpose in mind.</p>
</div>-->

<!--<div class="ibm-capm" style="float: left; background: rgb(247, 247, 247) none repeat scroll 0% 0%; padding: 28px; margin: 40px 0px 3px;">
<div class="block-content-title" style="border-bottom: 1px solid rgb(204, 204, 204); width: 50%; margin-bottom: 35px; padding-bottom: 15px;">Reinventing engagement</div>
<a href="http://hrmasia.com/content/reinventing-engagement" target="_blank">
<img src="http://www.hrmasia.com/sites/default/files/ann-shen-big.jpg" width="450"></a>
<p> Ann Shen, HR Director for IBM in the ASEAN region, shares how the company's HR team has rebuilt its employee engagement policies and performance management structure.</p>
</div>-->

  
    <?php 
      $path = current_path();
      $path_alias = '/'.drupal_lookup_path('alias',$path);
      //$path_alias = 'http://hrmasia.com';
    ?>
    <div class="fb-wrap wrap1">
      <div class="fb-like" data-href="<?php print $path_alias; ?>" data-layout="button_count" data-action="like" data-size="small" data-show-faces="true" data-share="false"></div>
    </div>

    <!-- Twitter Follow button -->
    <div class="twitter-wrap wrap1">
      <a href="https://twitter.com/TwitterDev?ref_src=twsrc%5Etfw" class="twitter-follow-button" data-show-count="true">Follow @TwitterDev</a><script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>
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

	<!-- Add pager at the bottom -->
    <div class="news-pager related-articles">
        <ul>
            <li class="views-row-odd">
             <?php 
          		if($content['flippy_pager']['#list']['prev']['nid']){
          			print render(prev_next('prev', $content['flippy_pager']['#list']['prev']['nid']));
                                  }?></li>
                      <li class="views-row-even"> <?php 
          		if($content['flippy_pager']['#list']['next']['nid']){
          			print render(prev_next('next', $content['flippy_pager']['#list']['next']['nid']));
          		}
              ?></li>
	
        </ul>
    </div>


	<!--
	<div class="related-articles">
	<?php 
		if ($node->field_tags){
			//print views_embed_view('related_post','block_2',$node->field_tags['und'][0]['tid']); 
		}
	?> 
     </div>-->
    
    <div class="disqus-block"> <?php //print render($content['disqus']); ?>  </div>
    
  </div>

    
  
  <?php print render($content['links']); ?>
  <?php //if($user->uid){
    print render($content['comments']);
    /*}
    else{
$link = '/user/login?destination='.$_GET["q"];
      print '<a href="'.$link.'"><img src="http://www.hrmasia.com/sites/default/files/commentbox.jpg"></a>';
}*/
 ?>

</div>
