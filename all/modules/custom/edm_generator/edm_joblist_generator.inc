 <?php
function edm_joblist_generator(){
	global $base_url;
	$html = ''; $edm = '';
	$edm .= '
	<table border="0" width="100%" cellpadding="0" cellspacing="0">
  <tbody>
   <tr>
      <td align="center"><span style="font-family:Arial, Helvetica, sans-serif; font-size:11px; color:#000000"><br>
      </span></td>
    </tr>
    <tr>
    <td align="center"><table style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000;" border="0" width="649" cellpadding="0" cellspacing="0">
        <tbody><tr>
          <td width="649" height="13" bgcolor="#EFEFEF"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
        </tr>
        <tr>
          <td><table border="0" width="650" cellpadding="0" cellspacing="0">
              <tbody><tr>
                <td width="513"><img src="http://www.hrmasianews.com/newsletter/images/25082014_jobs.jpg" style="display:block" border="0"></td>
                <td style="vertical-align:top" width="137"><table style="font-size:13px; font-family:Arial, Helvetica, sans-serif; color:#000000" border="0" width="137" cellpadding="0" cellspacing="0">
                    <tbody><tr>
                      <td width="14"><img src="http://www.hrmasianews.com/newsletter/images/25082014_03.jpg" style="display:block" border="0"></td>
                      <td width="36"><a href="https://www.facebook.com/HRMAsiaMag" target="_blank"><img src="http://www.hrmasianews.com/newsletter/images/25082014_04.jpg" style="display:block" border="0"></a></td>
                      <td width="39"><a href="https://twitter.com/HRM_Asia" target="_blank"><img src="http://www.hrmasianews.com/newsletter/images/25082014_05.jpg" style="display:block" border="0"></a></td>
                      <td width="33"><a href="https://www.linkedin.com/company/1807878" target="_blank"><img src="http://www.hrmasianews.com/newsletter/images/25082014_06.jpg" style="display:block" border="0"></a></td>
                      <td width="15"><img src="http://www.hrmasianews.com/newsletter/images/25082014_07.jpg" style="display:block" border="0"></td>
                    </tr>
                    <tr>
                      <td colspan="5" align="center" bgcolor="#EFEFEF" height="24"><font style="font-family:Verdana; font-size:12px;"><strong><strong></strong></font>
</td>
                    </tr>
                  </tbody></table></td>
              </tr>
            </tbody></table></td>
        </tr>
        <tr>
          <td bgcolor="#EFEFEF"></td>
        </tr>

        <tr>
          <td><table border="0" width="650" cellpadding="0" cellspacing="0">
            <tbody>	
			<tr>
              <td bgcolor="#EFEFEF" height="18" width="14"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              <td width="621"><table width="100%" border="0" cellspacing="0" cellpadding="0" style="background-color:##EFEFEF;font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
							  <tr>
								<td bgcolor="#EFEFEF"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
								<td bgcolor="#FFFFFF""><table width="100%" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
								<tr>
								  <td><img src="'.$base_url.'/sites/all/themes/hrmasia/images/jobtitle.jpg" alt="" border="0"/></td>
								</tr>									
								'. job_latest_list() .'<tr><td style="padding-left:10px;"><span style="font-size:11px"><a href="'.$base_url.'/jobs" style="color:#be202e; text-decoration:none">More jobs</a></span></td></tr></table>
								  </td>
								<td bgcolor="#EFEFEF" width="23"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"/></td>
							  </tr>
							</table>
							</td>
              <td bgcolor="#EFEFEF" width="15"></td>
              </tr>
              </tbody></table></td>
        </tr>
		<tr bgcolor="#EFEFEF">
			<td height="10px"></td>
		</tr>
        <tr>
          <td><table border="0" width="100%" cellpadding="0" cellspacing="0">
            <tbody>
              <tr>
                <td bgcolor="#EFEFEF" height="20" width="25"><img src="http://send.global2mail.com/emails/HRM/images/spacer.gif" alt="" width="10" border="0"></td>
                <td align="center"><font size="2" face="Verdana, Arial, Helvetica, sans-serif"><strong><br>
                  For placing of HR Job Listings, please contact: <br>
Jolene Ong at + 65 6423 4631  or <a href="mailto:jolene@hrmasia.com.sg">jolene@hrmasia.com.sg </a></strong></font><br>
<br>
<br></td>
                <td bgcolor="#EFEFEF" width="0"></td>
              </tr>
              <tr>
              <td bgcolor="#EFEFEF" height="20" width="14"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              <td bgcolor="#EFEFEF" width="621"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              <td bgcolor="#EFEFEF" width="15"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              </tr>
              </tbody></table></td>
        </tr>
         <tr>
          <td><table border="0" width="650" cellpadding="0" cellspacing="0">
              <tbody><tr>
                <td width="14" height="20" rowspan="2" bgcolor="#EFEFEF"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
                <td bgcolor="#EFEFEF" width="621"><img src="http://www.hrmasianews.com/newsletter/images/partners.jpg" alt="" border="0"></td>
                <td width="15" rowspan="2" bgcolor="#EFEFEF"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              </tr>
                <tr>
                  <td bgcolor="#FFFFFF"><table width="98%" border="0" align="center" cellpadding="5" cellspacing="5">
                    <tr>
                      <th width="35%" align="center" valign="middle" scope="row"><a href="http://www.capitagrp.com " target="_blank"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/capita_logo.jpg" border="0" /></a></th>
                      <td width="32%" align="center" valign="middle"><a href="http://dnassociates.com.sg/ " target="_blank"><img src="http://www.hrmcongress.com/newsletter/ezine/dn.jpg" width="120" height="33" border="0"></a></td>
                      <td width="33%" align="center" valign="middle"><a href="http://www.elliottscotthr.com" target="_blank"><img src="http://hrmawards.com/nl/i/elliot.jpg" width="140" height="70" border="0"></a></td>
                    </tr>
                    <tr>
                      <th align="center" valign="middle" scope="row"><a href="http://www.frazerjones.com" target="_blank"><img src="http://www.hrmawards.com/nl/i/frazers.jpg" width="140" height="46" border="0"></a></th>
                      <td align="center" valign="middle"><a href="http://www.hays.com.sg/" target="_blank"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/hays.jpg" alt=""
                                                                border="0" /></a></td>
                      <td align="center" valign="middle"><a href="www.kellyservices.com.sg/SG/SGHome/" target="_blank"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/kelly.jpg"
                                                                alt="" border="0" /></a></td>
                    </tr>
                    <tr>
                      <th align="center" valign="middle" scope="row"><a href="http://www.kerryconsulting.com" target="_blank"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/kerry.jpg"
                                                                alt="" border="0" /></a></th>
                      <td align="center" valign="middle"><a href="http://www.michaelpage.com.sg/?mc_id=4202"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/michael.jpg" width="133" height="67" border="0" /></a></td>
                      <td align="center" valign="middle"><a href="http://www.profileasia.com/"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/profile.jpg" width="133" height="67" border="0" /></a></td>
                    </tr>
                    <tr>
                      <th align="center" valign="middle" scope="row"><a href="http://www.rgf-hragent.asia/" target="_blank"><img src="http://hrmawards.com/nl/i/rgf_2012.jpg"border="0"></a></th>
                      <td align="center" valign="middle"><!--a href="http://www.gmprecruit.com/" target="_blank"-->
                        <!--img src="http://www.hrmasia.com//files/Image/web%20banners/GMP_new.jpg" alt=""
                                                                border="0" /-->
                        <!--/a-->
                        <a href="http://www.randstad.com.sg " target="_blank"><img src="http://hrmawards.com/nl/i/randstad.jpg"border="0"></a></td>
                      <td align="center" valign="middle"><a href="http://www.robertwalters.com.sg/" target="_blank"><img src="http://www.hrmasianews.com/newsletter/BusinessPartner/robert.jpg" alt=""
                                                                border="0" /></a></td>
                    </tr>
                    <tr>
                      <th align="center" valign="middle" scope="row"><a href="http://www.socius-consulting.com " target="_blank"><img src="http://www.hrmawards.com/nl/i/socius.jpg" border="0" /></a></th>
                      <td align="center" valign="middle"><a href="http://www.straitstalent.com/  " target="_blank"><img src="http://hrmawards.com/nl/i/straits_logo.jpg" border="0" /></a></td>
                      <td align="center" valign="middle"><a href="http://www.talent2.com " target="_blank"><img src="http://www.hrmawards.com/nl/i/talent2.jpg" width="140" height="58" border="0" /></a></td>
                    </tr>
                    <tr>
                      <th align="center" valign="middle" scope="row"><a href="http://www.talentinsight.com.sg " target="_blank"><img src="http://www.hrmawards.com/nl/i/talent_in.jpg" border="0" /></a></th>
                      <td align="center" valign="middle"><a href="http://www.volt.com " target="_blank"><img src="http://www.hrmawards.com/nl/i/volt2012.jpg" border="0" /></a></td>
                      <td align="center" valign="middle">&nbsp;</td>
                    </tr>
                  </table></td>
                </tr>
              </tbody>
          </table></td>
        </tr> <tr>
          <td><table border="0" width="650" cellpadding="0" cellspacing="0">
              <tbody><tr>
                <td bgcolor="#EFEFEF" height="20" width="14"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
                <td bgcolor="#EFEFEF" width="621"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
                <td bgcolor="#EFEFEF" width="15"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              </tr>
            </tbody></table></td>
        </tr>
         <tr>
          <td><table style="font-family:Arial, Helvetica, sans-serif; font-size:11px; color:#ffffff" border="0" width="650" cellpadding="0" cellspacing="0">
              <tbody><tr>
                <td bgcolor="#000000" height="20" width="14"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
                <td align="center" bgcolor="#000000" width="621"><br>Disclaimer:
 **** This electronic message transmission contains information from HRM
 Asia and is confidential and privileged. The information is intended to
 be for the use of the individual or entity named above. If you are not 
the intended recipient, be aware that any disclosure, copying, 
distribution, or use of the contents of this information is prohibited. 
Any offer of goods or services will be subject to the addition of GST. 
If you have received this electronic transmission in error, please 
notify us by telephone immediately at +65 6423 4631 **** .<br><img src="http://www.hrmasianews.com/newsletter/images/25082014_52.jpg" alt="" border="0"><br>Copyright © 2014 HRM Asia Pte Ltd. Reproduction in whole or in part in any form 
or medium without express written permission of HRM Asia Pte Ltd is 
prohibited.<br>&nbsp;</td>
                <td bgcolor="#000000" width="15"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              </tr>
            </tbody></table></td>
        </tr>
      </tbody></table></td>
  </tr>
</tbody></table>
	';
	
	$html .= '
	<style>tbody { border: none; }
	</style>
	<p>Copy the EDM code below:</p>
	<textarea cols="85" rows="5">'. $edm .'</textarea>'. $edm .'
	';
		
	return $html;
}
function get_job_latest (){
	//get today jobs latest
	$results = db_query("SELECT node.title AS node_title, node.nid AS nid, node.created AS node_created, 'node' AS field_data_field_date_node_entity_type, 'node' AS field_data_field_company_ref_node_entity_type, 'node' AS field_data_field_job_summary_node_entity_type, 'node' AS field_data_field_posted_date_node_entity_type,
	field_data_field_posted_date.field_posted_date_value AS post_date,node_field_data_field_company_ref.title AS company_field,field_data_field_job_summary.field_job_summary_value as jsummary,field_data_field_jobs_premium_type.field_jobs_premium_type_tid as tid,file_managed_field_data_field_image.uri AS feature_image
FROM 
{node} node
LEFT JOIN {users} users_node ON node.uid = users_node.uid
LEFT JOIN {field_data_field_company_ref} field_data_field_company_ref ON node.nid = field_data_field_company_ref.entity_id AND (field_data_field_company_ref.entity_type = 'node' AND field_data_field_company_ref.deleted = '0')
LEFT JOIN {node} node_field_data_field_company_ref ON field_data_field_company_ref.field_company_ref_nid = node_field_data_field_company_ref.nid
LEFT JOIN {field_data_field_image} node_field_data_field_company_ref__field_data_field_image ON node_field_data_field_company_ref.nid = node_field_data_field_company_ref__field_data_field_image.entity_id AND (node_field_data_field_company_ref__field_data_field_image.entity_type = 'node' AND node_field_data_field_company_ref__field_data_field_image.deleted = '0')
LEFT JOIN {file_managed} file_managed_field_data_field_image ON node_field_data_field_company_ref__field_data_field_image.field_image_fid = file_managed_field_data_field_image.fid
LEFT JOIN {field_data_field_job_summary} field_data_field_job_summary ON node.nid = field_data_field_job_summary.entity_id AND (field_data_field_job_summary.entity_type = 'node' AND field_data_field_job_summary.deleted = '0')
LEFT JOIN {field_data_field_posted_date} field_data_field_posted_date ON node.nid = field_data_field_posted_date.entity_id AND (field_data_field_posted_date.entity_type = 'node' AND field_data_field_posted_date.deleted = '0')
INNER JOIN {field_data_field_jobs_premium_type} field_data_field_jobs_premium_type ON node.nid = field_data_field_jobs_premium_type.entity_id AND (field_data_field_jobs_premium_type.entity_type = 'node' AND field_data_field_jobs_premium_type.deleted = '0')
WHERE (( (node.status = '1') AND (node.type IN  ('jobs')) AND (DATE_FORMAT(ADDTIME(field_data_field_posted_date.field_posted_date_value, SEC_TO_TIME(19800)), '%Y-%m-%d') >= '".date('Y-m-d', strtotime('now -14 day'))."' AND DATE_FORMAT(ADDTIME(field_data_field_posted_date.field_posted_date_value, SEC_TO_TIME(19800)), '%Y-%m-%d') <= '".date('Y-m-d', strtotime('now'))."') ))
ORDER BY node_created DESC");
	$result = $results->fetchAll();  
	return $result;
}
function job_latest_list()
{
	global $base_url;
	$html = '';
	$results = get_job_latest();
	foreach ($results as $result){
	if(!empty($result->feature_image) && $result->tid == 321)
	{
	$image = '<img align="right" src="'.image_style_url("thumbnail",$result->feature_image).'">';
	}
	$html .= '<tr style="background-color:'.($result->tid == 321 ? "#f7eee7" : " ").'">
	<td style="border-bottom:1px solid #EFECEC;padding-bottom: 10px;padding-top: 4px;padding-left:10px;"><span style="font-size:14px; color:#be202e"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid) .'">'. $result->node_title .'</a></strong></span>'.$image.'
	<br />'.date('j M Y', strtotime($result->post_date)).' | '. $result->company_field .'<br>
	'.$result->jsummary.'</td></tr>';
	$image = '';
	}
	return $html;
}

