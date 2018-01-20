<?php
/**
 * @file
 * hrm_features_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hrm_features_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access ad campaings'.
  $permissions['access ad campaings'] = array(
    'name' => 'access ad campaings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simpleads_campaigns',
  );

  // Exported permission: 'access ad node'.
  $permissions['access ad node'] = array(
    'name' => 'access ad node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'access ad statistics'.
  $permissions['access ad statistics'] = array(
    'name' => 'access ad statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Content Author' => 'Content Author',
      'Course Provider' => 'Course Provider',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access myhrm section'.
  $permissions['access myhrm section'] = array(
    'name' => 'access myhrm section',
    'roles' => array(),
    'module' => 'myhrm_region_module',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add hrm_congress node registration'.
  $permissions['add hrm_congress node registration'] = array(
    'name' => 'add hrm_congress node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'add userpoints'.
  $permissions['add userpoints'] = array(
    'name' => 'add userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'add userpoints2'.
  $permissions['add userpoints2'] = array(
    'name' => 'add userpoints2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints2',
  );

  // Exported permission: 'administer Compact Forms'.
  $permissions['administer Compact Forms'] = array(
    'name' => 'administer Compact Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'compact_forms',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced forum'.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer custom search blocks'.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'administer disqus'.
  $permissions['administer disqus'] = array(
    'name' => 'administer disqus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'administer edm module'.
  $permissions['administer edm module'] = array(
    'name' => 'administer edm module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'edm_generator',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu_token'.
  $permissions['administer menu_token'] = array(
    'name' => 'administer menu_token',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_token',
  );

  // Exported permission: 'administer messaging'.
  $permissions['administer messaging'] = array(
    'name' => 'administer messaging',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'messaging',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer node registration'.
  $permissions['administer node registration'] = array(
    'name' => 'administer node registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer notifications'.
  $permissions['administer notifications'] = array(
    'name' => 'administer notifications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'administer om maximenu'.
  $permissions['administer om maximenu'] = array(
    'name' => 'administer om maximenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'om_maximenu',
  );

  // Exported permission: 'administer path breadcrumbs'.
  $permissions['administer path breadcrumbs'] = array(
    'name' => 'administer path breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path_breadcrumbs_ui',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy views integrator'.
  $permissions['administer taxonomy views integrator'] = array(
    'name' => 'administer taxonomy views integrator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'administer tb_megamenu'.
  $permissions['administer tb_megamenu'] = array(
    'name' => 'administer tb_megamenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tb_megamenu',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer userpoints'.
  $permissions['administer userpoints'] = array(
    'name' => 'administer userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'administer userpoints2'.
  $permissions['administer userpoints2'] = array(
    'name' => 'administer userpoints2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints2',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel own hrm_congress node registration'.
  $permissions['cancel own hrm_congress node registration'] = array(
    'name' => 'cancel own hrm_congress node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'choose htmlmail_plaintext'.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'htmlmail',
  );

  // Exported permission: 'count ad clicks'.
  $permissions['count ad clicks'] = array(
    'name' => 'count ad clicks',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'count ad impressions'.
  $permissions['count ad impressions'] = array(
    'name' => 'count ad impressions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create company content'.
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create contributors content'.
  $permissions['create contributors content'] = array(
    'name' => 'create contributors content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create features content'.
  $permissions['create features content'] = array(
    'name' => 'create features content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Normal User' => 'Normal User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create homepage_featured content'.
  $permissions['create homepage_featured content'] = array(
    'name' => 'create homepage_featured content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_clinic content'.
  $permissions['create hrm_clinic content'] = array(
    'name' => 'create hrm_clinic content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_congress content'.
  $permissions['create hrm_congress content'] = array(
    'name' => 'create hrm_congress content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_events content'.
  $permissions['create hrm_events content'] = array(
    'name' => 'create hrm_events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_tv content'.
  $permissions['create hrm_tv content'] = array(
    'name' => 'create hrm_tv content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jobs content'.
  $permissions['create jobs content'] = array(
    'name' => 'create jobs content',
    'roles' => array(
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create long_landing_page content'.
  $permissions['create long_landing_page content'] = array(
    'name' => 'create long_landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create partners content'.
  $permissions['create partners content'] = array(
    'name' => 'create partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create poll content'.
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simpleads content'.
  $permissions['create simpleads content'] = array(
    'name' => 'create simpleads content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simpleads_campaign content'.
  $permissions['create simpleads_campaign content'] = array(
    'name' => 'create simpleads_campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create subscriptions'.
  $permissions['create subscriptions'] = array(
    'name' => 'create subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'create training_companies content'.
  $permissions['create training_companies content'] = array(
    'name' => 'create training_companies content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create training_courses content'.
  $permissions['create training_courses content'] = array(
    'name' => 'create training_courses content',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create user_page_carousel content'.
  $permissions['create user_page_carousel content'] = array(
    'name' => 'create user_page_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'define view for terms in ad_groups'.
  $permissions['define view for terms in ad_groups'] = array(
    'name' => 'define view for terms in ad_groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in article_category'.
  $permissions['define view for terms in article_category'] = array(
    'name' => 'define view for terms in article_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in article_subcategory'.
  $permissions['define view for terms in article_subcategory'] = array(
    'name' => 'define view for terms in article_subcategory',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in category'.
  $permissions['define view for terms in category'] = array(
    'name' => 'define view for terms in category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in consultancy_firm'.
  $permissions['define view for terms in consultancy_firm'] = array(
    'name' => 'define view for terms in consultancy_firm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in course_premium_type'.
  $permissions['define view for terms in course_premium_type'] = array(
    'name' => 'define view for terms in course_premium_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in course_type'.
  $permissions['define view for terms in course_type'] = array(
    'name' => 'define view for terms in course_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in forums'.
  $permissions['define view for terms in forums'] = array(
    'name' => 'define view for terms in forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in hrm_congress'.
  $permissions['define view for terms in hrm_congress'] = array(
    'name' => 'define view for terms in hrm_congress',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in job_level'.
  $permissions['define view for terms in job_level'] = array(
    'name' => 'define view for terms in job_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in jobs_premium_type'.
  $permissions['define view for terms in jobs_premium_type'] = array(
    'name' => 'define view for terms in jobs_premium_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in newsletter'.
  $permissions['define view for terms in newsletter'] = array(
    'name' => 'define view for terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in tags'.
  $permissions['define view for terms in tags'] = array(
    'name' => 'define view for terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in userpoints'.
  $permissions['define view for terms in userpoints'] = array(
    'name' => 'define view for terms in userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in userpoints2'.
  $permissions['define view for terms in userpoints2'] = array(
    'name' => 'define view for terms in userpoints2',
    'roles' => array(),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary ad_groups'.
  $permissions['define view for vocabulary ad_groups'] = array(
    'name' => 'define view for vocabulary ad_groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary article_category'.
  $permissions['define view for vocabulary article_category'] = array(
    'name' => 'define view for vocabulary article_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary article_subcategory'.
  $permissions['define view for vocabulary article_subcategory'] = array(
    'name' => 'define view for vocabulary article_subcategory',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary category'.
  $permissions['define view for vocabulary category'] = array(
    'name' => 'define view for vocabulary category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary consultancy_firm'.
  $permissions['define view for vocabulary consultancy_firm'] = array(
    'name' => 'define view for vocabulary consultancy_firm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary course_premium_type'.
  $permissions['define view for vocabulary course_premium_type'] = array(
    'name' => 'define view for vocabulary course_premium_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary course_type'.
  $permissions['define view for vocabulary course_type'] = array(
    'name' => 'define view for vocabulary course_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary forums'.
  $permissions['define view for vocabulary forums'] = array(
    'name' => 'define view for vocabulary forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary hrm_congress'.
  $permissions['define view for vocabulary hrm_congress'] = array(
    'name' => 'define view for vocabulary hrm_congress',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary job_level'.
  $permissions['define view for vocabulary job_level'] = array(
    'name' => 'define view for vocabulary job_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary jobs_premium_type'.
  $permissions['define view for vocabulary jobs_premium_type'] = array(
    'name' => 'define view for vocabulary jobs_premium_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary newsletter'.
  $permissions['define view for vocabulary newsletter'] = array(
    'name' => 'define view for vocabulary newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary tags'.
  $permissions['define view for vocabulary tags'] = array(
    'name' => 'define view for vocabulary tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary userpoints'.
  $permissions['define view for vocabulary userpoints'] = array(
    'name' => 'define view for vocabulary userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary userpoints2'.
  $permissions['define view for vocabulary userpoints2'] = array(
    'name' => 'define view for vocabulary userpoints2',
    'roles' => array(),
    'module' => 'tvi',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any company content'.
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contributors content'.
  $permissions['delete any contributors content'] = array(
    'name' => 'delete any contributors content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any features content'.
  $permissions['delete any features content'] = array(
    'name' => 'delete any features content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage_featured content'.
  $permissions['delete any homepage_featured content'] = array(
    'name' => 'delete any homepage_featured content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_clinic content'.
  $permissions['delete any hrm_clinic content'] = array(
    'name' => 'delete any hrm_clinic content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_congress content'.
  $permissions['delete any hrm_congress content'] = array(
    'name' => 'delete any hrm_congress content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_events content'.
  $permissions['delete any hrm_events content'] = array(
    'name' => 'delete any hrm_events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_tv content'.
  $permissions['delete any hrm_tv content'] = array(
    'name' => 'delete any hrm_tv content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any jobs content'.
  $permissions['delete any jobs content'] = array(
    'name' => 'delete any jobs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any long_landing_page content'.
  $permissions['delete any long_landing_page content'] = array(
    'name' => 'delete any long_landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partners content'.
  $permissions['delete any partners content'] = array(
    'name' => 'delete any partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any poll content'.
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simpleads content'.
  $permissions['delete any simpleads content'] = array(
    'name' => 'delete any simpleads content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simpleads_campaign content'.
  $permissions['delete any simpleads_campaign content'] = array(
    'name' => 'delete any simpleads_campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training_companies content'.
  $permissions['delete any training_companies content'] = array(
    'name' => 'delete any training_companies content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training_courses content'.
  $permissions['delete any training_courses content'] = array(
    'name' => 'delete any training_courses content',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any user_page_carousel content'.
  $permissions['delete any user_page_carousel content'] = array(
    'name' => 'delete any user_page_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own company content'.
  $permissions['delete own company content'] = array(
    'name' => 'delete own company content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contributors content'.
  $permissions['delete own contributors content'] = array(
    'name' => 'delete own contributors content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own features content'.
  $permissions['delete own features content'] = array(
    'name' => 'delete own features content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Normal User' => 'Normal User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage_featured content'.
  $permissions['delete own homepage_featured content'] = array(
    'name' => 'delete own homepage_featured content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_clinic content'.
  $permissions['delete own hrm_clinic content'] = array(
    'name' => 'delete own hrm_clinic content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_congress content'.
  $permissions['delete own hrm_congress content'] = array(
    'name' => 'delete own hrm_congress content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_congress node registration'.
  $permissions['delete own hrm_congress node registration'] = array(
    'name' => 'delete own hrm_congress node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'delete own hrm_events content'.
  $permissions['delete own hrm_events content'] = array(
    'name' => 'delete own hrm_events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_tv content'.
  $permissions['delete own hrm_tv content'] = array(
    'name' => 'delete own hrm_tv content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own jobs content'.
  $permissions['delete own jobs content'] = array(
    'name' => 'delete own jobs content',
    'roles' => array(
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own long_landing_page content'.
  $permissions['delete own long_landing_page content'] = array(
    'name' => 'delete own long_landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partners content'.
  $permissions['delete own partners content'] = array(
    'name' => 'delete own partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own poll content'.
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simpleads content'.
  $permissions['delete own simpleads content'] = array(
    'name' => 'delete own simpleads content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simpleads_campaign content'.
  $permissions['delete own simpleads_campaign content'] = array(
    'name' => 'delete own simpleads_campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training_companies content'.
  $permissions['delete own training_companies content'] = array(
    'name' => 'delete own training_companies content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training_courses content'.
  $permissions['delete own training_courses content'] = array(
    'name' => 'delete own training_courses content',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own user_page_carousel content'.
  $permissions['delete own user_page_carousel content'] = array(
    'name' => 'delete own user_page_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ad_groups'.
  $permissions['delete terms in ad_groups'] = array(
    'name' => 'delete terms in ad_groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in article_category'.
  $permissions['delete terms in article_category'] = array(
    'name' => 'delete terms in article_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in article_subcategory'.
  $permissions['delete terms in article_subcategory'] = array(
    'name' => 'delete terms in article_subcategory',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in consultancy_firm'.
  $permissions['delete terms in consultancy_firm'] = array(
    'name' => 'delete terms in consultancy_firm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in course_premium_type'.
  $permissions['delete terms in course_premium_type'] = array(
    'name' => 'delete terms in course_premium_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in course_type'.
  $permissions['delete terms in course_type'] = array(
    'name' => 'delete terms in course_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in hrm_congress'.
  $permissions['delete terms in hrm_congress'] = array(
    'name' => 'delete terms in hrm_congress',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in job_level'.
  $permissions['delete terms in job_level'] = array(
    'name' => 'delete terms in job_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in jobs_premium_type'.
  $permissions['delete terms in jobs_premium_type'] = array(
    'name' => 'delete terms in jobs_premium_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in userpoints'.
  $permissions['delete terms in userpoints'] = array(
    'name' => 'delete terms in userpoints',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in userpoints2'.
  $permissions['delete terms in userpoints2'] = array(
    'name' => 'delete terms in userpoints2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display disqus comments on profile'.
  $permissions['display disqus comments on profile'] = array(
    'name' => 'display disqus comments on profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any choose_discussion_topic profile'.
  $permissions['edit any choose_discussion_topic profile'] = array(
    'name' => 'edit any choose_discussion_topic profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any company content'.
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any contributors content'.
  $permissions['edit any contributors content'] = array(
    'name' => 'edit any contributors content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any features content'.
  $permissions['edit any features content'] = array(
    'name' => 'edit any features content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage_featured content'.
  $permissions['edit any homepage_featured content'] = array(
    'name' => 'edit any homepage_featured content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_clinic content'.
  $permissions['edit any hrm_clinic content'] = array(
    'name' => 'edit any hrm_clinic content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_congress content'.
  $permissions['edit any hrm_congress content'] = array(
    'name' => 'edit any hrm_congress content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_events content'.
  $permissions['edit any hrm_events content'] = array(
    'name' => 'edit any hrm_events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_tv content'.
  $permissions['edit any hrm_tv content'] = array(
    'name' => 'edit any hrm_tv content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any jobs content'.
  $permissions['edit any jobs content'] = array(
    'name' => 'edit any jobs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any long_landing_page content'.
  $permissions['edit any long_landing_page content'] = array(
    'name' => 'edit any long_landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partners content'.
  $permissions['edit any partners content'] = array(
    'name' => 'edit any partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any poll content'.
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any select_event_preferences profile'.
  $permissions['edit any select_event_preferences profile'] = array(
    'name' => 'edit any select_event_preferences profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any select_preferences profile'.
  $permissions['edit any select_preferences profile'] = array(
    'name' => 'edit any select_preferences profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any simpleads content'.
  $permissions['edit any simpleads content'] = array(
    'name' => 'edit any simpleads content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simpleads_campaign content'.
  $permissions['edit any simpleads_campaign content'] = array(
    'name' => 'edit any simpleads_campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training_companies content'.
  $permissions['edit any training_companies content'] = array(
    'name' => 'edit any training_companies content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training_courses content'.
  $permissions['edit any training_courses content'] = array(
    'name' => 'edit any training_courses content',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any user_page_carousel content'.
  $permissions['edit any user_page_carousel content'] = array(
    'name' => 'edit any user_page_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit meta tag: abstract'.
  $permissions['edit meta tag: abstract'] = array(
    'name' => 'edit meta tag: abstract',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: author'.
  $permissions['edit meta tag: author'] = array(
    'name' => 'edit meta tag: author',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: canonical'.
  $permissions['edit meta tag: canonical'] = array(
    'name' => 'edit meta tag: canonical',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: content-language'.
  $permissions['edit meta tag: content-language'] = array(
    'name' => 'edit meta tag: content-language',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: description'.
  $permissions['edit meta tag: description'] = array(
    'name' => 'edit meta tag: description',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: generator'.
  $permissions['edit meta tag: generator'] = array(
    'name' => 'edit meta tag: generator',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: image_src'.
  $permissions['edit meta tag: image_src'] = array(
    'name' => 'edit meta tag: image_src',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: keywords'.
  $permissions['edit meta tag: keywords'] = array(
    'name' => 'edit meta tag: keywords',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: news_keywords'.
  $permissions['edit meta tag: news_keywords'] = array(
    'name' => 'edit meta tag: news_keywords',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: original-source'.
  $permissions['edit meta tag: original-source'] = array(
    'name' => 'edit meta tag: original-source',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: publisher'.
  $permissions['edit meta tag: publisher'] = array(
    'name' => 'edit meta tag: publisher',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: revisit-after'.
  $permissions['edit meta tag: revisit-after'] = array(
    'name' => 'edit meta tag: revisit-after',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: rights'.
  $permissions['edit meta tag: rights'] = array(
    'name' => 'edit meta tag: rights',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: robots'.
  $permissions['edit meta tag: robots'] = array(
    'name' => 'edit meta tag: robots',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: shortlink'.
  $permissions['edit meta tag: shortlink'] = array(
    'name' => 'edit meta tag: shortlink',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: standout'.
  $permissions['edit meta tag: standout'] = array(
    'name' => 'edit meta tag: standout',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: title'.
  $permissions['edit meta tag: title'] = array(
    'name' => 'edit meta tag: title',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own choose_discussion_topic profile'.
  $permissions['edit own choose_discussion_topic profile'] = array(
    'name' => 'edit own choose_discussion_topic profile',
    'roles' => array(
      'Content Author' => 'Content Author',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own company content'.
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own contributors content'.
  $permissions['edit own contributors content'] = array(
    'name' => 'edit own contributors content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own features content'.
  $permissions['edit own features content'] = array(
    'name' => 'edit own features content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Normal User' => 'Normal User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage_featured content'.
  $permissions['edit own homepage_featured content'] = array(
    'name' => 'edit own homepage_featured content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_clinic content'.
  $permissions['edit own hrm_clinic content'] = array(
    'name' => 'edit own hrm_clinic content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_congress content'.
  $permissions['edit own hrm_congress content'] = array(
    'name' => 'edit own hrm_congress content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_congress node registration'.
  $permissions['edit own hrm_congress node registration'] = array(
    'name' => 'edit own hrm_congress node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'edit own hrm_events content'.
  $permissions['edit own hrm_events content'] = array(
    'name' => 'edit own hrm_events content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_tv content'.
  $permissions['edit own hrm_tv content'] = array(
    'name' => 'edit own hrm_tv content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own jobs content'.
  $permissions['edit own jobs content'] = array(
    'name' => 'edit own jobs content',
    'roles' => array(
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own long_landing_page content'.
  $permissions['edit own long_landing_page content'] = array(
    'name' => 'edit own long_landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own partners content'.
  $permissions['edit own partners content'] = array(
    'name' => 'edit own partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own poll content'.
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own select_event_preferences profile'.
  $permissions['edit own select_event_preferences profile'] = array(
    'name' => 'edit own select_event_preferences profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own select_preferences profile'.
  $permissions['edit own select_preferences profile'] = array(
    'name' => 'edit own select_preferences profile',
    'roles' => array(
      'Content Author' => 'Content Author',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own simpleads content'.
  $permissions['edit own simpleads content'] = array(
    'name' => 'edit own simpleads content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simpleads_campaign content'.
  $permissions['edit own simpleads_campaign content'] = array(
    'name' => 'edit own simpleads_campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training_companies content'.
  $permissions['edit own training_companies content'] = array(
    'name' => 'edit own training_companies content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training_courses content'.
  $permissions['edit own training_courses content'] = array(
    'name' => 'edit own training_courses content',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own user_page_carousel content'.
  $permissions['edit own user_page_carousel content'] = array(
    'name' => 'edit own user_page_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in ad_groups'.
  $permissions['edit terms in ad_groups'] = array(
    'name' => 'edit terms in ad_groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in article_category'.
  $permissions['edit terms in article_category'] = array(
    'name' => 'edit terms in article_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in article_subcategory'.
  $permissions['edit terms in article_subcategory'] = array(
    'name' => 'edit terms in article_subcategory',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in consultancy_firm'.
  $permissions['edit terms in consultancy_firm'] = array(
    'name' => 'edit terms in consultancy_firm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in course_premium_type'.
  $permissions['edit terms in course_premium_type'] = array(
    'name' => 'edit terms in course_premium_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in course_type'.
  $permissions['edit terms in course_type'] = array(
    'name' => 'edit terms in course_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in hrm_congress'.
  $permissions['edit terms in hrm_congress'] = array(
    'name' => 'edit terms in hrm_congress',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in job_level'.
  $permissions['edit terms in job_level'] = array(
    'name' => 'edit terms in job_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in jobs_premium_type'.
  $permissions['edit terms in jobs_premium_type'] = array(
    'name' => 'edit terms in jobs_premium_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in userpoints'.
  $permissions['edit terms in userpoints'] = array(
    'name' => 'edit terms in userpoints',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in userpoints2'.
  $permissions['edit terms in userpoints2'] = array(
    'name' => 'edit terms in userpoints2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit userpoints'.
  $permissions['edit userpoints'] = array(
    'name' => 'edit userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'edit userpoints2'.
  $permissions['edit userpoints2'] = array(
    'name' => 'edit userpoints2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints2',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'maintain own subscriptions'.
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'manage all subscriptions'.
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate userpoints'.
  $permissions['moderate userpoints'] = array(
    'name' => 'moderate userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'moderate userpoints2'.
  $permissions['moderate userpoints2'] = array(
    'name' => 'moderate userpoints2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints2',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'other node registration'.
  $permissions['other node registration'] = array(
    'name' => 'other node registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip notifications'.
  $permissions['skip notifications'] = array(
    'name' => 'skip notifications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'subscribe to content'.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications_content',
  );

  // Exported permission: 'subscribe to content type'.
  $permissions['subscribe to content type'] = array(
    'name' => 'subscribe to content type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'notifications_content',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'toggle disqus comments'.
  $permissions['toggle disqus comments'] = array(
    'name' => 'toggle disqus comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search blocks'.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any choose_discussion_topic profile'.
  $permissions['view any choose_discussion_topic profile'] = array(
    'name' => 'view any choose_discussion_topic profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any select_event_preferences profile'.
  $permissions['view any select_event_preferences profile'] = array(
    'name' => 'view any select_event_preferences profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any select_preferences profile'.
  $permissions['view any select_preferences profile'] = array(
    'name' => 'view any select_preferences profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view disqus comments'.
  $permissions['view disqus comments'] = array(
    'name' => 'view disqus comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'Normal User' => 'Normal User',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view forum statistics'.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view hrm_congress node registration'.
  $permissions['view hrm_congress node registration'] = array(
    'name' => 'view hrm_congress node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'view last edited notice'.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own choose_discussion_topic profile'.
  $permissions['view own choose_discussion_topic profile'] = array(
    'name' => 'view own choose_discussion_topic profile',
    'roles' => array(
      'Content Author' => 'Content Author',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own hrm_congress node registration'.
  $permissions['view own hrm_congress node registration'] = array(
    'name' => 'view own hrm_congress node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own select_event_preferences profile'.
  $permissions['view own select_event_preferences profile'] = array(
    'name' => 'view own select_event_preferences profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own select_preferences profile'.
  $permissions['view own select_preferences profile'] = array(
    'name' => 'view own select_preferences profile',
    'roles' => array(
      'Content Author' => 'Content Author',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'view own userpoints2'.
  $permissions['view own userpoints2'] = array(
    'name' => 'view own userpoints2',
    'roles' => array(
      'Course Provider' => 'Course Provider',
      'Job Provider' => 'Job Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints2',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view userpoints'.
  $permissions['view userpoints'] = array(
    'name' => 'view userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'view userpoints2'.
  $permissions['view userpoints2'] = array(
    'name' => 'view userpoints2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints2',
  );

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'poll',
  );

  return $permissions;
}
