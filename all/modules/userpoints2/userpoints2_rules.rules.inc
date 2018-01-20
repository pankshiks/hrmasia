 <?php

/**
 * @file
 * Provide better integration into the rules group
 */

/**
 * Implements hook_rules_action_info().
 */
function userpoints2_rules_rules_action_info() {
  return array(
    'userpoints2_action_grant_points' => array(
      'label' => t('Grant !points to a user', userpoints2_translation()),
      'named parameter' => TRUE,
      'parameter' => array(
        'user' => array(
          'type' => 'user',
          'label' => t('User'),
          'description' => t('The user that will receive the !points', userpoints2_translation()),
        ),
        'points' => array(
          'type' => 'integer',
          'label' => t('!Points', userpoints2_translation()),
          'description' => t('Amount of !points to give or take.', userpoints2_translation()),
        ),
        'tid' => array(
          'label' => t('!Points category', userpoints2_translation()),
          'type' => 'integer',
          'options list' => 'userpoints2_rules_get_categories',
        ),
        'entity' => array(
          'label' => t('Entity'),
          'type' => 'entity',
          'description' => t('The entity to which this transaction refers.'),
          'optional' => TRUE,
         ),
        'description' => array(
          'label' => t('Description'),
          'type' => 'text',
          'description' => t('Can contain the reason why the points have been granted.'),
          'restriction' => 'input',
          'optional' => TRUE,
        ),
        'operation' => array(
          'label' => t('Operation'),
          'type' => 'text',
          'description' => t('Describes the operation (Insert/Remove/...).'),
          'restriction' => 'input',
        ),
        'reference' => array(
          'label' => t('Reference'),
          'type' => 'text',
          'description' => t('Can contain a reference for this transaction.'),
          'optional' => TRUE,
        ),
        'display' => array(
          'label' => t('Display'),
          'type' => 'boolean',
          'description' => t('Whether or not to show a message to the user when this !points transaction is added.', userpoints2_translation()),
          'default value' => TRUE,
        ),
        'moderate' => array(
          'label' => t('Moderate'),
          'type' => 'text',
          'description' => t('Whether or not this !points transaction should be moderated.', userpoints2_translation()),
          'options list' => 'userpoints2_rules_moderate',
        ),
        'expirydate' => array(
          'label' => t('Expiration Date'),
          'type' => 'date',
          'description' => t('Define when the !points should expire.', userpoints2_translation()),
          'optional' => TRUE,
        ),
      ),
      'group' => t('!Points', userpoints2_translation()),
    ),
    'userpoints2_rules_get_current_points' => array(
      'label' => t('Load !points of a user', userpoints2_translation()),
      'parameter' => array(
        'user' => array(
          'type' => 'user',
          'label' => t('User'),
          'description' => t('The user that will receive the !points', userpoints2_translation()),
        ),
        'tid' => array(
          'label' => t('!Points category', userpoints2_translation()),
          'type' => 'text',
          'options list' => 'userpoints2_rules_get_all_categories',
        ),
      ),
      'new variables' => array(
        'loaded_points' => array(
          'type' => 'integer',
          'label' => t('Number of !points in the specified category.', userpoints2_translation()),
        ),
      ),
      'group' => t('!Points', userpoints2_translation()),
    ),
  );
}

/**
 * Wrapper function for userpoints2_get_categories().
 *
 * Rules.module uses different arguments for option list callbacks than
 * userpoints2_get_categories expects.
 */
function userpoints2_rules_get_categories() {
  return userpoints2_get_categories();
}

/**
 * Simple callback that lists the categories including an option for all.
 */
function userpoints2_rules_get_all_categories() {
  return array('all' => t('All categories')) + userpoints2_get_categories();
}

/**
 * Simple callback that lists the possible moderate values.
 */
function userpoints2_rules_moderate() {
  return array(
    'default' => t('Use the site default'),
    'approved' => t('Automatically approved'),
    'moderated' => t('Added to moderation'),
  );
}

/**
 * Implements hook_rules_data_info().
 */
function userpoints2_rules_rules_data_info() {
  return array(
    'userpoints2_transaction' => array(
      'label' => t('!Points transaction', userpoints2_translation()),
      'wrap' => TRUE,
      'property info' => _userpoints2_userpoints2_transaction_properties(),
    ),
  );
}

/**
 * Implements hook_rules_event_info().
 */
function userpoints2_rules_rules_event_info() {
  return array(
    'userpoints2_event_points_awarded_before' => array(
       'label' => t('User will be awarded !points', userpoints2_translation()),
       'variables' => array(
          'userpoints2_transaction' => array(
            'type' => 'userpoints2_transaction',
            'label' => t('!Points transaction', userpoints2_translation()),
          )
        ),
       'group' => t('!Points', userpoints2_translation()),
    ),
    'userpoints2_event_points_awarded_after' => array(
       'label' => t('User was awarded !points', userpoints2_translation()),
       'variables' => array(
          'userpoints2_transaction' => array(
            'type' => 'userpoints2_transaction',
            'label' => t('!Points transaction', userpoints2_translation()),
          )
        ),
       'group' => t('!Points', userpoints2_translation()),
    ),
  );
}

/**
 * Rules action - grant points to a user.
 */
function userpoints2_action_grant_points($params) {
  // The passed in $entity is the unwrapped object. To get type and id, we need
  // the wrapped version of it.
  $state = $params['state'];
  $entity = $state->currentArguments['entity'];

  // Map $moderate value to the actual value used by the API.
  $moderate_mapping = array(
    'default' => NULL,
    'approved' => FALSE,
    'moderated' => TRUE,
  );
  $params = array(
    // User id might be a int or a EntityValueWrapper.
    'uid' => is_object($params['user']->uid) ? $params['user']->getIdentifier() : $params['user']->uid,
    'entity_type' => $entity ? $entity->type() : NULL,
    'entity_id' => $entity ? $entity->getIdentifier() : NULL,
    'moderate' => $moderate_mapping[$params['moderate']],
    // Rules defaults to FALSE if the date format can not be parsed.
    // Use NULL instead since FALSE means no expiration.
    'expirydate' => $params['expirydate'] ? $params['expirydate'] : NULL,
  ) + $params;

  unset($params['state']);
  unset($params['user']);
  unset($params['entity']);
  unset($params['settings']);
  userpoints2_userpoints2api($params);
}

function userpoints2_action_grant_points_form_alter(&$form, &$form_state) {
  // Empty value by default.
  $form['parameter']['expirydate']['settings']['expirydate']['#default_value'] = '';
  // Operation is a single line textfield.
  $form['parameter']['operation']['settings']['operation']['#type'] = 'textfield';
}

/**
 * Rules action - load points of a user.
 */
function userpoints2_rules_get_current_points($account, $tid) {
  return array('loaded_points' => userpoints2_get_current_points($account->uid, $tid));
}