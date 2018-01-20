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
	  $searchjob = module_invoke('views','block_view','-exp-jobs_list-page');
	  
	  $company = node_load($node->field_company_ref['und'][0]['nid']); 
		$company_logourl = $company ->field_image['und'][0]['uri']; 
		//$style = 'medium';
		//dpm(file_create_url($company_logourl));
	?>

      <h1 class="title"><span>Jobs</span></h1>
   <div class="searchjobform"> 
       <?php print render($searchjob['content']); ?> </div>
   <div class="custom-job-page content-padding clearfix">
         <div class="post-title"> <h1> <?php print $node->title; ?> </h1> </div>
       <div class="post-top clearfix">
           <div class="post-top-left">
  
    <div class="author-date"> <?php print render($content['field_date']) ;?> </div>
    <div class="post-company"> <?php print $company->title; ?> </div>
    <div class="post-region"> <?php print render($content['field_region']); ?> </div> 
        <div class="post-email"> <?php print render($content['field_apply_email_address']); ?> </div>
    <div class="post-salary"> <?php print render($content['field_salary']); ?> </div> 
           </div>
           <?php
              if ( !empty ( $company_logourl ) ) {
            ?>
              <div class="post-image"> <img src="<?php print file_create_url($company_logourl); ?>"> </div>
            <?php
              }
           ?>
       </div>
 
    <div class="post-body"> <?php print render($content['body']); ?> </div>
    
   <div class="applynow"> 
  <?php
    $apply_link = null;
   if(isset($node->field_apply_email_address['und'][0]['email'])){
     $apply_link = "<a class='button' style='margin-right:5px' href=mailto:".$node->field_apply_email_address['und'][0]['email']." target='_top'>Apply through email</a>";
   }
   if(isset($node->field_apply_to_url['und'][0]['value'])){
    $apply_link .= "<a class='button' href='".$node->field_apply_to_url['und'][0]['value']."' target='_blank'>Apply on website</a>";
   }

   print $apply_link;
   ?>
   </div>

   </div>
  </div>
  
  <?php print render($content['links']); ?>
  <?php //print render($content['comments']); ?>

</div>
<script type="text/javascript">
function _gaLt(t){if(ga.hasOwnProperty("loaded")&&1==ga.loaded){for(var e=t.srcElement||t.target;e&&("undefined"==typeof e.tagName||"a"!=e.tagName.toLowerCase()||!e.href);)e=e.parentNode;if(e&&e.href){var a=e.href;if(-1==a.indexOf(location.host)&&!a.match(/^javascript\:/i)){var n=(e.target&&!e.target.match(/^_(self|parent|top)$/i)?e.target:!1,!1),o=function(){n||(n=!0,window.location.href=a)};e.target&&!e.target.match(/^_(self|parent|top)$/i)?ga("send","event","Outgoing Links",a,document.location.pathname+document.location.search):(ga("send","event","Outgoing Links",a,document.location.pathname+document.location.search,{hitCallback:o}),setTimeout(o,1e3),t.preventDefault?t.preventDefault():t.returnValue=!1)}}}}var w=window;w.addEventListener?w.addEventListener("load",function(){document.body.addEventListener("click",_gaLt,!1)},!1):w.attachEvent&&w.attachEvent("onload",function(){document.body.attachEvent("onclick",_gaLt)});
</script>
