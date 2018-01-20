 <?php

/**
 * Override of theme_breadcrumb().
 */
function hrmasia_breadcrumb($variables) {
  /*$breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)){ 
	 $sep = '&nbsp;&rarr;&nbsp;';
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
	$output .= '<div class="breadcrumb">' . implode($sep, $breadcrumb).'</div>';
   return $output;
  }*/
  
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    
    if(arg(0) == 'my-communities'){
		$output .= '<div class="breadcrumb"><h2 class="home_icon">DASHBOARD</h2></div>';
	}else if(arg(0) == 'forum'){
		if(arg(1) !=''){
			$term = taxonomy_term_load(arg(1));
			$name = $term->name;
			$output .= '<div class="breadcrumb"><h2 class="home_icon">DASHBOARD <span>//'.$name.'</span></h2></div>';
        }
    }else{
		$output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
		$output .= '<div class="breadcrumb">' . implode(' › ', $breadcrumb) . '</div>';
	}	
    //return $output;
  }

}


/**
 * Override or insert variables into the maintenance page template.
 */
/*function hrmasia_preprocess_maintenance_page(&$vars) {
  // While markup for normal pages is split into page.tpl.php and html.tpl.php,
  // the markup for the maintenance page is all in the single
  // maintenance-page.tpl.php template. So, to have what's done in
  // hrmasia_preprocess_html() also happen on the maintenance page, it has to be
  // called here.
  hrmasia_preprocess_html($vars);
}*/

/**
 * Override or insert variables into the html template.
 */
function hrmasia_preprocess_html(&$vars) {
   // Add conditional stylesheets for Google Font
   //drupal_add_css("http://fonts.googleapis.com/css?family=Merriweather:400,300,300italic,400italic,700,700italic,900,900italic'", array('type' => 'external'));
   drupal_add_css("http://fonts.googleapis.com/css?family=Ubuntu:400,400italic,500,500italic,700,700italic,300italic,300", array('type' => 'external'));
   
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

    if($vars['is_front']){
    	$page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'HRM Asia Magazine reports news and information needed to develop and manage HR strategies in Singapore that improve bottom line results for HR decisions.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Human Resources Singapore, HR Business Partner',
           )
        );
        $vars['head_title']= "HRM Asia Magazine | HR News and Information";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
    }

    switch(arg(2)){
      case "506" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'HRM finds out how HR can have highly effective C-suite Singapore discussions.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'C-suite Singapore',
           )
        );
        $vars['head_title']= "C-suite Singapore | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
      break;
      case "701" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'HRM Asia supports the decisions of retaining experienced and Mature workers Singapore rather than recruiting fresh and unexperienced workforce.discussions.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Mature workers Singapore',
           )
        );
        $vars['head_title']= "Mature workers Singapore | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
      break;
      case "711" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'Companies need to understand what these employees value and strive for so that they can develop better engagement and long term retention strategies Singapore.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Retention Singapore',
           )
        );
        $vars['head_title']= "Retention Singapore | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
      break;
      case "676" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'Recruitment Singapore markets are in the midst of a revolution right now, as talent acquisition technology changes the ways both hirers and potential recruits operate.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Recruitment Singapore',
           )
        );
        $vars['head_title']= "Recruitment Singapore | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
       break;
       case "686" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'hrmasia is a global Talent Management company specializing in Recruitment, Talent Management Singapore and Recruitment Process Outsourcing in Singapore.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Talent Management Singapore',
           )
        );
        $vars['head_title']= "Talent Management Singapore | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
       break;
       case "521" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'According to a recent Bersin & Associates’ study,“lean, technology-enabled, and well-trained Strategic HR teams are able to take advantage of modern talent practices and partner with business leaders to drive impact”.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Strategic HR',
           )
        );
        $vars['head_title']= "Strategic HR | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
       break;
       case "101" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'Recruitment markets are in the midst of a revolution right now, as talent acquisition technology changes the ways both hirers and potential recruits operate.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Talent Acquisition Singapore',
           )
        );
        $vars['head_title']= "Talent Acquisition Singapore | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
       break;
       case "706" :
        $page_description = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'description',
            'content' => 'Recruiting athletes, and managing their Performance Management are among the key factors that shape a sports organization.',
           )
        );
        $page_keywords = array(
          '#type' => 'html_tag',
          '#tag' => 'meta',
          '#attributes' => array(
            'name' => 'keywords',
            'content' => 'Performance Management',
           )
        );
        $vars['head_title']= "Performance Management | hrmasia";
        drupal_add_html_head($page_keywords, 'page_keywords');
        drupal_add_html_head($page_description, 'page_description');
       break;
    }


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

  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
      $tid = arg(2);
      $vid = db_query("SELECT vid FROM {taxonomy_term_data} WHERE tid = :tid", array(':tid' => $tid))->fetchField();
      $vars['theme_hook_suggestions'][] = 'page__vocabulary__' . $vid;
  }
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
function THEMENAME_html_head_alter(&$head_elements) {
// Simplify the meta charset declaration.
$head_elements['system_meta_content_type']['#attributes'] = array(
'charset' => 'utf-8',
);
}


