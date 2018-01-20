 <?php

function myhrm_region_form($form, &$form_submit)
{
	//get user uid
	global $user;
	
//print views_embed_view('YOUR_VIEW_NAME','PAGEID/BLOCKID',$user->uid);

	$form = array();
	
	$form['myprofile'] = array(
    '#type' => 'link',
		'#title' => t('My Profile'),
		'#href' => 'myhrm/nojs',
		'#prefix' => '<div style="float: left;width: 49%;height: 300px;text-align: center;padding: 10px 0;border: 1px solid #ccc;box-sizing: border-box;margin: 0 19px 10px 0;"><div id="ajax-link">',
		'#suffix' => '</div><div id="ajax-display"></div></div>',
		'#ajax' => array(
      'effect' => 'fade',
    ),
  );
	
	$view = views_get_view('preference_test_aricle_post');
	//print $view->preview('page');
	
  $form['featuredarticles'] = array(
    '#type' => 'link',
		'#title' => t('Featured Articles'),
		'#href' => 'myhrm-featured-articles',
		'#prefix' => '<div style="float: left;width: 49%; text-align: center;padding: 10px 0;border: 1px solid #ccc;box-sizing: border-box; margin: 0 0 10px 0;" id="region1"><div style="margin: 0 0 20px 0;">',
		'#suffix' => '</div><div>'.$view->preview('page').'</div></div>',
   );

	 $form['eventslisting'] = array(
    '#type' => 'link',
		'#title' => t('Events listing'),
		'#href' => '#',
		'#prefix' => '<div style="float: left;width: 49%;height: 300px;text-align: center;padding: 10px 0;border: 1px solid #ccc;box-sizing: border-box; margin: 0 19px 0 0;" id="region1">',
		'#suffix' => '</div>',
  );
	
	 $form['disscussionforum'] = array(
    '#type' => 'link',
		'#title' => t('Disscussion forum'),
		'#href' => '#',
		'#prefix' => '<div style="float: left;width: 49%;height: 300px;text-align: center;padding: 10px 0;border: 1px solid #ccc;box-sizing: border-box; margin: 0;" id="region1">',
		'#suffix' => '</div>',
  );
  return $form;
}



