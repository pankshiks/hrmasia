 <?php
function edm_generator_hr_in_practice($noarea = NULL){
	$html = ''; $edm = '';
	$edm .= '
	<table width="100%" border="0" cellspacing="0" cellpadding="0" style="border: 1px solid;">
	  <tr>
		<td align="center" style="padding : 0 10px;">
		<table align="center" width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:13px; color:#444;">
			<tr>
			  <td height="13"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
			</tr>
			<tr>
			  <td>
			  <img align="center" src="https://tpc.googlesyndication.com/simgad/16061089591702466991" border="0" style="width:728px;">
			  </td>
			</tr>
			<tr>
			  <td height="13" >
			    <img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/>
			  </td>
			</tr>
			<tr>
			  <td style="text-align:center;">
			  <img align="center" src="http://www.hrmasianewsletter.com/newslimage/logo2016.jpg" border="0">
			  </td>
			</tr>
			<tr>
			  <td><table align="center" width="730" border="0" cellspacing="0" cellpadding="0" >
				  <tr>
					<td width="730" style="vertical-align:top">
					  <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-size:13px; font-family:Verdana,Geneva,sans-serif; color:#000000">
						<tr>
						  <td height="24" colspan="5" align="center"><strong>'.date("j M Y", time()).'</strong></td>
						  <td width="436"></td>
						  <td width="60">
						     <a href="https://www.facebook.com/HRMAsiaMag"><img src="http://www.hrmasianewsletter.com/newslimage/fb.jpg" border="0" style="display:block"></a>
						  </td>
						  <td width="60">
						    <a href="https://twitter.com/HRM_Asia"><img src="http://www.hrmasianewsletter.com/newslimage/twitter.jpg" border="0" style="display:block"></a>
						  </td>
						  <td width="40">
						    <a href="https://www.linkedin.com/company/hrm-asia"><img src="http://www.hrmasianewsletter.com/newslimage/linkedin.jpg" border="0" style="display:block"></a>
						  </td>
						  <td width="15"></td>
						</tr>
					  </table>
					</td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td height="8"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
			</tr>
			
			<tr>
			  <td><table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:12px; color:#000000">
				  <tr>
						  <td height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>
				   <tr>
						  <td style="margin-bottom: 10px; border-bottom: 3px solid #F89847;"><p style="background: #F89847 none repeat scroll 0% 0%; color: #eee;width: 160px; padding: 5px 5px 5px 11px; text-transform: capitalize; font-weight: bold; margin: 0px 0px 0px 3px;">Talking HR</p></td>
				  </tr>
				  <tr>
						  <td height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>

				  <tr>
					<td width="730" style="vertical-align:top">
					  <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:13px; color:#444">'. generate_news_second_latest() .'</table>
					</td>
				  </tr>
				</table></td>
			</tr>

			<tr>
			  <td align="center"><table width="730" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>

            <tr>
			  <td><table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:12px; color:#000000">
				  <tr>
						  <td style="margin-bottom: 10px; border-bottom: 3px solid #0877BB;"><p style="background: #0877BB; color: rgb(238, 238, 238); width: 175px; padding: 5px 5px 5px 11px; text-transform: capitalize; font-weight: bold; margin: 0px 0px 0px 3px;">Challenges and issues</p></td>
				  </tr>
				  <tr>
						  <td height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>
				  <tr>
					<td width="730" style="vertical-align:top">
					  <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:13px; color:#444">'. generate_news_second_latest_2() .'</table>
					</td>
				  </tr>
				</table></td>
			</tr>


			<!--<tr>
			  <td align="center"><table width="730" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>

 <tr>
			  <td><table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:12px; color:#000000">
				  <tr>
						  <td style="margin-bottom: 10px; border-bottom: 3px solid #4BC1B4;"><p style="background: #4BC1B4; color: rgb(238, 238, 238); width: 210px; padding: 5px 5px 5px 11px; text-transform: capitalize; font-weight: bold; margin: 0px 0px 0px 3px;">HR Summit Asia 2017 update</p></td>
				  </tr>
				  <tr>
						  <td height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>
				  <tr>
					<td width="730" style="vertical-align:top">
					  <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:13px; color:#444">'. generate_news_second_latest_11() .'</table>
					</td>
				  </tr>
				</table></td>
			</tr>-->


			<tr>
			  <td align="center"><table width="730" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>


			<tr>
			  <td align=""><table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:12px; color:#000000">
				  <tr>
					<td width="301" style="vertical-align:top"><table width="301" border="0" cellspacing="0" cellpadding="0">
						<tr>
						  <td><img src="http://www.hrmasianewsletter.com/newslimage/hrmtv.jpg" alt="" border="0"/></td>
						</tr>
						<tr>
						  <td height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>
						<tr>
						  <td><table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif">'. generate_tv() .'</table></td>
						</tr>
					  </table></td>
				  </tr>
				</table></td>
			</tr>



			<tr>
			  <td align="center"><table width="730" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="30"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>


 <tr>
			  <td><table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:12px; color:#000000">
				  <tr>
						  <td style="margin-bottom: 10px; border-bottom: 3px solid #774FA0;"><p style="background: #774FA0; color: rgb(238, 238, 238); width: 175px; padding: 5px 5px 5px 11px; text-transform: capitalize; font-weight: bold; margin: 0px 0px 0px 3px;">Smart Business</p></td>
				  </tr>
				  <!--<tr>
						  <td height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>-->
				  <tr>
					<td width="730" style="vertical-align:top">
					  <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:13px; color:#444;background: #f7f7f7;">'. generate_mybrand_second_latest() .'</table>
					</td>
				  </tr>
				</table></td>
			</tr>


<tr>
			  <td align="center"><table width="730" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>



             <tr>
			  <td align="center" style="padding:0 10px">
			    <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:12px; color:#000000">
				  <tr>
					<td width="730" style="vertical-align:top">
					  <table width="730" border="0" cellspacing="0" cellpadding="0">
					    <tr>
						  <td>
						    <img src="http://www.hrmasianewsletter.com/newslimage/partners.jpg" alt="" border="0"/>
						  </td>
						</tr>
						<tr>
						  <td>
						    <table width="730" border="0" cellspacing="0" cellpadding="0">
				              <tr>
					            <td width="730" class="par_logo">'. generate_partners() .'</td>
				              </tr>
				            </table>
						  </td>
						</tr>
					  </table>
					</td>
				   </tr>
				</table>
			   </td>
			</tr>

			<tr>
			  <td align="center" style="padding-top:10px;">
			  <table width="730" border="0" cellspacing="0" cellpadding="0" style="font-family:Verdana,Geneva,sans-serif; font-size:11px; color:#000">
				  <tr>
					<td width="621" align="center"><br />
					  Disclaimer: **** This electronic message transmission contains information from HRM Asia and is confidential and privileged. The information is intended to be for the use of the individual or entity named above. If you are not the intended recipient, be aware that any disclosure, copying, distribution, or use of the contents of this information is prohibited. Any offer of goods or services will be subject to the addition of GST. If you have received this electronic transmission in error, please notify us by telephone immediately at +65 6423 4631 **** .<br />
					  <br />
					  Copyright © 2014 HRM Asia Pte Ltd. Reproduction in whole or in part in any form or medium without express written permission of HRM Asia Pte Ltd is prohibited.<br />
					  &nbsp;</td>
				  </tr>
				</table></td>
			</tr>
		  </table></td>
	  </tr>
	</table>
	';
	
	if($noarea){
    $html .= '<html><head>
	<style>tbody { border: none; }
	.par_logo th{
		border-bottom: none !important;
	}
	</style></head><body>'. $edm .'</body></html>';
	}else {
	$html .= '
	<style>tbody { border: none; }
	.par_logo th{
		border-bottom: none !important;
	}
	</style>
	<p>Copy the EDM code below:</p>
	<textarea cols="85" rows="5">'. $edm .'</textarea>'. $edm .'
	';
    }
		
	return $html;
}