/**
* Implements prev_next for news article page with flippy module.
*/
function prev_next($pre_next, $nid){
	
	switch($pre_next){
		
		case 'prev':
			if($nid){
					$output_data = custom_node_style($nid,'prev first');
					return $output_data;
					//return l($output, 'node/'.$nid, array('attributes' => array('class' => array('prev'))));
				}
		break;
		
		case 'next':
			if($nid){
					$output_data = custom_node_style($nid, 'next last');
          return $output_data;
				}
		break;
		
		}
	
	return $t;
}

function custom_node_style($node_nid, $arrow_class){
  global $base_url;
  $node = node_load($node_nid);      
  $author_name = '';
  $article_date = '';
  $desc = '';

  if(isset($node->field_author_name['und']) && !empty($node->field_author_name['und'][0]['uid'])){
    $author_id = $node->field_author_name['und'][0]['uid'];
    $sql = db_query("SELECT name FROM {users} WHERE uid = '$author_id'");
    $records = $sql->fetchObject();
    $author_name = '<a href="'.$base_url.'/users/'.$author_id.'">'.$records->name.'</a>';
  }else{
    $author_name = '';
  }

  if(isset($node->field_date['und']) && !empty($node->field_date['und'][0]['value'])){
    $author_id = $node->field_date['und'][0]['value'];
    $new_date = date('d M Y',strtotime($author_id));
  }else{
    $new_date = '';
  }

  if(isset($node->field_article_summary['und']) && !empty($node->field_article_summary['und'][0]['value'])){
    $desc = $node->field_article_summary['und'][0]['value'];
  }else{
    $desc = '';
  }

  if(isset($node->field_image[LANGUAGE_NONE]) && !empty($node->field_image[LANGUAGE_NONE])){
    $imgpath = file_load($node->field_image[LANGUAGE_NONE][0]['fid'])->uri;
    $img = '<img src="'.file_create_url($imgpath).'"/>';
  }else{
    $img = '';
  }

  $output = '';
  $output.=' <a class="'.$arrow_class.'" href="'.$base_url.'/node/'.$node_nid.'"><div class="view-field-img">'.$img.'</div>
             <div class="view-field-title">'.$node->title.'</div></a>
             <div class="created">'.$author_name.' - '.$new_date.'</div>
             <div class="view-field-body">'.$desc.'</div>';

             return $output;
          
}

/**
 * Perform alterations before a form is rendered.
 *
 * One popular use of this hook is to add form elements to the node form. When
 * altering a node form, the node object can be accessed at $form['#node'].
 *
 * In addition to hook_form_alter(), which is called for all forms, there are
 * two more specific form hooks available. The first,
 * hook_form_BASE_FORM_ID_alter(), allows targeting of a form/forms via a base
 * form (if one exists). The second, hook_form_FORM_ID_alter(), can be used to
 * target a specific form directly.
 *
 * The call order is as follows: all existing form alter functions are called
 * for module A, then all for module B, etc., followed by all for any base
 * theme(s), and finally for the theme itself. The module order is determined
 * by system weight, then by module name.
 *
 * Within each module, form alter hooks are called in the following order:
 * first, hook_form_alter(); second, hook_form_BASE_FORM_ID_alter(); third,
 * hook_form_FORM_ID_alter(). So, for each module, the more general hooks are
 * called first followed by the more specific.
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form. The arguments
 *   that drupal_get_form() was originally called with are available in the
 *   array $form_state['build_info']['args'].
 * @param $form_id
 *   String representing the name of the form itself. Typically this is the
 *   name of the function that generated the form.
 *
 * @see hook_form_BASE_FORM_ID_alter()
 * @see hook_form_FORM_ID_alter()
 * @see forms_api_reference.html
 */
