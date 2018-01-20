<div id="fix-header">
  <div id="header-wrapper" class="clearfix">
      <div id="header">
          <div id="logo-floater">
              <?php if ($logo || $site_title): ?>
                  <?php if ($title): ?>
                      <div id="branding"><strong><a href="<?php print $front_page ?>">
                                  <?php if ($logo): ?>
                                      <img src="<?php print $logo ?>" alt="<?php print $site_name_and_slogan ?>" title="<?php print $site_name_and_slogan ?>" id="logo" />
                                  <?php endif; ?>
                                  <?php print $site_html ?>
                              </a></strong></div>
                  <?php else: /* Use h1 when the content title is empty */ ?>
                      <h1 id="branding"><a href="<?php print $front_page ?>">
                              <?php if ($logo): ?>
                                  <img src="<?php print $logo ?>" alt="<?php print $site_name_and_slogan ?>" title="<?php print $site_name_and_slogan ?>" id="logo" />
                              <?php endif; ?>
                              <?php print $site_html ?>
                          </a></h1>
                  <?php endif; ?>
              <?php endif; ?>
          </div>
                  <?php print render($page['search_bar']); ?>
      </div> <!-- /#header -->
  </div>

<!--<div id="mainmenu" class="clearfix"> 
    <div class="mainmenu">
        <?php //print render($page['mainmenu']); ?>
    </div>
</div>-->
</div>

<!--<div class="menu-top-wrapper">
  <?php //print render($page['user_menu']); ?>
</div>-->

<div class="menu-top-wrapper">
  <div class="menu-inner-wrapper">

  <div class="menu-first">
    <span>
      <a href="/">Home</a>
      <a href="/content/about-us">About Us</a>
      <a href="/content/subscribe">Subscribe here</a>
      <?php 
      global $user;
      if($user->uid > 0){  ?>
        <a href="/user/logout">Logout</a>
      <?php } else {  ?>
        <a href="/user">Login</a>
      <?php } ?>

    </span>
    <span> 
     <div class="front-icons">
          <a href="https://www.facebook.com/HRMAsiaMag" target="_blank"><img src="/hrmasia/sites/default/files/facebook-icon.png" style="width: 26px;"></a>
          <a href="https://www.linkedin.com/company/hrm-asia" target="_blank"><img src="/hrmasia/sites/default/files/linkedIn-icon.png" style="width: 26px;"></a>
          <a href="https://twitter.com/HRM_Asia" target="_blank"><img src="/hrmasia/sites/default/files/twitter.png" style="width: 26px;"></a>
     </div>
     <?php print render($page['user_menu']); ?>
    </span>
  </div>
  
  <div class="menu-second">
    <!-- <div class="menu-one menudiv">
      <span><a href="http://www.hrsummit.com.sg" target="_blank">HR Summit & Expo</a></span>
      <span><a href="http://congress.hrmasia.com" target="_blank">HRM Asia Congress</a></span>
    </div>

    <div class="menu-two menudiv">
      <span><a href="http://www.hrmawards.com" target="_blank">HRM Awards</a></span>
      <span><a href="http://smartworkforcesummit.hrmasia.com" target="_blank">Smart Workforce Summit</a></span>
    </div>

    <div class="menu-three menudiv">
      <span><a href="http://hrmreaderschoice.com" target="_blank">Readers Choice Awards</a></span>  
      <span><a href="/hrm-magazine">HRM Magazine</a></span>
    </div> -->
     <?php print render($page['mainmenu']); ?>
  </div>

  </div>
</div>


<div id="main-wrapper" class="clearfix">
    <?php if ($page['highlighted']): ?>
    <div id="highlighted">
        <?php print render($page['highlighted']); ?>
    </div>
    <?php endif; ?>

    <!--<div id="breadcrumb"> <?php //print $breadcrumb; ?></div>-->
    

      <?php if ($page['highlighted1']): ?><div id="highlighted1"><?php print render($page['highlighted1']); ?></div><?php endif; ?>
   

    

    <div id="container" class="clearfix">

      <div id="div-gpt-ad-1472994367402-0" style="height: 280px; width: 970px; margin: 23px auto 10px; border: 1px solid rgb(224, 229, 233);">
        <script>
        googletag.cmd.push(function() { googletag.display('div-gpt-ad-1472994367402-0'); });
        </script>
      </div>


        <?php if ($page['sidebar_first']): ?>
            <div id="sidebar-first" class="sidebar">
                <?php print render($page['sidebar_first']); ?>
            </div>
        <?php endif; ?>
        <div id="center-outer">
        <div id="center">
            <a id="main-content"></a>
            <?php if ($tabs): ?><div id="tabs-wrapper" class="clearfix"><?php endif; ?>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
            <?php if (arg(0) == "node" && is_numeric(arg(1)) ) {
        				$nodedata = node_load(arg(1));
        				if($nodedata->type=="article" || $nodedata->type=="hrm_tv" || $nodedata->type=="news" || $nodedata->type=="jobs" || $nodedata->type=="training_courses" || $nodedata->type=="hrm_congress" || $nodedata->type=="hrm_events") 
        				{
        					$title="";
        				}
        			}
        		?>
            <h1<?php print $tabs ? ' class="with-tabs"' : ''  ?>><span><?php print $title ?></span></h1>
            <?php endif; ?>
                <?php print render($title_suffix); ?>
                <?php if ($tabs): ?><?php print render($tabs); ?></div><?php endif; ?>
            <?php print render($tabs2); ?>
            <?php print $messages; ?>
            <?php print render($page['help']); ?>
                <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
                              <div class="clearfix">
                <?php print render($page['content_top']); ?>
            </div>
                <div class="clearfix page-content">
                <?php print render($page['content']); ?>
                    
            </div>
                 <div class="content-third block-content"><?php print render($page['content-third']); ?></div>
        </div>
        </div>

        <?php if((arg(0) == "node" && (arg(1) == "add" || arg(2) == "edit"))  || arg(0) == "admin"){   ?>

        <?php } else {  ?>
         <?php if ($page['sidebar_second']): ?>
            <div id="sidebar-second" class="sidebar">
              <?php print render($page['sidebar_second']); ?>
            </div>
          <?php endif; ?>
        <?php  }  ?>


    </div> <!-- /#container -->
    

  <?php if ($page['content_bottom1']): ?>
    <div id="content-bottom1" class="clearfix">
      <?php print render($page['content_bottom1']); ?>
    </div>
  <?php endif; ?>


  <?php if ($page['content_bottom']): ?>
    <div id="content-bottom" class="clearfix">
      <?php print render($page['content_bottom']); ?>
    </div>
  <?php endif; ?>
</div>

<div id="footer-wrapper" class="clearfix">
    <div id="footer">
        <?php print render($page['footer']); ?>
    </div>
</div>