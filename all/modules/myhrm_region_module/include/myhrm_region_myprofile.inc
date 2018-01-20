 <?php

function myhrm_region_myprofile_form($form, &$form_submit){
	
	//get current loggedin user-id
	global $user; 
	
	$form = array();
	
	$form['editprofile'] = array(
    '#type' => 'link',
		'#title' => t('Edit profile'),
		'#href' => 'user/'.$user->uid.'/edit',
		'#prefix' => '<div id="region1">',
		'#suffix' => '</div>',
  );
	
  $form['selectpreferences'] = array(
    '#type' => 'link',
		'#title' => t('Select preferences'),
		'#href' => '#',
		'#prefix' => '<div id="region1">',
		'#suffix' => '</div>',
   );

	 $form['choosediscussiontopic'] = array(
    '#type' => 'link',
		'#title' => t('Choose Discussion topic'),
		'#href' => '#',
		'#prefix' => '<div id="region1">',
		'#suffix' => '</div>',
  );

  return $form;
