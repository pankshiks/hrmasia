 <?php
function edm_generator(){
	$html = ''; $edm = '';
	$edm .= '
	<table width="100%" border="0" cellspacing="0" cellpadding="0">
	  <tr>
		<td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000;">
			<tr>
			  <td height="13" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
			</tr>
			<tr>
			  <td><table width="650" border="0" cellspacing="0" cellpadding="0" >
				  <tr>
					<td width="513"><img src="http://send.global2mail.com/emails/HRM/images/25082014_02.jpg" border="0" style="display:block"></td>
					<td width="137" style="vertical-align:top"><table width="137" border="0" cellspacing="0" cellpadding="0" style="font-size:13px; font-family:Arial, Helvetica, sans-serif; color:#000000">
						<tr>
						  <td width="14"><img src="http://send.global2mail.com/emails/HRM/images/25082014_03.jpg" border="0" style="display:block"></td>
						  <td width="36"><a href="https://www.facebook.com/"><img src="http://send.global2mail.com/emails/HRM/images/25082014_04.jpg" border="0" style="display:block"></a></td>
						  <td width="39"><a href="https://linkedin.com/"><img src="http://send.global2mail.com/emails/HRM/images/25082014_05.jpg" border="0" style="display:block"></a></td>
						  <td width="33"><a href="http://hrmasia.com/rss.xml"><img src="http://send.global2mail.com/emails/HRM/images/25082014_06.jpg" border="0" style="display:block"></a></td>
						  <td width="15"><img src="http://send.global2mail.com/emails/HRM/images/25082014_07.jpg" border="0" style="display:block"></td>
						</tr>
						<tr>
						  <td height="24" colspan="5" align="center" bgcolor="#EFEFEF"><strong>MON, 25 AUG 2014</strong></td>
						</tr>
					  </table></td>
				  </tr>
				</table></td>
			</tr>
			<tr style="background:#efefef;">
			  <td style="text-align:center;"><img src="http://hrmasia.com/sites/default/files/field/image/orange.jpg" border="0" style="width:450px;"></td>
			</tr>
			<tr>
			  <td align="center"><img src="http://send.global2mail.com/emails/HRM/images/2508214_45.jpg" border="0" style="display:block"></td>
			</tr>
			<tr>
			  <td><table width="650" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
				  <tr>
					<td width="14" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" width="10" border="0"/></td>
					<td width="18" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="283">'. generate_news_latest() .'</td>
					<td width="20"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="300" style="vertical-align:top"><table width="300" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">'. generate_news_second_latest() .'</table></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="10" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
				  <tr>
					<td width="14" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="301" bgcolor="#FFFFFF" style="vertical-align:top"><table width="301" border="0" cellspacing="0" cellpadding="0">
						<tr>
						  <td><img src="http://send.global2mail.com/emails/HRM/images/25082014_48.jpg" alt="" border="0"/></td>
						</tr>
						<tr>
						  <td bgcolor="#FFFFFF" height="15"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
						</tr>
						<tr>
						  <td><table width="301" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif">'. generate_tv() .'</table></td>
						</tr>
					  </table></td>
					<td width="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="300"><img src="http://hrmasia.com/sites/default/files/field/image/learntech_0.jpg" width="300px" height="250px" alt="" border="0"></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
				  <tr>
					<td width="14" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="301" style="vertical-align:top"><table width="301" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
						<tr>
						  <td><img src="http://send.global2mail.com/emails/HRM/images/25082014_34.jpg" alt="" border="0"/></td>
						</tr>
						<tr>
						  <td><table width="301" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
							  <tr>
								<td width="22" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
								<td bgcolor="#FFFFFF" width="256"><table width="256" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">'. generate_jobs() .'</table>
								  <span style="font-size:11px"><a href="http://www.hrmasia.com/jobs" style="color:#be202e; text-decoration:none">More jobs</a></span></td>
								<td width="23"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
							  </tr>
							</table></td>
						</tr>
					  </table></td>
					<td width="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="300" style="vertical-align:top">
					<table width="300" border="0" cellspacing="0" cellpadding="0">
						<tr>
						  <td><img src="http://send.global2mail.com/emails/HRM/images/25082014_35.jpg" alt="" border="0"/></td>
						</tr>
						<tr>
						  <td><table width="256" align="center" border="0" cellspacing="0" cellpadding="0">'.generate_congress().'</table></td>
								<td width="22" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
							  </tr>
							</table></td>
						</tr>
					  </table></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" bgcolor="#FFFFFF" class="par_logo">'. generate_partners() .'</td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0">
				  <tr>
					<td width="14" height="20" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="15" bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
			<tr>
			  <td align="center"><table width="650" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:11px; color:#ffffff">
				  <tr>
					<td width="14" height="20" bgcolor="#000000"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
					<td width="621" align="center" bgcolor="#000000"><br />
					  Disclaimer: **** This electronic message transmission contains information from HRM Asia and is confidential and privileged. The information is intended to be for the use of the individual or entity named above. If you are not the intended recipient, be aware that any disclosure, copying, distribution, or use of the contents of this information is prohibited. Any offer of goods or services will be subject to the addition of GST. If you have received this electronic transmission in error, please notify us by telephone immediately at +65 6423 4631 **** .<br />
					  <img src="http://send.global2mail.com/emails/HRM/images/25082014_52.jpg" alt="" border="0"/><br />
					  Copyright © 2014 HRM Asia Pte Ltd. Reproduction in whole or in part in any form or medium without express written permission of HRM Asia Pte Ltd is prohibited.<br />
					  &nbsp;</td>
					<td width="15" bgcolor="#000000"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
				  </tr>
				</table></td>
			</tr>
		  </table></td>
	  </tr>
	</table>
	';
	
	$html .= '
	<style>tbody { border: none; }
	.par_logo th{
		border-bottom: none !important;
	}
	</style>
	<p>Copy the EDM code below:</p>
	<textarea cols="85" rows="5">'. $edm .'</textarea>'. $edm .'
	';
		
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

function generate_news_latest (){
	global $base_url;
	$html = '';
	$results = get_news_latest();
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
	LIMIT 2 OFFSET 1");
	$result = $results->fetchAll();  
	return $result;
}

function generate_news_second_latest (){
	global $base_url;
	$html = '';
	$results = get_news_second_latest();
	foreach ($results as $result){
	$html .= '<tr>
	<td width="148" height="119" style="vertical-align:top"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'"><img src="'. image_style_url("news_small", $result->image_uri_field) .'" alt="" border="0"/></a></td>
	<td width="145" style="vertical-align:top"><span style="font-size:14px; color:#be202e"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'">'. $result->title_field .'</a></strong></span><br/><em>'. date('j M Y', strtotime($result->date_field)) .'</em>'. $result->summary_field .'</td>
	<td width="7"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="7" border="0"></td>
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
	<td width="22" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
	<td width="256"><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'"><img src="'. file_create_url($result->image_uri_field) .'" border=0 /></a><br />
	<span style="font-size:14px; color:#be202e"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'">'. $result->title_field .'</a></strong></span></td>
	<td width="23" bgcolor="#FFFFFF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
	</tr>';
	}
	return $html;
}

function get_jobs (){
	//get jobs
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, node.created AS created_field, node2.title AS company_field,date.field_posted_date_value AS post_date
	FROM node
	LEFT JOIN field_data_field_company_ref ON node.nid = field_data_field_company_ref.entity_id AND (field_data_field_company_ref.entity_type = 'node' AND field_data_field_company_ref.deleted = '0')
	LEFT JOIN node AS node2 ON node2.nid = field_data_field_company_ref.field_company_ref_nid
	LEFT JOIN field_data_field_posted_date AS date ON date.entity_id = node.nid AND (date.entity_type = 'node' AND date.deleted = '0')
	WHERE (( (node.status = '1') AND (node.type IN  ('jobs')) ))
	ORDER BY created_field DESC
	LIMIT 5 OFFSET 0");
	$result = $results->fetchAll();  
	return $result;
}

function generate_jobs (){
	global $base_url;
	$html = '';
	$results = get_jobs();
	foreach ($results as $result){
	$html .= '<tr>
	<td style="border-bottom:1px solid #EFECEC;padding-bottom: 10px;padding-top: 4px;"><span style="font-size:14px; color:#be202e"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'">'. $result->title_field .'</a></strong></span>
	<br />'.date('j M Y', strtotime($result->post_date)).' | '. $result->company_field .'</td></tr>';
	}
	return $html;
}

function get_congress (){
	//get upcoming hrm congress
	$results = db_query("SELECT node.nid AS id_field, node.title AS title_field, datecongress.field_date_congress_value AS congressdate,datecongress.field_date_congress_value2 AS congressdate2 FROM node LEFT JOIN field_data_field_date_congress AS datecongress ON node.nid = datecongress.entity_id LEFT JOIN field_data_field_hrm_events_type AS eventtype ON node.nid = eventtype.entity_id AND eventtype.deleted = '0' WHERE (node.status = '1') AND (node.type IN  ('hrm_congress')) AND (eventtype.field_hrm_events_type_nid IN  ('526')) AND (DATE_FORMAT(datecongress.field_date_congress_value, '%Y-%m-%d') >= '2014-10-29') ORDER BY datecongress.field_date_congress_value ASC LIMIT 5 OFFSET 0");
	$result = $results->fetchAll();  
	return $result;	
}
function generate_congress()
{
	global $base_url;
	$html = '';
	$results = get_congress();
	foreach ($results as $result){
	$html .= '<tr>
	<td style="border-bottom:1px solid #EFECEC;padding-bottom: 10px;padding-top: 4px;"><span style="font-size:14px; color:#be202e"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->id_field) .'">'. $result->title_field .'</a></strong></span><br><span>'.date('j', strtotime($result->congressdate)).' & '.date('j M Y', strtotime($result->congressdate2)).'</span>
	<br /></td></tr>';
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
	$html .='<table align="center" border="0" cellpadding="3" cellspacing="3" width="90%" style="margin-top:10px"><tbody><tr><th scope="row" align="center" valign="middle" width="37%"><!--a href="http://www.achievegroup.asia" target="_blank"><img src="http://hrmasianews.com/banners/achieve.jpg"                                                                alt="" border="0" /></a--><a href="https://www.britishcouncil.org.sg/en/corporate-training" target="_blank"><img src="http://hrmasianews.com/banners/BC2.jpg" border="0" height="67" width="133"></a>&nbsp;&nbsp;&nbsp; <br></th><td align="center" valign="middle" width="31%"><a href="http://www.alignsma.com/" target="_blank"><img src="http://hrmasianews.com/banners/align.jpg" border="0" height="107" width="114"></a></td><td align="center" valign="middle" width="32%"><a href="http://www.carrotsconsulting.com" target="_blank"><img src="http://hrmasianews.com/banners/carrots.jpg" border="0"></a></td></tr><tr><th scope="row" align="center" height="94" valign="middle"><a href="http://apac.ccl.org" target="_blank"><img src="http://hrmasianews.com/banners/ccllogo.jpg" border="0" height="80" width="92"></a></th><td align="center" valign="middle"><!--a href=" http://www.theclubcapellasingapore.com" target="_blank"--><!--img src="http://hrmasianews.com/banners/web%20banners/capella_logo(1).jpg" border="0" /--><!--/a--><a href="http://www.stayfareast.com/"><img src="http://hrmasianews.com/banners/fareasthospitality.jpg" border="0"></a></td><td align="center" valign="middle"><a href="http://www.frazerjones.com" target="_blank"><img src="http://hrmasianews.com/banners/frazers.jpg" border="0" height="46" width="140"></a></td></tr><tr><th scope="row" align="center" height="81" valign="middle"><!--img src="http://hrmasianews.com/banners/ctc.jpg" border="0" /></a--><a href="http://www.hays.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/hays_logo_new.jpg" alt="" border="0"></a></th><td align="center" valign="middle"><a href="http://www.iqdynamics.com/" target="_blank"><img src="http://hrmasianews.com/banners/iqdynamics.jpg" alt="" border="0"></a></td><td align="center" valign="middle"><!--a href="http://www.fareasthospitality.com/"></a><a href="http://www.globalhrcloud.com/"><img src="http://hrmasianews.com/banners/HRM/globalhr2.jpg" border="0" /></a--><a href="http://www.informaticseducation.com" target="_blank"><img src="http://hrmasianews.com/banners/informatics_2012.jpg" alt="" border="0"></a></td></tr><tr><th scope="row" align="center" height="72" valign="middle"><!--a href="http://www.gmprecruit.com/" target="_blank"><img src="http://hrmasianews.com/banners/web banners/GMP_new.jpg" alt=""                                                                border="0" /></a--><a href="http://www.kellyservices.com.sg/web/sg/services/en/pages/" target="_blank"><img src="http://hrmasianews.com/banners/kelly_services_logo_2009.jpg" alt="" border="0"></a></th><td align="center" valign="middle"><a href="http://www.kerryconsulting.com" target="_blank"><img src="http://hrmasianews.com/banners/kerry%20logo.jpg" alt="" border="0"></a></td><td align="center" valign="middle"><!--a href="http://www.hiringboss.com/" target="_blank"><img src="http://hrmasianews.com/banners/web banners/hiring.jpg" alt=""                                                                border="0" /></a--><a href="http://www.michaelpage.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/MP-SG_Jobestreet_Generic-logo.jpg" border="0"></a></td></tr><tr><th scope="row" align="center" height="85" valign="middle"><a href="http://motorway.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/motorwaysg.jpg" border="0"></a></th><td align="center" valign="middle"><a href="http://www.payrollserve.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/payroll.jpg" border="0" height="48" width="140"></a></td><td align="center" valign="middle"><a href="http://www.robertwalters.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/rw08.jpg" alt="" border="0"></a></td></tr><tr><th scope="row" align="center" height="81" valign="middle"><a href="http://www.sg1hro.com/"><img src="http://hrmasianews.com/banners/sg1.jpg" border="0" height="67" width="133"></a></th><td align="center" valign="middle"><a href="http://www.swisslife.sg" target="_blank"><img src="http://hrmasianews.com/banners/swisslife.jpg" border="0"></a></td><td align="center" valign="middle"><a href="http://www.talent2.com" target="_blank"><img src="http://hrmasianews.com/banners/talent2.jpg" border="0" height="57" width="108"></a></td></tr><tr><th scope="row" align="center" height="81" valign="middle"><a href="http://www.timesoftsg.com.sg/" target="_blank"><img src="http://hrmasianews.com/banners/TIMES.jpg" alt="" border="0"></a></th></tr></tbody></table>';
	return $html;
}