function get_news_latest (){
	//get today news latest
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, field_data_field_date.field_date_value AS date_field, field_data_field_news_summary.field_news_summary_value AS summary_field, file_managed.uri AS image_uri_field
	FROM node
	LEFT JOIN field_data_field_date ON node.nid = field_data_field_date.entity_id AND (field_data_field_date.entity_type = 'node' AND field_data_field_date.deleted = '0')
	LEFT JOIN field_data_field_news_summary ON node.nid = field_data_field_news_summary.entity_id AND (field_data_field_news_summary.entity_type = 'node' AND field_data_field_news_summary.deleted = '0')
	LEFT JOIN field_data_field_image ON node.nid = field_data_field_image.entity_id AND (field_data_field_image.entity_type = 'node' AND field_data_field_image.deleted = '0')
	LEFT JOIN file_managed ON field_data_field_image.field_image_fid = file_managed.fid
	WHERE (( (node.status = '1') AND (node.type IN  ('news')) AND (DATE_FORMAT(field_data_field_date.field_date_value, '%Y-%m-%d') <= DATE_FORMAT(now(), '%Y-%m-%d')) ))
	ORDER BY date_field DESC
	LIMIT 1 OFFSET 0");
	$result = $results->fetchAll();  
	return $result;
}

function get_news_latest_by_nodequeue (){
	//get today news latest
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, field_data_field_date.field_date_value AS date_field, field_data_field_news_summary.field_news_summary_value AS summary_field, file_managed.uri AS image_uri_field
	FROM node
	LEFT JOIN field_data_field_date ON node.nid = field_data_field_date.entity_id AND (field_data_field_date.entity_type = 'node' AND field_data_field_date.deleted = '0')
	LEFT JOIN field_data_field_news_summary ON node.nid = field_data_field_news_summary.entity_id AND (field_data_field_news_summary.entity_type = 'node' AND field_data_field_news_summary.deleted = '0')
	LEFT JOIN field_data_field_image ON node.nid = field_data_field_image.entity_id AND (field_data_field_image.entity_type = 'node' AND field_data_field_image.deleted = '0')
	LEFT JOIN file_managed ON field_data_field_image.field_image_fid = file_managed.fid
	WHERE (( (node.status = '1') AND (node.type IN  ('news')) AND (DATE_FORMAT(field_data_field_date.field_date_value, '%Y-%m-%d') <= DATE_FORMAT(now(), '%Y-%m-%d')) ))
	ORDER BY date_field DESC
	LIMIT 1 OFFSET 0");
	$result = $results->fetchAll();  
	return $result;
}