function hrmasia_form_alter(&$form, &$form_state, $form_id) {
	Global $user;

	/* For Jobs Search Form*/
	if ( $form_id == 'views_exposed_form' ) {
	    $form['#submit'][] = 'hrmasia_jobs_search_funtion';
	 //    if ( $form_state['complete form']['#id'] == 'views-exposed-form-jobs-list-page' ) {
		// 	$title = $form_state['values']['title'];
		// 	$region = $form_state['values']['field_region_value'];
		// 	if ( !empty ( $title ) && !empty ( $region ) ){
		// 		drupal_goto('jobs', array('query' => array('title' => $title, 'title_pre' => $title, 'field_region_value' => $search_str, 'field_region_value_pre' => $search_str)));
		// 	} else if ( !empty ( $region ) ) {
		// 		drupal_goto('jobs', array('query' => array('field_region_value' => $search_str, 'field_region_value_pre' => $search_str)));
		// 	} else if ( !empty ( $title ) )  {
		// 		drupal_goto('jobs', array('query' => array('title' => $title, 'title_pre' => $title)));
		// 	}
		// }
	}

	if ( $form_id == 'training_courses_node_form' || $form_id == 'jobs_node_form' ) {	
		
		//removing fields
		if ($form_id == 'training_courses_node_form'){
			$form['field_course_benefits']['#access'] = FALSE;
			$form['field_cost']['#access'] = FALSE;
		}
		
		//removing body summary field
		$form['body']['und'][0]['summary']['#access']=FALSE;
		//removing company text field
		$form['field_company']['und'][0]['#access']=FALSE;
		
		$is_Course_Provider = false;
		$is_Job_Provider = false;
		$is_Administrator = false;
		
		foreach ( $user->roles as $role_id => $role_name ) {
			if ( $role_name == 'Course Provider' ) {
				$is_Course_Provider = true;
			}
			if ( $role_name == 'Job Provider' ) {
				$is_Job_Provider = true;
			}
			if ( $role_name == 'administrator' ) {
				$is_Administrator = true;
			}
		}
		
		global $user;
		$user_uid = user_load ( $user->uid );
		$profile = profile2_load_by_user($user_uid, 'main');
		$profile_company = $profile->field_profile_company['und'][0]['value'];
		
		if ( $is_Course_Provider ) {
			$profile_company_id = db_select ( 'node', 'n' )
									->fields ( 'n', array ( 'nid' ) )
									->condition ( 'title', $profile_company )
									->condition ( 'type', 'training_companies' )
									->execute ()
									->fetchField ();
			$form['field_trainining_company']['und'][0]['nid']['#default_value'] = $profile_company_id;
			if (!empty($profile_company_id)){
				$form['field_trainining_company']['und']['#disabled'] = TRUE;
			}
			
			//setting posted end date to be 180 days greater than posted date (courses)
			if (isset($form['field_course_dates']['und'][0]['#default_value']['value']) && !empty($form['field_course_dates']['und'][0]['#default_value']['value'])){
				$form['field_course_dates']['und'][0]['#default_value']['value2'] = (date('Y-m-d H:i:s', strtotime($form['field_course_dates']['und'][0]['#default_value']['value']. ' + 180 days')));
			}
		}
		
		if ( $is_Job_Provider ) {
			$profile_company_id = db_select ( 'node', 'n' )
									->fields ( 'n', array ( 'nid' ) )
									->condition ( 'title', $profile_company )
									->condition ( 'type', 'company' )
									->execute ()
									->fetchField ();
			$form['field_company_ref']['und'][0]['nid']['#default_value'] = $profile_company_id;
			if (!empty($profile_company_id)){
				$form['field_company_ref']['und']['#disabled'] = TRUE;
			}
			
			//setting posted end date to be 180 days greater than posted date (jobs)
			if (isset($form['field_posted_date']['und'][0]['#default_value']['value']) && !empty($form['field_posted_date']['und'][0]['#default_value']['value'])){
				$form['field_posted_date']['und'][0]['#default_value']['value2'] = (date('Y-m-d H:i:s', strtotime($form['field_posted_date']['und'][0]['#default_value']['value']. ' + 180 days')));
				$form['field_posted_date']['und'][0]['#date_items']['value2'] = (date('Y-m-d H:i:s', strtotime($form['field_posted_date']['und'][0]['#default_value']['value']. ' + 180 days')));
			}
			
			//disabling posted date fields for job add page
			$form['field_posted_date']['#disabled'] = TRUE;
		}	

		// if ( $is_Administrator ) {
			// if ( $form_id == 'jobs_node_form' ) {	
				// setting posted end date to be 180 days greater than posted date (jobs)
				// if (isset($form['field_posted_date']['und'][0]['#default_value']['value']) && !empty($form['field_posted_date']['und'][0]['#default_value']['value'])){
					// $form['field_posted_date']['und'][0]['#default_value']['value2'] = (date('Y-m-d H:i:s', strtotime($form['field_posted_date']['und'][0]['#default_value']['value']. ' + 180 days')));
					// $form['field_posted_date']['und'][0]['#date_items']['value2'] = (date('Y-m-d H:i:s', strtotime($form['field_posted_date']['und'][0]['#default_value']['value']. ' + 180 days')));
				// }
				// dpm($form);
			// }
		// }
		
		/* starts for credits */
		if ( $is_Course_Provider || $is_Job_Provider) {
		//dpm($form);
			//jobs form
			if ($form_id == 'jobs_node_form' && !isset($form['nid']['#value'])){
				//when both points are empty
				if (userpoints_get_current_points($user->uid) <= 0 && userpoints2_get_current_points($user->uid) <= 0){				
					$form['#access'] = FALSE;
					drupal_set_message('You do not have enough credits to create new jobs. Please contact site admin for more points. Click here to go <a href="javascript:history.back();">back</a>.', 'error');
				} 
				//when both points are ready
				if (userpoints_get_current_points($user->uid) > 0 && userpoints2_get_current_points($user->uid) > 0){				
					if (isset($_REQUEST['tid']) && !empty($_REQUEST['tid'])){
						$form['field_jobs_premium_type']['und']['#default_value'] = $_REQUEST['tid'];				
						$form['field_jobs_premium_type']['und']['#disabled'] = TRUE;
					} else {
						//$form['field_jobs_premium_type']['und']['#default_value'] = $_REQUEST['tid'];
						//$form['field_jobs_premium_type']['und']['#disabled'] = TRUE;
					}					
				} 
				//when only premium points are available
				if (userpoints_get_current_points($user->uid) >= 0 && userpoints2_get_current_points($user->uid) <= 0){				
					$form['field_jobs_premium_type']['und']['#default_value'] = '316';				
					$form['field_jobs_premium_type']['und']['#disabled'] = TRUE;
					$form['field_jobs_premium_type']['und']['#description'] = 'Only Premium Jobs can be created, since your account currently holds Premium Credits only.';
				} 
				//when only enhanced premium points are available
				if (userpoints_get_current_points($user->uid) <= 0 && userpoints2_get_current_points($user->uid) >= 0){				
					$form['field_jobs_premium_type']['und']['#default_value'] = '321';
					$form['field_jobs_premium_type']['und']['#disabled'] = TRUE;
					$form['field_jobs_premium_type']['und']['#description'] = 'Only Enhanced Premium Jobs can be created, since your account currently holds Enhanced Premium Credits only.';
				}
			}
			//course form
			if ($form_id == 'training_courses_node_form' && !isset($form['nid']['#value'])){
				//when both points are empty
				if (userpoints_get_current_points($user->uid) <= 0 && userpoints2_get_current_points($user->uid) <= 0){				
					$form['#access'] = FALSE;
					drupal_set_message('You do not have enough credits to create new training course. Please contact site admin for more points. Click here to go <a href="javascript:history.back();">back</a>.', 'error');
				} 
				//when both points are ready
				if (userpoints_get_current_points($user->uid) > 0 && userpoints2_get_current_points($user->uid) > 0){				
					if (isset($_REQUEST['tid']) && !empty($_REQUEST['tid'])){
						$form['field_course_premium_type']['und']['#default_value'] = $_REQUEST['tid'];				
						$form['field_course_premium_type']['und']['#disabled'] = TRUE;
					} else {
						$form['field_course_premium_type']['und']['#default_value'] = $_REQUEST['tid'];
						$form['field_course_premium_type']['und']['#disabled'] = TRUE;
					}					
				} 
				//when only premium points are available
				if (userpoints_get_current_points($user->uid) >= 0 && userpoints2_get_current_points($user->uid) <= 0){				
					$form['field_course_premium_type']['und']['#default_value'] = '276';				
					$form['field_course_premium_type']['und']['#disabled'] = TRUE;
					$form['field_course_premium_type']['und']['#description'] = 'Only Premium Courses can be created, since your account currently holds Premium Credits only.';
					
				} 
				//when only enhanced premium points are available
				if (userpoints_get_current_points($user->uid) <= 0 && userpoints2_get_current_points($user->uid) >= 0){				
					$form['field_course_premium_type']['und']['#default_value'] = '271';
					$form['field_course_premium_type']['und']['#disabled'] = TRUE;
					$form['field_course_premium_type']['und']['#description'] = 'Only Enhanced Premium Jobs can be created, since your account currently holds Premium Credits only.';
				}
			}
		}
		/* ends for credits */
		/* starts for redirect after submission */
		$form['actions']['submit']['#submit'][] = 'hrmasia_redirect_handler';
		/* ends for redirect after submission */
		
		//appending some codes in node add form of jobs and courses
		//$form['#after_build'][] = 'hrmasia_after_build';
	}
	if ( $form_id == 'forum_node_form') {
	/* for fix category select box on submit page of forum */
	$tid = arg(3);
		$form['taxonomy_forums']['und']['#default_value'] = $tid;
		$form['taxonomy_forums']['und']['#disabled'] = TRUE;
	}
	if($form_id == 'node_registration_form'){
		$form['actions']['submit']['#value'] = 'Register';

	}
}

