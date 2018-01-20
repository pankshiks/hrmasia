<div id="preloader">
    <div id="status">&nbsp;</div>
</div>
<div id="fix-header">
<div id="header-wrapper" class="clearfix">
    <div id="header">
        <div id="logo-floater">
            <?php if ($logo || $site_title): ?>
                <?php if ($title): ?>
                    <div id="branding">
                      <strong>
                        <a href="<?php print $front_page ?>">
                        <?php if ($logo): ?>
                          <img src="<?php print $logo ?>" alt="<?php print $site_name_and_slogan ?>" 
                          title="<?php print $site_name_and_slogan ?>" id="logo" />
                        <?php endif; ?>
                        <?php print $site_html ?>
                        </a>
                       </strong>
                   </div>
                <?php else: /* Use h1 when the content title is empty */ ?>
                  <h1 id="branding"><a href="<?php print $front_page ?>">
                    <?php if ($logo): ?>
                    <img src="<?php print $logo ?>" alt="<?php print $site_name_and_slogan ?>" title="<?php print $site_name_and_slogan ?>" id="logo" />
                    <?php endif; ?>
                    <?php print $site_html ?>
                  </a></h1>
                <?php endif; ?>
            <?php endif; ?>
        </div> <!--logo-floater end-->

      <?php print render($page['search_bar']); ?>  
    </div> <!-- /#header -->
</div>

</div>
<div class="menu-top-wrapper">
  <?php print render($page['user_menu']); ?>
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

        <?php if ($page['sidebar_second']): ?>
            <div id="sidebar-second" class="sidebar">
                <?php print render($page['sidebar_second']); ?>
            </div>
        <?php endif; ?>
    </div> <!-- /#container -->
    