function generate_news_latest (){
	global $base_url;
	$html = '';
	$results = get_news_latest();
	//$nodeq = nodequeue_load("newsletter_content");

	foreach ($results as $result){
		$html .= '<a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'"><img src="'. image_style_url("homepage_image", $result->image_uri_field) .'" alt="" border="0"/></a><strong style="font-size:22px; color:#be202e"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'">'. $result->title_field .'</a></strong><br/><em>'. date('j M Y', strtotime($result->date_field)) .'</em>'. $result->summary_field;
	}
	return $html;
}

function get_news_second_latest (){
	//get today news second latest
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, field_data_field_date.field_date_value AS date_field, field_data_field_news_summary.field_news_summary_value AS summary_field, file_managed.uri AS image_uri_field
	FROM node
	LEFT JOIN field_data_field_date ON node.nid = field_data_field_date.entity_id AND (field_data_field_date.entity_type = 'node' AND field_data_field_date.deleted = '0')
	LEFT JOIN field_data_field_news_summary ON node.nid = field_data_field_news_summary.entity_id AND (field_data_field_news_summary.entity_type = 'node' AND field_data_field_news_summary.deleted = '0')
	LEFT JOIN field_data_field_image ON node.nid = field_data_field_image.entity_id AND (field_data_field_image.entity_type = 'node' AND field_data_field_image.deleted = '0')
	LEFT JOIN file_managed ON field_data_field_image.field_image_fid = file_managed.fid
	WHERE (( (node.status = '1') AND (node.type IN  ('news')) AND (DATE_FORMAT(field_data_field_date.field_date_value, '%Y-%m-%d') <= DATE_FORMAT(now(), '%Y-%m-%d')) ))
	ORDER BY date_field DESC
	LIMIT 3");
	$result = $results->fetchAll();  
	return $result;
}

