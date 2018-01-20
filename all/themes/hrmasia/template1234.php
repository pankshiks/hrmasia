 <?php

/**
 * Override of theme_breadcrumb().
 */
function hrmasia_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' › ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Override or insert variables into the maintenance page template.
 */
function hrmasia_preprocess_maintenance_page(&$vars) {
  // While markup for normal pages is split into page.tpl.php and html.tpl.php,
  // the markup for the maintenance page is all in the single
  // maintenance-page.tpl.php template. So, to have what's done in
  // hrmasia_preprocess_html() also happen on the maintenance page, it has to be
  // called here.
  hrmasia_preprocess_html($vars);
}

/**
 * Override or insert variables into the html template.
 */
function hrmasia_preprocess_html(&$vars) {
   // Add conditional stylesheets for Google Font
   drupal_add_css("http://fonts.googleapis.com/css?family=Merriweather:400,300,300italic,400italic,700,700italic,900,900italic'", array('type' => 'external'));
   drupal_add_css("http://fonts.googleapis.com/css?family=<link href='http://fonts.googleapis.com/css?family=Ubuntu:400,400italic,500,500italic,700,700italic,300italic,300'", array('type' => 'external'));
   
    $vars['html_attributes_array'] = array();
$vars['body_attributes_array'] = array();
 
// HTML element attributes.
$vars['html_attributes_array']['lang'] = $vars['language']->language;
$vars['html_attributes_array']['dir'] = $vars['language']->dir;
 
// Adds RDF namespace prefix bindings in the form of an RDFa 1.1 prefix
// attribute inside the html element.
if (function_exists('rdf_get_namespaces')) {
$vars['rdf'] = new stdClass;
foreach (rdf_get_namespaces() as $prefix => $uri) {
$vars['rdf']->prefix .= $prefix . ': ' . $uri . "\n";
}
$vars['html_attributes_array']['prefix'] = $vars['rdf']->prefix;
}
 
// BODY element attributes.
$vars['body_attributes_array']['class'] = $vars['classes_array'];
$vars['body_attributes_array'] += $vars['attributes_array'];
$vars['attributes_array'] = '';

}
/**
 * Override or insert variables into the html template.
 */
function hrmasia_process_html(&$vars) {
 // Flatten out html_attributes and body_attributes.
$vars['html_attributes'] = drupal_attributes($vars['html_attributes_array']);
$vars['body_attributes'] = drupal_attributes($vars['body_attributes_array']);
}

/**
 * Override or insert variables into the page template.
 */
function hrmasia_preprocess_page(&$vars) {
  // Move secondary tabs into a separate variable.
  $vars['tabs2'] = array(
    '#theme' => 'menu_local_tasks',
    '#secondary' => $vars['tabs']['#secondary'],
  );
  unset($vars['tabs']['#secondary']);

  if (isset($vars['main_menu'])) {
    $vars['primary_nav'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'main-menu'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['primary_nav'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_nav'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'secondary-menu'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_nav'] = FALSE;
  }

  // Prepare header.
  $site_fields = array();
  if (!empty($vars['site_name'])) {
    $site_fields[] = $vars['site_name'];
  }
  if (!empty($vars['site_slogan'])) {
    $site_fields[] = $vars['site_slogan'];
  }
  $vars['site_title'] = implode(' ', $site_fields);
  if (!empty($site_fields)) {
    $site_fields[0] = '<span>' . $site_fields[0] . '</span>';
  }
  $vars['site_html'] = implode(' ', $site_fields);

  // Set a variable for the site name title and logo alt attributes text.
  $slogan_text = $vars['site_slogan'];
  $site_name_text = $vars['site_name'];
  $vars['site_name_and_slogan'] = $site_name_text . ' ' . $slogan_text;
  $vars['site_title'] = implode('title', 'newt_textbox_set_text(textbox, text)');
}

/**
 * Override or insert variables into the node template.
 */
function hrmasia_preprocess_node(&$vars) {
  $vars['submitted'] = $vars['date'] . ' — ' . $vars['name'];
}

/**
 * Override or insert variables into the comment template.
 */
function hrmasia_preprocess_comment(&$vars) {
  $vars['submitted'] = $vars['created'] . ' — ' . $vars['author'];
}

/**
 * Override or insert variables into the block template.
 */
function hrmasia_preprocess_block(&$vars) {
  $vars['title_attributes_array']['class'][] = 'title';
  $vars['classes_array'][] = 'clearfix';
}

/**
 * Override or insert variables into the page template.
 */
function hrmasia_process_page(&$vars) {
  // Hook into color.module
  if (module_exists('color')) {
    _color_page_alter($vars);
  }

  if(module_exists('insert variable')){
    _color_page_alter('header list');
  }
}

/**
 * Override or insert variables into the region template.
 */
function hrmasia_preprocess_region(&$vars) {
  if ($vars['region'] == 'header') {
    $vars['classes_array'][] = 'clearfix';
  }
}
/**
* Implements hook_html_head_alter().
*/
function hrmasia_html_head_alter(&$head_elements) {
// Simplify the meta charset declaration.
$head_elements['system_meta_content_type']['#attributes'] = array(
'charset' => 'utf-8',
);
