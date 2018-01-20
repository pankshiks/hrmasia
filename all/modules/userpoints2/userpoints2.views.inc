 <?php


/**
 *  @file
 *  This defines views hooks for the userpoints2 module. It will be loaded automatically as needed by the Views module.
 */

/**
 * Implements hook_views_data().
 */
function userpoints2_views_data() {
  // ----------------------------------------------------------------
  // userpoints2 table
  // Describe the userpoints2 table.
  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.
  $data['userpoints2']['table']['group'] = t('userpoints2');

  $data['userpoints2']['table']['base'] = array(
      'field' => 'uid',
      'title' => t('userpoints2'),
      'help' => t('Points by category accumulated by users on your site.', userpoints2_translation()),
  );

  $data['userpoints2']['table']['join'] = array(
      'users' => array(
          'left_field' => 'uid',
          'field' => 'uid',
      ),
      'node' => array(
          'left_field' => 'uid',
          'field' => 'uid',
      ),
      'taxonomy_term_data' => array(
          'left_field' => 'tid',
          'field' => 'tid',
      ),
      // This goes to the node so that we have consistent authorship.
      'node_revisions' => array(
          'left_table' => 'node',
          'left_field' => 'uid',
          'field' => 'uid',
      ),
  );

  // Describe the points column of the userpoints2 table.
  $data['userpoints2']['points'] = array(
      'title' => t('Current !points in category', userpoints2_translation()),
      'help' => t("A User's current !points in a single category.", userpoints2_translation()), // The help that appears on the UI,
      'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
          'name field' => 'points', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Describe the tid column of the userpoints2 table.
  $data['userpoints2']['tid'] = array(
      'title' => t('Points category'),
      'help' => t('The categories (terms) of userpoints2 used'), // The help that appears on the UI,
      'field' => array(
          'handler' => 'userpoints2_views_handler_field_category',
      ),
      'argument' => array(
          'handler' => 'userpoints2_views_handler_argument_category',
          'numeric' => TRUE,
          'name field' => 'category', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'userpoints2_views_handler_filter_category',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Describe the max_points column of the userpoints2 table.
  $data['userpoints2']['max_points'] = array(
      'title' => t('Max !points in category', userpoints2_translation()),
      'help' => t("A User's max !points in a single category.", userpoints2_translation()), // The help that appears on the UI,
      'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
          'name field' => 'max_points', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Describe the last_update column of the userpoints2 table.
  $data['userpoints2']['last_update'] = array(
      'title' => t('Last update in category'),
      'help' => t("The last update timestamp for a User's current !points in a single category.", userpoints2_translation()),
      'field' => array(
          'handler' => 'views_handler_field_date',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_date',
      ),
  );

  // Add relationship to user table.
  $data['userpoints2']['uid'] = array(
      'title' => t('User'),
      'help' => t('Relate the userpoints2 table to the user table.'),
      'relationship' => array(
          'base' => 'users',
          'field' => 'uid',
          'label' => t('Users'),
          'handler' => 'views_handler_relationship',
      ),
  );

  // ----------------------------------------------------------------
  // userpoints2_total table
  // Describe the userpoints2_total table.
  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.
  $data['userpoints2_total']['table']['group'] = t('userpoints2 total');

  $data['userpoints2_total']['table']['base'] = array(
      'field' => 'uid',
      'title' => t('userpoints2 Total'),
      'help' => t('Total !points over all categories accumulated by users on your site.', userpoints2_translation()),
  );

  $data['userpoints2_total']['table']['join'] = array(
      'users' => array(
          'left_field' => 'uid',
          'field' => 'uid',
      ),
      'node' => array(
          'left_field' => 'uid',
          'field' => 'uid',
      ),
      'taxonomy_term_data' => array(
          'left_field' => 'tid',
          'field' => 'tid',
      ),
      // This goes to the node so that we have consistent authorship.
      'node_revisions' => array(
          'left_table' => 'node',
          'left_field' => 'uid',
          'field' => 'uid',
      ),
  );

  // Describe the points column of the userpoints2_total table.
  $data['userpoints2_total']['points'] = array(
      'title' => t('Current total !points', userpoints2_translation()),
      'help' => t("A User's current !points across all categories.", userpoints2_translation()), // The help that appears on the UI,
      'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
          'name field' => 'points', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Describe the max_points column of the userpoints2_total table.
  $data['userpoints2_total']['max_points'] = array(
      'title' => t('Max total !points', userpoints2_translation()),
      'help' => t("A user's max !points across all categories.", userpoints2_translation()), // The help that appears on the UI,
      'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
          'name field' => 'max_points', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Describe the last_update column of the userpoints2_total table.
  $data['userpoints2_total']['last_update'] = array(
      'title' => t('Last update of total !points', userpoints2_translation()),
      'help' => t("The last update timestamp for a user's !points across all categories.", userpoints2_translation()),
      'field' => array(
          'handler' => 'views_handler_field_date',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_date',
      ),
  );

  // Add relationship to user table.
  $data['userpoints2_total']['uid'] = array(
      'title' => t('User'),
      'help' => t('Relate the userpoints2 total table to the user table.'),
      'relationship' => array(
          'base' => 'users',
          'field' => 'uid',
          'label' => t('Users'),
          'handler' => 'views_handler_relationship',
      ),
  );

  // ----------------------------------------------------------------
  // userpoints2_txn table
  // Describe the userpoints2_txn table.
  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.
  $data['userpoints2_txn']['table']['group'] = t('userpoints2 Transactions');

  $data['userpoints2_txn']['table']['base'] = array(
      'field' => 'txn_id',
      'title' => t('userpoints2 Transactions'),
      'help' => t('Points transactions accumulated by users on your site.', userpoints2_translation()),
  );

  $data['userpoints2_txn']['table']['join'] = array(
      'users' => array(
          'left_field' => 'uid',
          'field' => 'uid',
      ),
      'taxonomy_term_data' => array(
          'left_field' => 'tid',
          'field' => 'tid',
      ),
      // This goes to the node so that we have consistent authorship.
      'node_revisions' => array(
          'left_table' => 'node',
          'left_field' => 'uid',
          'field' => 'uid',
      ),
  );

  // Describe the points column of the userpoints2 table.
  $data['userpoints2_txn']['points'] = array(
      'title' => t('Points', userpoints2_translation()),
      'help' => t("A User's !points for this transaction.", userpoints2_translation()), // The help that appears on the UI,
      'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
          'name field' => 'points', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Describe the tid column of the userpoints2 table.
  $data['userpoints2_txn']['tid'] = array(
      'title' => t('Category'),
      'help' => t('The categories (terms) of userpoints2 used for this transaction'), // The help that appears on the UI,
      'field' => array(
          'handler' => 'userpoints2_views_handler_field_category',
      ),
      'argument' => array(
          'handler' => 'userpoints2_views_handler_argument_category',
          'numeric' => TRUE,
          'name field' => 'category', // display this field in the summary
      ),
      'filter' => array(
          'handler' => 'userpoints2_views_handler_filter_category',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Add relationship to user table.
  $data['userpoints2_txn']['uid'] = array(
      'title' => t('User'),
      'help' => t('Relate the userpoints2 table to the user table.'),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
      ),
      'relationship' => array(
          'base' => 'users',
          'field' => 'uid',
          'label' => t('Users'),
          'handler' => 'views_handler_relationship',
      ),
  );

  $data['userpoints2_txn']['time_stamp'] = array(
      'title' => t('Timestamp'),
      'help' => t('The created timestamp for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field_date',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_date',
      ),
  );

  $data['userpoints2_txn']['changed'] = array(
      'title' => t('Changed'),
      'help' => t('The changed timestamp for the transaction, for when the transaction is updated.'),
      'field' => array(
          'handler' => 'views_handler_field_date',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_date',
      ),
  );

  $data['userpoints2_txn']['status'] = array(
      'title' => t('Status'),
      'help' => t('The status of the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field_numeric',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  $data['userpoints2_txn']['description'] = array(
      'title' => t('Description'),
      'help' => t('The description for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field',
      ),
  );

  $data['userpoints2_txn']['reference'] = array(
      'title' => t('Reference'),
      'help' => t('The reference for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_string',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  $data['userpoints2_txn']['expirydate'] = array(
      'title' => t('Expiry date'),
      'help' => t('The expiration date for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field_date',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_date',
      ),
  );

  $data['userpoints2_txn']['expired'] = array(
      'title' => t('Expired'),
      'help' => t('The expiry status for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field_numeric',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  $data['userpoints2_txn']['entity_id'] = array(
      'title' => t('Entity ID'),
      'help' => t('The entity_id field. Used to relate to the node table.'),
      'field' => array(
          'handler' => 'views_handler_field',
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_numeric',
          'numeric' => TRUE,
      ),
      'relationship' => array(
          'base' => 'node',
          'field' => 'nid',
          'label' => t('Entity'),
          'handler' => 'views_handler_relationship',
      ),
  );

  $data['userpoints2_txn']['entity_type'] = array(
      'title' => t('Entity type'),
      'help' => t('The entity type for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_string',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  $data['userpoints2_txn']['operation'] = array(
      'title' => t('Operation'),
      'help' => t('The operation for the transaction.'),
      'field' => array(
          'handler' => 'views_handler_field',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_string',
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
  );

  // Reverse join information. This should not be necessary.
  $data['taxonomy_term_data']['table']['join'] = array(
    'userpoints2' => array(
      'left_field' => 'tid',
      'field' => 'tid',
    ),
    'userpoints2_txn' => array(
      'left_field' => 'tid',
      'field' => 'tid',
    ),
    'users' => array(
      'left_field' => 'tid',
      'left_table' => 'userpoints2',
      'field' => 'tid',
    )
  );

  return $data;
}