function generate_news_second_latest (){
	global $base_url;
	$html = '';
    
    //mahesh - new newsletter
    $resultsn = db_query("SELECT nid from nodequeue_nodes WHERE qid=1 ORDER BY position ASC");
    foreach ($resultsn as $results){
      $result = node_load($results->nid);
     
    $img = $result->field_image['und'][0]['uri'];
    if($result->type == "news"){
    $newsummery = $result->field_news_summary['und'][0]['value'];
    } else {
    	$newsummery = $result->field_article_summary['und'][0]['value'];
    }
	$html .= '<tr>
	<td width="148" height="119" style="vertical-align:top"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'"><img src="'. image_style_url("news_small", $img) .'" alt="" border="0"/></a></td>
	<td width="582" style="vertical-align:top"><span style="font-size:16px; color:#be202e;text-transform: capitalize;"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'">'. $result->title.'</a></strong></span><br/><p>'.$newsummery.'</p></td>
	</tr>';
	}
	return $html;
}

function generate_news_second_latest_2 (){
	global $base_url;
	$html = '';
    
    //mahesh - new newsletter
    $resultsn = db_query("SELECT nid from nodequeue_nodes WHERE qid=2 ORDER BY position ASC");
    foreach ($resultsn as $results){
      $result = node_load($results->nid);
     
    $img = $result->field_image['und'][0]['uri'];
    if($result->type == "news"){
    $newsummery = $result->field_news_summary['und'][0]['value'];
    } else {
    	$newsummery = $result->field_article_summary['und'][0]['value'];
    	
    }
	$html .= '<tr>
	<td width="148" height="140" style="vertical-align:top"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'"><img src="'. image_style_url("news_small", $img) .'" alt="" border="0"/></a></td>
	<td width="582" style="vertical-align:top"><span style="font-size:16px; color:#be202e;text-transform: capitalize;"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'">'. $result->title.'</a></strong></span><br/><p>'.$newsummery.'</p></td>
	</tr>';
	}
	return $html;
}

function generate_news_second_latest_11 (){
	global $base_url;
	$html = '';
    
    //mahesh - new newsletter
    $resultsn = db_query("SELECT nid from nodequeue_nodes WHERE qid=11 ORDER BY position ASC");
    foreach ($resultsn as $results){
      $result = node_load($results->nid);
     
    $img = $result->field_image['und'][0]['uri'];
    if($result->type == "news"){
    $newsummery = $result->field_news_summary['und'][0]['value'];
    } else {
    	$newsummery = $result->field_article_summary['und'][0]['value'];
    	
    }
	$html .= '<tr>
	<td width="148" height="140" style="vertical-align:top"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'"><img src="'. image_style_url("news_small", $img) .'" alt="" border="0"/></a></td>
	<td width="582" style="vertical-align:top"><span style="font-size:16px; color:#be202e;text-transform: capitalize;"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'">'. $result->title.'</a></strong></span><br/><p>'.$newsummery.'</p></td>
	</tr>';
	}
	return $html;
}



function get_tv (){
	//get hrm tv
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, node.created AS created_field, field_data_field_video_code.field_video_code_value AS video_field, file_managed.uri AS image_uri_field
	FROM node
	LEFT JOIN field_data_field_video_code ON node.nid = field_data_field_video_code.entity_id AND (field_data_field_video_code.entity_type = 'node' AND field_data_field_video_code.deleted = '0')
	LEFT JOIN field_data_field_image ON node.nid = field_data_field_image.entity_id AND (field_data_field_image.entity_type = 'node' AND field_data_field_image.deleted = '0')
	LEFT JOIN file_managed ON field_data_field_image.field_image_fid = file_managed.fid
	WHERE (( (node.status = '1') AND (node.type IN  ('hrm_tv')) ))
	ORDER BY created_field DESC
	LIMIT 1 OFFSET 0");
	$result = $results->fetchAll();  
	return $result;
}

