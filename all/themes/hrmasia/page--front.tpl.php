<!--<div id="preloader">
    <div id="status">&nbsp;</div>
</div>-->
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

</div>


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
   <!--  <div class="menu-one menudiv">
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

<?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>

<div id="main-wrapper" class="clearfix">
  <?php if ($page['highlighted1']): ?><div id="highlighted1"><?php print render($page['highlighted1']); ?></div><?php endif; ?>

  <div id="container">

<div id="div-gpt-ad-1472994367402-0" style="height: 280px; width: 970px; margin: 101px auto 50px; border: 1px solid rgb(224, 229, 233);">
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
          <?php print $breadcrumb; ?>
          <a id="main-content"></a>
            <?php if ($tabs): ?><div id="tabs-wrapper" class="clearfix"><?php endif; ?>

                <?php if ($tabs): ?><?php print render($tabs); ?></div><?php endif; ?>
            <?php print render($tabs2); ?>
            <?php print $messages; ?>
            <?php print render($page['help']); ?>
                <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
            <div class="clearfix">
                <div class="content-first block-content clearfix"><?php print render($page['content-first']); ?></div>
                <div class="content-second block-content clearfix"><?php print render($page['content-second']); ?></div>
                <div class="content-third block-content clearfix"><?php print render($page['content-third']); ?></div>
                     
                <?php  render($page['content']['metatags']); ?>
           
            </div>
        </div>
        </div>
        <?php if ($page['sidebar_second']): ?>
            <div id="sidebar-second" class="sidebar">
                <?php print render($page['sidebar_second']); ?>
            </div>
        <?php endif; ?>
    </div> <!-- /#container -->

</div>

<div class="backdevider">
  </div>
<?php if ($page['content_bottom1']): ?>
  <div id="content-bottom1" class="clearfix">
    <?php print render($page['content_bottom1']); ?>
  </div>
<?php endif; ?>

<!--<div class="backdevider">
  </div>-->


<?php if ($page['content_bottom']): ?>
  <div id="content-bottom" class="clearfix">
    <?php print render($page['content_bottom']); ?>
  </div>
<?php endif; ?>


<div id="footer-wrapper" class="clearfix">
  <div id="footer">
    <?php print render($page['footer']); ?>
  </div>
</div>
