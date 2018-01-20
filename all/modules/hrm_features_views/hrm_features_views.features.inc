<?php
/**
 * @file
 * hrm_features_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hrm_features_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hrm_features_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function hrm_features_views_default_profile2_type() {
  $items = array();
  $items['choose_discussion_topic'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "choose_discussion_topic",
    "label" : "My Communities",
    "weight" : "1",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "2",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  $items['select_event_preferences'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "select_event_preferences",
    "label" : "Select event preferences",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  $items['select_preferences'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "select_preferences",
    "label" : "Select preferences",
    "weight" : "1",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