function generate_tv (){
	global $base_url;
	$html = '';
	$results = get_tv();
	foreach ($results as $result){
	$html .= '<tr>
	<td width="256"><a style="float:left;padding-right: 10px;" href="http://www.hrmasia.com/content/focus-employee-experience-not-engagement"><img src="http://hrmasia.com/sites/default/files/ben-whitter-v.jpg" border=0 /></a>
	<span style="font-size:16px; color:#be202e;"><strong><a href="http://www.hrmasia.com/content/focus-employee-experience-not-engagement">Focus on employee experience, not engagement </a></strong></span><p style="color: rgb(68, 68, 68); font-size: 13px; font-family: Verdana,Geneva,sans-serif;">Ben Whitter, Founder of the World Employee Experience Institute, said employee engagement initiatives “hasn’t moved the needle”. </p></td>
	<td width="23" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
	</tr>';
	}
	return $html;
}
//mahesh
function get_mybrand_second_latest (){
	//get today news second latest
	$results = db_query("SELECT node.nid AS nid, node.title AS node_title, node.created AS node_created, 'node' AS field_data_field_image_node_entity_type, 'node' AS field_data_field_news_summary_node_entity_type, 'node' AS field_data_body_node_entity_type
FROM 
{node} node
INNER JOIN {field_data_field_forum_type} field_data_field_forum_type ON node.nid = field_data_field_forum_type.entity_id AND field_data_field_forum_type.entity_type = 'node'
WHERE (( (node.status = '1') AND (node.type IN  ('news')) AND (node.sticky = '0') AND (field_data_field_forum_type.field_forum_type_tid = '922') ))
ORDER BY node_created DESC
LIMIT 2 OFFSET 0");
	$result = $results->fetchAll();  
	return $result;
}

function generate_mybrand_second_latest (){
	global $base_url;
	$html = '';
	$results = get_mybrand_second_latest();

	foreach ($results as $result){
        $nodeb = node_load($result->nid);
        //print_r($nodeb);
//die();

	$html .= '<tr style="border-bottom: 2px solid rgb(221, 221, 221);">
	<td width="148" height="119" style="vertical-align:top; padding: 28px 0 20px 20px;"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$nodeb->id_field) .'"><img src="'. image_style_url("news_small", $nodeb->field_image["und"][0]["uri"]) .'" alt="" style="border: 1px solid rgb(238, 238, 238);"/></a></td>
	<td width="582" style="vertical-align:top; padding: 30px 60px 30px 20px;color: #777;"><span style="font-size:16px; color:#774fa0;text-transform: capitalize;letter-spacing: 0.5px;"><strong><a style="color: #774fa0;" href="'.$base_url.'/'. drupal_get_path_alias('node/'.$nodeb->id_field) .'">'. $nodeb->title .'</a></strong></span><br/>'. $nodeb->field_news_summary["und"][0]["value"].' <br/><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$nodeb->nid) .'" style="color: rgb(119, 79, 160);">Read More</a></td>
	</tr>';
	}
	return $html;
}

function get_partners (){
	//get today partners
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, file_managed.uri AS image_uri_field, field_data_field_link.field_link_value
	FROM node
	LEFT JOIN field_data_field_image ON node.nid = field_data_field_image.entity_id AND (field_data_field_image.entity_type = 'node' AND field_data_field_image.deleted = '0')
	LEFT JOIN file_managed ON field_data_field_image.field_image_fid = file_managed.fid
	LEFT JOIN field_data_field_link ON node.nid = field_data_field_link.entity_id AND (field_data_field_link.entity_type = 'node' AND field_data_field_link.deleted = '0')
	WHERE ((node.status = '1') AND (node.type IN  ('partners')))
	ORDER BY node.created ASC
	");
	$result = $results->fetchAll();  
	return $result;	
}

