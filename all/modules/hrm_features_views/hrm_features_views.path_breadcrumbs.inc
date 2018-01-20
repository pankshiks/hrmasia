<?php
/**
 * @file
 * hrm_features_views.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function hrm_features_views_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = '_hrm_tv';
  $path_breadcrumb->name = ' HRM TV';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'HRM TV',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'hrmtv',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'hrm_tv' => 'hrm_tv',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['_hrm_tv'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'courses';
  $path_breadcrumb->name = 'Courses';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => ' COURSES',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'courses',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'training_courses' => 'training_courses',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['courses'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'events';
  $path_breadcrumb->name = 'HRM Events';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'HRM EVENTS',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'hrm-events',
      1 => '!page_title',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'hrm_events' => 'hrm_events',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -95;
  $export['events'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'hrm_awards';
  $path_breadcrumb->name = 'HRM Awards';
  $path_breadcrumb->path = 'hrm-awards';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'HRM Events',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'hrm-events',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -99;
  $export['hrm_awards'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'hrm_summit';
  $path_breadcrumb->name = 'HRM Summit';
  $path_breadcrumb->path = 'hrm-summit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'HRM Events',
      1 => 'HRM Summit',
    ),
    'paths' => array(
      0 => 'hrm-events',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['hrm_summit'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'jobs';
  $path_breadcrumb->name = 'Jobs';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Jobs',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'jobs',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'jobs/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = -93;
  $export['jobs'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'myhrm';
  $path_breadcrumb->name = 'MyHRM';
  $path_breadcrumb->path = 'myhrm';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'MyHRM',
    ),
    'paths' => array(
      0 => 'myhrm',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -96;
  $export['myhrm'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news';
  $path_breadcrumb->name = 'News';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'news',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -94;
  $export['news'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'upcoming_congress';
  $path_breadcrumb->name = 'Upcoming congress';
  $path_breadcrumb->path = 'upcoming-congress';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'HRM Events',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'hrm-eventsssss',
      1 => 'node/%node',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -98;
  $export['upcoming_congress'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'upcoming_congress_content';
  $path_breadcrumb->name = 'Upcoming congress content';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => ' HRM Events',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'hrm-events',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'hrm-event/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -97;
  $export['upcoming_congress_content'] = $path_breadcrumb;

  return $export;
}
