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
        <div class="post-body"> <?php print render($node->body['und'][0]['safe_value']); ?> </div>
        <?php
      }
    ?>  
    	<!-- <div class="post-body"> <?php print render($content['body']); ?> </div> -->
     
	
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
      global $base_url;
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
    <!-- <div class="news-pager related-articles">
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
    </div>  -->

     <?php
    $arg_nid = arg(1);
    $suggested_news_array_val = array();
    $count_nid = 1;
    $output = '';

    $suggested_news_tid_array = db_query("select DISTINCT ft.field_tags_tid from {node} as n inner join {field_data_field_tags} as ft on n.nid = ft.entity_id where type='news' and status=1 and nid = $arg_nid");
    $suggested_news_tid = $suggested_news_tid_array->fetchAll();
    if(isset($suggested_news_tid) && !empty($suggested_news_tid)){
      foreach ($suggested_news_tid as $tid_key => $tid_value) {
        $suggested_news_array = db_query("select DISTINCT nid from {node} as n inner join {field_data_field_tags} as ft1 on n.nid = ft1.entity_id where type='news' and status = 1 and nid != $arg_nid and ft1.field_tags_tid = $tid_value->field_tags_tid Order by nid desc Limit 6");
        $suggested_news = $suggested_news_array->fetchAll();
        foreach ($suggested_news as $art_key => $art_value) {
          if (!in_array($art_value->nid, $suggested_news_array_val) && $count_nid < 7){
            $suggested_news_array_val[] = $art_value->nid;
          }
          $count_nid++;
        } 
      }
      
      foreach ($suggested_news_array_val as $art1_key => $art1_value) {
        $node_details = node_load($art1_value);
       
        $node_url = drupal_get_path_alias('node/'.$art1_value);     
        if(isset($node_details->field_author_name['und']) && !empty($node_details->field_author_name['und'][0]['uid'])){
          $author_id = $node_details->field_author_name['und'][0]['uid'];
          $sql = db_query("SELECT name FROM {users} WHERE uid = '$author_id'");
          $records = $sql->fetchObject();

          //$author_name = '<a href="'.$base_url.'/users/'.$author_id.'">'.$records->name.'</a>';
          $author_name = $records->name;
        }else{
          $author_name = '';
        }

        if(isset($node_details->field_date['und']) && !empty($node_details->field_date['und'][0]['value'])){
          $author_id = $node_details->field_date['und'][0]['value'];
          $new_date = date('d M Y',strtotime($author_id));
        }else{
          $new_date = '';
        }

        if(isset($node_details->body['und']) && !empty($node_details->body['und'][0]['value'])){
          $summary = strip_tags(trim($node_details->field_news_summary['und'][0]['value']));
          $desc = substr($summary, 0, 240);
        }else{
          $desc = '';
        }

        if(isset($node_details->field_image[LANGUAGE_NONE]) && !empty($node_details->field_image[LANGUAGE_NONE])){
          $imgpath = file_load($node_details->field_image[LANGUAGE_NONE][0]['fid'])->uri;
          $page_img = file_create_url(image_style_url("feature_list_page__600_400_", $imgpath));
          $img = '<img src="'.file_create_url($page_img).'"/>';
        }else{
          $img = '';
        }
      
        $output.='<div class="views-column"><a class="'.$arrow_class.'" href="'.$base_url.'/'.$node_url.'"><div class="view-field-img">'.$img.'</div>
               <div class="view-field-title article-title">'.$node_details->title.'</div></a>
               <div class="created">'.$author_name.' - '.$new_date.'</div>
               <div class="view-field-body">'.$desc.'</div></div>';
      }
    }

    if(!empty($output)){
  ?>
    <div class="view-news-list suggested-articles">
      <div class="view-content">
         <div class="views-responsive-grid">
           <div class="views-row ">
            <?php print $output; ?>
          </div>
        </div>
      </div>
    </div>
  <?php }?>


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
    //print render($content['comments']);
    /*}
    else{
$link = '/user/login?destination='.$_GET["q"];
      print '<a href="'.$link.'"><img src="http://www.hrmasia.com/sites/default/files/commentbox.jpg"></a>';
}*/
 ?>

<div class="fb-comments" data-href="<?php print $base_url.$path_alias; ?>" data-numposts="2"></div>

</div>
