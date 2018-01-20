<?php
/**
 * @file
 * hrm_first.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function hrm_first_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'courses_company_importer-companyprofile-html_entity_decode';
  $feeds_tamper->importer = 'courses_company_importer';
  $feeds_tamper->source = 'CompanyProfile';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['courses_company_importer-companyprofile-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'courses_importer-datesubmitted-strtotime';
  $feeds_tamper->importer = 'courses_importer';
  $feeds_tamper->source = 'DateSubmitted';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['courses_importer-datesubmitted-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'courses_importer-enddate-strtotime';
  $feeds_tamper->importer = 'courses_importer';
  $feeds_tamper->source = 'EndDate';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['courses_importer-enddate-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'hrm_tv_importer-body-html_entity_decode';
  $feeds_tamper->importer = 'hrm_tv_importer';
  $feeds_tamper->source = 'body';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['hrm_tv_importer-body-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news-expiry_date-strtotime';
  $feeds_tamper->importer = 'news';
  $feeds_tamper->source = 'expiry_date';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['news-expiry_date-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'news-issue_date-strtotime';
  $feeds_tamper->importer = 'news';
  $feeds_tamper->source = 'issue_date';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['news-issue_date-strtotime'] = $feeds_tamper;

  return $export;
}