/* starts for appending some codes in node add form of jobs and courses */
function hrmasia_after_build($form, &$form_state) {
	if ($form['#form_id'] == 'jobs_node_form') {
		drupal_add_js('jQuery(document).ready(function () { jQuery("input[name=\'field_posted_date[und][0][value2][date]\']").attr("disabled","disabled");	jQuery("input[name=\'field_posted_date[und][0][value2][time]\']").attr("disabled","disabled");	});', 'inline');
	}
	if ($form['#form_id'] == 'training_courses_node_form') {
		drupal_add_js('jQuery(document).ready(function () { jQuery("input[name=\'field_course_dates[und][0][value2][date]\']").attr("disabled","disabled");	jQuery("input[name=\'field_course_dates[und][0][value2][time]\']").attr("disabled","disabled");	});', 'inline');
	}
	return $form;
}
/* ends for appending some codes in node add form of jobs and courses */

/* starts for redirect after submission */
function hrmasia_redirect_handler($form, &$form_state) {
	unset($_REQUEST['destination']); 
    unset($form['#redirect']); 
	
	global $user;
	if (in_array('Job Provider', $user->roles)){
		$form_state['redirect'] = 'manage-jobs';
	}
	if (in_array('Course Provider', $user->roles)){
		$form_state['redirect'] = 'manage-courses';
	}
}
/* ends for redirect after submission */

/* Start for Jobs Search Form*/
function hrmasia_jobs_search_funtion(&$form, &$form_state) {
	if ( $form_state['complete form']['#id'] == 'views-exposed-form-jobs-list-page' ) {
		$title = $form_state['values']['title'];
		$region = $form_state['values']['field_region_value'];
		// if ( !empty ( $title ) && !empty ( $region ) ){
		// 	drupal_goto('jobs', array('query' => array('title' => $title, 'title_pre' => $title, 'field_region_value' => $search_str, 'field_region_value_pre' => $search_str)));
		// } else if ( !empty ( $region ) ) {
		// 	drupal_goto('jobs', array('query' => array('field_region_value' => $search_str, 'field_region_value_pre' => $search_str)));
		// } else if ( !empty ( $title ) )  {
		// 	drupal_goto('jobs', array('query' => array('title' => $title, 'title_pre' => $title)));
		// }
	}
}
/* End for Jobs Search Form */


/*function hrmasia_preprocess_taxonomy_term(&$variables) {
  $term = $variables['machine_name'];
  $vocabulary = $variables['vocabulary_machine_name'];
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__'.$vocabulary;
}*/

