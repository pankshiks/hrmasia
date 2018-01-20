<?php
/**
 * @file
 * hrm_features_views.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function hrm_features_views_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'jobs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Jobs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'jobs_list',
      'display' => 'page_2',
      'args' => '',
      'title' => 'Jobs',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Jobs');

  $export['jobs'] = $quicktabs;

  return $export;
}