function generate_partners (){
	$html = '';
	/* No need to dynamic bcoz user requirement.
	$results = get_partners();
	foreach ($results as $result){
	$html .= '<div style="float:left;width:auto;"><a href="'. $result->field_link_value .'"><img src="'. image_style_url("partners_small", $result->image_uri_field) .'" border="0"/></a></div>';
	}*/
	$html .='<table align="center" border="0" cellpadding="3" cellspacing="3" width="90%" style="margin-top:10px"><tbody><tr><th scope="row" align="center" valign="middle" width="30%"><!--a href="http://www.achievegroup.asia" target="_blank"><img src="http://hrmasianews.com/banners/achieve.jpg"                                                                alt="" border="0" /></a--><a href="https://www.britishcouncil.org.sg/en/corporate-training" target="_blank"><img src="http://hrmasianews.com/banners/BC2.jpg" border="0" height="67" width="133"></a>&nbsp;&nbsp;&nbsp; <br></th><td align="center" valign="middle" width="34%"><a href="http://www.alignsma.com/" target="_blank"><img src="http://hrmasianews.com/banners/align.jpg" border="0" height="107" width="114"></a></td><td align="center" valign="middle" width="32%"><a href="http://www.carrotsconsulting.com" target="_blank"><img src="http://hrmasianews.com/banners/carrots.jpg" border="0"></a></td></tr><tr><th scope="row" align="center" height="94" valign="middle"><a href="http://apac.ccl.org" target="_blank"><img src="http://hrmasianews.com/banners/ccllogo.jpg" border="0" height="80" width="92"></a></th><td align="center" valign="middle"><!--a href=" http://www.theclubcapellasingapore.com" target="_blank"--><!--img src="http://hrmasianews.com/banners/web%20banners/capella_logo(1).jpg" border="0" /--><!--/a--><a href="http://www.stayfareast.com/"><img src="http://hrmasianews.com/banners/fareasthospitality.jpg" border="0"></a></td><td align="center" valign="middle"><a href="http://www.frazerjones.com" target="_blank"><img src="http://hrmasianews.com/banners/frazers.jpg" border="0" height="46" width="140"></a></td></tr><tr><th scope="row" align="center" height="81" valign="middle"><!--img src="http://hrmasianews.com/banners/ctc.jpg" border="0" /></a--><a href="http://www.hays.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/hays_logo_new.jpg" alt="" border="0"></a></th><td align="center" valign="middle"><a href="http://www.iqdynamics.com/" target="_blank"><img src="http://hrmasianews.com/banners/iqdynamics.jpg" alt="" border="0"></a></td><td align="center" valign="middle"><!--a href="http://www.fareasthospitality.com/"></a><a href="http://www.globalhrcloud.com/"><img src="http://hrmasianews.com/banners/HRM/globalhr2.jpg" border="0" /></a--><a href="http://www.informaticseducation.com" target="_blank"><img src="http://hrmasianews.com/banners/informatics_2012.jpg" alt="" border="0"></a></td></tr><tr><th scope="row" align="center" height="72" valign="middle"><!--a href="http://www.gmprecruit.com/" target="_blank"><img src="http://hrmasianews.com/banners/web banners/GMP_new.jpg" alt=""                                                                border="0" /></a--><a href="http://www.kellyservices.com.sg/web/sg/services/en/pages/" target="_blank"><img src="http://hrmasianews.com/banners/kelly_services_logo_2009.jpg" alt="" border="0"></a></th><td align="center" valign="middle"><a href="http://www.kerryconsulting.com" target="_blank"><img src="http://hrmasianews.com/banners/kerry%20logo.jpg" alt="" border="0"></a></td><td align="center" valign="middle"><!--a href="http://www.hiringboss.com/" target="_blank"><img src="http://hrmasianews.com/banners/web banners/hiring.jpg" alt=""                                                                border="0" /></a--><a href="http://www.michaelpage.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/MP-SG_Jobestreet_Generic-logo.jpg" border="0"></a></td></tr><tr><th scope="row" align="center" height="85" valign="middle"><a href="http://motorway.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/motorwaysg.jpg" border="0"></a></th><td align="center" valign="middle"><a href="http://www.payrollserve.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/payroll.jpg" border="0" height="48" width="140"></a></td><td align="center" valign="middle"><a href="http://www.robertwalters.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/rw08.jpg" alt="" border="0"></a></td></tr><tr><th scope="row" align="center" height="81" valign="middle"><a href="http://www.sg1hro.com/"><img src="http://hrmasianews.com/banners/sg1.jpg" border="0" height="67" width="133"></a></th><td align="center" valign="middle"><a href="http://www.swisslife.sg" target="_blank"><img src="http://hrmasianews.com/banners/swisslife.jpg" border="0"></a></td><td align="center" valign="middle"><a href="http://www.talent2.com" target="_blank"><img src="http://hrmasianews.com/banners/talent2.jpg" border="0" height="57" width="108"></a></td></tr><tr><th scope="row" align="center" height="81" valign="middle"><a href="http://www.timesoftsg.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/TIMES.jpg" alt="" border="0"></a></th></tr></tbody></table>';
	return $html;
}
