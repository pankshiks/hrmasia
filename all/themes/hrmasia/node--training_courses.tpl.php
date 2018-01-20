<?php
//dpm($content);
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
	  $share_block = module_invoke('sharethis','block_view','sharethis_block');
	  $searchjob = module_invoke('views','block_view','-exp-courses-page');
    ?>
      <div class="course-top">
      <h1 class="title"><span>Courses</span></h1>
		<!--
		<div class="searchjobform"> 
       <?php //print render($searchjob['content']); ?> 
	    </div>
		-->
      </div>
   <div class="custom-job-page content-padding clearfix">
         <div class="post-title"> <h1> <?php print $node->title; ?> </h1> </div>
       <div class="post-top clearfix">
           <div class="post-top-left">
  
    <div class="author-date"> <?php print render($content['field_date']) ;?> </div>
    <div class="post-company"> <?php print render($content['field_trainining_company']); ?> </div>
    <div class="post-region"> <?php print render($content['field_location']); ?> </div> 
        <div class="post-email"> <?php print render($content['field_contact_us_email']); ?> </div>
    <div class="post-salary"> <?php print render($content['field_salary']); ?> </div> 
           </div>
       </div>
	
    <div class="post-region"> <?php print render($content['field_training_provider']); ?> </div> 
    <div class="post-cost"> <?php print render($content['field_cost2']); ?> </div>
    <div class="post-certification"> <?php print render($content['field_certification']); ?> </div>
   <!-- <div class="post-benefits"> <?php //print render($content['field_course_benefits']); ?> </div>-->
    <div class="post-key-benefits"> <?php print render($content['field_key_benefits']); ?> </div>
    
    
    <div class="post-body"> <?php print render($content['body']); ?> </div>
    
   <div class="applynow"> 
    <?php if(!empty($node->field_register_link_url['und'][0]['url'])){ ?>
       <a class="button" href="<?php print $node->field_register_link_url['und'][0]['url']; ?>" target="_blank"> Apply Now</a> 
    <?php } else { ?>
    <a class="button" href=mailto:"<?php isset($node->field_contact_us_email['und'][0]['email']) ? print $node->field_contact_us_email['und'][0]['email'] : ''; ?>" 
      target="_top"> Apply Now</a> 
    <?php  }   ?>
    </div>

   </div>
  </div>
  
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div>
