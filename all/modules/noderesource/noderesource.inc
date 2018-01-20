<?php
// noderesource.inc
/**
* Callback for creating node resources.
*
* @param object $data
* @return object
*/
function _noderesource_create($data) {
  global $user;
  if (isset($data) &&  is_array($data)) $data=(object) $data;
  unset($data->nid);
  $data->uid = $user->uid;
  $data->created = time();
  $data->modified = time();

  if (!isset($data->subject)) {
    return services_error('Missing node attribute subject', 406);
  }

  if (!isset($data->node)) {
    return services_error('Missing node attribute node', 406);
  }

  noderesource_write_node($data);
 
  return (object)array(
    'id' => $data->nid,
    'uri' => services_resource_uri(array('node', $data->id)),
  );
}

// noderesource.inc
/**
* Callback for updating node resources.
*
* @param int $id
* @param object $data
* @return object
*/
function _noderesource_update($nid, $data) {
  global $user;
  $node = noderesource_get_node($nid);

  unset($data->created);
  $data->nid = $nid;
  $data->uid = $node->uid;
  $data->modified = time();

  noderesource_write_node($data);
 
  return (object)array(
    'id' => $nid,
    'uri' => services_resource_uri(array('node', $nid)),
  );
}
/**
* Callback for retrieving node resources.
*
* @param int $id
* @return object
*/
function _noderesource_retrieve($nid) {
  return noderesource_get_node($nid);
}

/**
* Callback for deleting node resources.
*
* @param int $id
* @return object
*/
function _noderesource_delete($nid) {
  noderesource_delete_node($nid);
 
  return (object)array(
    'nid' => $nid,
  );
}



function _noderesource_by_type($type, $limit = 1){
  $nodes = array();
 
  if($type == "article" || $type == "hrm_tv"){
    $res = db_query("SELECT nid FROM {node} where type=:type and sticky=1 ORDER BY changed DESC limit $limit",
           array(':type' => $type));
  } else {
    $res = db_query("SELECT nid FROM {node} where type=:type ORDER BY changed DESC limit $limit",
           array(':type' => $type));
  }
  

  foreach ($res as $node) {
    $node = node_load($node->nid);

    if($type == "homepage_featured"){
      foreach($node->field_featured_slider_content['und'] as $sliderimage){
        $slider_obj = field_collection_item_load($sliderimage['value']);

        $nodes[] = array(
          'image' => "sites/default/files/styles/homepageslider/public/".$slider_obj->field_banner_image['und'][0]['filename'],
          'slideLink' => $slider_obj->field_link2['und'][0]['url'],
          'inoroutlink' => $slider_obj->field_link2['und'][0]['title']
        );
      } 
    } else {
      $nodes[] = array(
        'title' => $node->title,
        'nid' => $node->nid,
        'body' => $node->body['und'][0]['value'],
        'image' => $node->field_image['und'][0]['filename'],
        'date' => $node->field_date['und'][0]['value'],
        'tv_date' => $node->field_tv_date['und'][0]['value'],
        'date_cong' => $node->field_date_congress['und'][0]['value'],
        'summary' => $node->field_news_summary['und'][0]['value'],
        'article_summary' => $node->field_article_summary['und'][0]['value']
      );
    }
  }
//print_r($nodes);
  return $nodes;
}

function _noderesource_index($page = NULL, $parameters = NULL) {
  $nodes_array = array(
    'news' => _noderesource_by_type("news", 3),
    'features_news' => _noderesource_by_type("article"),
    'events' => _noderesource_by_type("hrm_congress", 3),
    'hrmtv' => _noderesource_by_type("hrm_tv"),
    'slides' => _noderesource_by_type("homepage_featured")
  );
//print_r($nodes_array);
  return $nodes_array;
}

function _noderesource_taxoindex() {
  $terms = taxonomy_get_tree(51);
  $term_list = array();

  foreach($terms as $term){
    if($term->parents[0] == 0){
      $term_children = taxonomy_get_children($term->tid, 51);
      $child_array = array();
      
      if(isset($term_children)){
        foreach($term_children as $tchild){
          $child_array[] = array(
            "tid" => $tchild->tid,
            "name" => $tchild->name,
            "weight" => $tchild->weight,
          );
        }
      }
     $term->children = $child_array;
     $term_list[] = $term;
    }
  }

  return $term_list;
  //$node = node_load(242132);
  //return $node;
}

/**
* Access callback for the node resource.
*
* @param string $op
*  The operation that's going to be performed.
* @param array $args
*  The arguments that will be passed to the callback.
* @return bool
*  Whether access is given or not.
*/

function _noderesource_access($op, $args) {
  global $user;
  $access = FALSE;

  switch ($op) {
    case 'view':
      $node = noderesource_get_node($args[0]);
      $access = user_access('node resource view any node');
      $access = $access || $node->uid == $user->uid && user_access('node resource view own nodes');
      break;
    case 'update':
      $node = noderesource_get_node($args[0]->nid);
      $access = user_access('node resource edit any node');
      $access = $access || $node->uid == $user->uid && user_access('node resource edit own nodes');
      break;
    case 'delete':
      $node = noderesource_get_node($args[0]);
      $access = user_access('node resource delete any node');
      $access = $access || $node->uid == $user->uid && user_access('node resource delete own nodes');
      break;
  }
  $access = TRUE;
 
  return $access;
}
?>
