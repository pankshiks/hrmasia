<?php
/**
 * @file
 * hrm_first.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function hrm_first_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'article_importer';
  $feeds_importer->config = array(
    'name' => 'Article Importer',
    'description' => 'Article Importer for HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '201',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'issue_date',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'expiry_date',
            'target' => 'field_date:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'summary',
            'target' => 'field_article_summary',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => 'article',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['article_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'company_importer';
  $feeds_importer->config = array(
    'name' => 'Company Importer',
    'description' => 'Company Importer For HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*.',
        'sources' => array(
          'jsonpath_parser:0' => 'CompanyName',
          'jsonpath_parser:1' => 'Logo',
          'jsonpath_parser:2' => 'Logo',
          'jsonpath_parser:3' => 'Homepage',
          'jsonpath_parser:4' => 'Email',
          'jsonpath_parser:5' => 'CompanyProfile',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '201',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_image:fig',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_company_url:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_company_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'company',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['company_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'courses_company_importer';
  $feeds_importer->config = array(
    'name' => 'Courses Company Importer',
    'description' => 'Courses Company Importer For HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '201',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'CompanyName',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'CompanyProfile',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Logo',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Logo',
            'target' => 'field_image:fig',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'training_companies',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['courses_company_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'courses_importer';
  $feeds_importer->config = array(
    'name' => 'Courses Importer',
    'description' => 'Courses Importer For HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '201',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'DateSubmitted',
            'target' => 'field_course_dates:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'EndDate',
            'target' => 'field_course_dates:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'CompanyName',
            'target' => 'field_trainining_company:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Region',
            'target' => 'field_location',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Cost',
            'target' => 'field_cost',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Type',
            'target' => 'field_course_premium_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Benefits',
            'target' => 'field_key_benefits',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Email',
            'target' => 'field_contact_us_email',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Benefits',
            'target' => 'field_course_benefits',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Summary',
            'target' => 'field_course_summary',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Details',
            'target' => 'body',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Point1',
            'target' => 'field_courses_point1',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Point2',
            'target' => 'field_courses_point2',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Point3',
            'target' => 'field_courses_point3',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'training_courses',
      ),
    ),
    'content_type' => 'training_courses',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['courses_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'hrm_tv_importer';
  $feeds_importer->config = array(
    'name' => 'HRM TV Importer',
    'description' => 'HRM TV Importer for HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '296',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'issue_date',
            'target' => 'field_tv_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'expiry_date',
            'target' => 'field_tv_date:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'strap',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'strap',
            'target' => 'field_image:fig',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'summary',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'body',
            'target' => 'field_video_code',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'hrm_tv',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['hrm_tv_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'jobs_importer';
  $feeds_importer->config = array(
    'name' => 'Jobs Importer',
    'description' => 'Jobs Importer for HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*.',
        'sources' => array(
          'jsonpath_parser:0' => 'Title',
          'jsonpath_parser:3' => 'CompanyName',
          'jsonpath_parser:4' => 'Email',
          'jsonpath_parser:6' => 'Summary',
          'jsonpath_parser:8' => 'Point1',
          'jsonpath_parser:9' => 'Point2',
          'jsonpath_parser:10' => 'Point3',
          'jsonpath_parser:11' => 'Click',
          'jsonpath_parser:12' => 'CompanyName',
          'jsonpath_parser:13' => 'Phone',
          'jsonpath_parser:15' => 'Summary',
          'jsonpath_parser:16' => 'region',
          'jsonpath_parser:17' => 'Type',
          'jsonpath_parser:18' => 'DateSubmitted',
          'jsonpath_parser:19' => 'DateExpired',
          'jsonpath_parser:20' => 'Salary',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:16' => 0,
            'jsonpath_parser:17' => 0,
            'jsonpath_parser:18' => 0,
            'jsonpath_parser:19' => 0,
            'jsonpath_parser:20' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '201',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_company_ref:title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_apply_email_address',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_point1',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_point2',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_point3',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_click',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_company',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_job_summary',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_region',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:17',
            'target' => 'field_jobs_premium_type',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:18',
            'target' => 'field_posted_date:start',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'jsonpath_parser:19',
            'target' => 'field_posted_date:end',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'parent:nid',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'jsonpath_parser:20',
            'target' => 'field_salary',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'jobs',
      ),
    ),
    'content_type' => 'jobs',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['jobs_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news';
  $feeds_importer->config = array(
    'name' => 'News',
    'description' => 'News for HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '201',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'summary',
            'target' => 'field_news_summary',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'issue_date',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'expiry_date',
            'target' => 'field_expiry_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => 'news',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'users_importer';
  $feeds_importer->config = array(
    'name' => 'Users Importer',
    'description' => 'Users Importer for HRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*.',
        'sources' => array(
          'jsonpath_parser:0' => 'FirstName',
          'jsonpath_parser:1' => 'LastName',
          'jsonpath_parser:2' => 'Email',
          'jsonpath_parser:3' => 'Email',
          'jsonpath_parser:4' => 'Phone',
          'jsonpath_parser:5' => 'Fax',
          'jsonpath_parser:6' => 'Password',
          'jsonpath_parser:7' => 'Email',
          'jsonpath_parser:8' => 'CompanyName',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          31 => '31',
          3 => 0,
          16 => 0,
          21 => 0,
          26 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'profile2:main:field_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'profile2:main:field_last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'profile2:main:field_email',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'mail',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'profile2:main:field_tel_',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'profile2:main:field_fax',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'name',
            'unique' => 1,
          ),
          8 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'profile2:main:field_profile_company',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['users_importer'] = $feeds_importer;

  return $export;
}
