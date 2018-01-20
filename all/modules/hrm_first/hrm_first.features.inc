<?php
/**
 * @file
 * hrm_first.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hrm_first_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hrm_first_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Features'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => t('Company type for adding companies information for jobs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'contributors' => array(
      'name' => t('Guest Contributors'),
      'base' => 'node_content',
      'description' => t('Guest Contributors type for adding contributors.'),
      'has_title' => '1',
      'title_label' => t('User Name'),
      'help' => '',
    ),
    'features' => array(
      'name' => t('Features_old'),
      'base' => 'node_content',
      'description' => t('Features type for adding feature pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage_featured' => array(
      'name' => t('Homepage Featured'),
      'base' => 'node_content',
      'description' => t('Homepage Featured type for adding home page featured items in slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_clinic' => array(
      'name' => t('HRM Clinic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_congress' => array(
      'name' => t('Congress Event'),
      'base' => 'node_content',
      'description' => t('Congress Event for adding data related with Congress.'),
      'has_title' => '1',
      'title_label' => t('Congress Title'),
      'help' => '',
    ),
    'hrm_events' => array(
      'name' => t('HRM Events'),
      'base' => 'node_content',
      'description' => t('HRM Events type for posting HRM Events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_tv' => array(
      'name' => t('HRM TV'),
      'base' => 'node_content',
      'description' => t('HRM TV for adding contents related with HRM TV'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jobs' => array(
      'name' => t('Jobs'),
      'base' => 'node_content',
      'description' => t('Jobs type for posting jobs.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'long_landing_page' => array(
      'name' => t('Long Landing page'),
      'base' => 'node_content',
      'description' => t('Long landing page for adding long landing pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News type for posting news items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partner Logo'),
      'base' => 'node_content',
      'description' => t('Partner logo type for adding partners.'),
      'has_title' => '1',
      'title_label' => t('Partner Title'),
      'help' => '',
    ),
    'simpleads' => array(
      'name' => t('Simple Ad'),
      'base' => 'node_content',
      'description' => t('Advertisement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simpleads_campaign' => array(
      'name' => t('Simple Ad Campaign'),
      'base' => 'node_content',
      'description' => t('Advertisement Campaign'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training_companies' => array(
      'name' => t('Training Companies'),
      'base' => 'node_content',
      'description' => t('Training Companies type for adding training companies.'),
      'has_title' => '1',
      'title_label' => t('Company Name'),
      'help' => '',
    ),
    'training_courses' => array(
      'name' => t('Training Courses'),
      'base' => 'node_content',
      'description' => t('Training Courses type for adding Training Courses.'),
      'has_title' => '1',
      'title_label' => t('Course Title'),
      'help' => '',
    ),
    'user_page_carousel' => array(
      'name' => t('HRM Covers'),
      'base' => 'node_content',
      'description' => t('Use to show carousel on user register/login page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
