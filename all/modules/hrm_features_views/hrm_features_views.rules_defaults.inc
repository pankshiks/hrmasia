<?php
/**
 * @file
 * hrm_features_views.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hrm_features_views_default_rules_configuration() {
  $items = array();
  $items['rules_after_posting_comment'] = entity_import('rules_config', '{ "rules_after_posting_comment" : {
      "LABEL" : "After posting comment",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : {
        "comment_insert--comment_node_forum" : { "bundle" : "comment_node_forum" },
        "comment_update--comment_node_forum" : { "bundle" : "comment_node_forum" },
        "node_insert--forum" : { "bundle" : "forum" }
      },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2", "36" : "36" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "my-communities" } } ]
    }
  }');
  $items['rules_feeds'] = entity_import('rules_config', '{ "rules_feeds" : {
      "LABEL" : "Feeds",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "ON" : { "feeds_import_jobs_importer" : [] },
      "DO" : []
    }
  }');
  $items['rules_moderation_flow_for_posting_comments'] = entity_import('rules_config', '{ "rules_moderation_flow_for_posting_comments" : {
      "LABEL" : "Moderation flow for posting comments",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_forum" : { "bundle" : "comment_node_forum" } },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "36" : "36" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "comment:status" ], "value" : "0" } },
        { "mail" : {
            "to" : "sumathi@hrmasia.com.sg",
            "subject" : "A new comment is created",
            "message" : "\\u003Cp\\u003EHello Content Approver,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EA new comment by normalusertest has been added to a recent discussion on \\u003Ca href=\\u0022www.hrmasia.com\\u0022\\u003Ewww.hrmasia.com\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease take a look at the comment below and the following link to approve it accordingly.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0022[comment:body]\\u0022\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E[comment:edit-url]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EBest Regards,\\u003Cbr\\/\\u003E\\r\\nHRM ASIA\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_forum_topic'] = entity_import('rules_config', '{ "rules_notify_forum_topic" : {
      "LABEL" : "Notify forum topic",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--forum" : { "bundle" : "forum" } },
      "DO" : [
        { "mail" : {
            "to" : "george@hrmasia.com.sg",
            "subject" : "New forum topic - [node:title]",
            "message" : "[node:body]",
            "from" : "info@hrmasia.com.sg",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_other_user_login_redirect'] = entity_import('rules_config', '{ "rules_other_user_login_redirect" : {
      "LABEL" : "Other user login redirect",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "user" } } ]
    }
  }');
  $items['rules_password_recovery'] = entity_import('rules_config', '{ "rules_password_recovery" : {
      "LABEL" : "password recovery",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : []
    }
  }');
  $items['rules_update_user_account_redirect'] = entity_import('rules_config', '{ "rules_update_user_account_redirect" : {
      "LABEL" : "Update User Account Redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "36" : "36" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "my-communities" } } ]
    }
  }');
  $items['rules_user_log_in_redirect'] = entity_import('rules_config', '{ "rules_user_log_in_redirect" : {
      "LABEL" : "User log in redirect",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "^user\\/reset\\/",
            "operation" : "regex"
          }
        },
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "36" : "36" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "my-communities" } } ]
    }
  }');
  $items['rules_user_registered_redirect'] = entity_import('rules_config', '{ "rules_user_registered_redirect" : {
      "LABEL" : "User registered redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "redirect" : { "url" : "welcome" } },
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "36" : "36" } } } }
      ]
    }
  }');
  $items['rules_user_role'] = entity_import('rules_config', '{ "rules_user_role" : {
      "LABEL" : "User Role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "2" : "2" } } } },
        { "entity_has_field" : { "entity" : [ "account" ], "field" : "field_role" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "36" : "36" } } } },
        { "data_set" : { "data" : [ "account:roles:0" ], "value" : "36" } },
        { "list_add" : { "list" : [ "account:roles" ], "item" : [ "account:field-role" ] } }
      ]
    }
  }');
  return $items;
}
