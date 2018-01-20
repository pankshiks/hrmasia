<?php
/**
 * @file
 * hrm_features_views.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hrm_features_views_user_default_roles() {
  $roles = array();

  // Exported role: Content Approver.
  $roles['Content Approver'] = array(
    'name' => 'Content Approver',
    'weight' => 4,
  );

  // Exported role: Content Author.
  $roles['Content Author'] = array(
    'name' => 'Content Author',
    'weight' => 3,
  );

  // Exported role: Course Provider.
  $roles['Course Provider'] = array(
    'name' => 'Course Provider',
    'weight' => 5,
  );

  // Exported role: Job Provider.
  $roles['Job Provider'] = array(
    'name' => 'Job Provider',
    'weight' => 6,
  );

  // Exported role: Normal User.
  $roles['Normal User'] = array(
    'name' => 'Normal User',
    'weight' => 7,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
