 <?php
function edm_course_generator(){
	$html = ''; $edm = '';
	$edm .= '
	<table border="0" width="100%" cellpadding="0" cellspacing="0">
  <tbody>
    <tr>
      <td align="center"><font style="font-family:Verdana, Geneva, sans-serif; font-size:9px;" color="#000000"><br>
      </font></td>
    </tr>
    <tr>
    <td align="center"><table style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000;" border="0" width="649" cellpadding="0" cellspacing="0">
        <tbody><tr>
          <td width="649" height="13" bgcolor="#EFEFEF"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
        </tr>
        <tr>
          <td><table border="0" width="650" cellpadding="0" cellspacing="0">
              <tbody><tr>
                <td width="513"><img src="http://www.hrmasianews.com/newsletter/images/training.jpg" style="display:block" border="0"></td>
                <td style="vertical-align:top" width="137"><table style="font-size:13px; font-family:Arial, Helvetica, sans-serif; color:#000000" border="0" width="137" cellpadding="0" cellspacing="0">
                    <tbody><tr>
                      <td width="14"><img src="http://www.hrmasianews.com/newsletter/images/25082014_03.jpg" style="display:block" border="0"></td>
                      <td width="36"><a href="https://www.facebook.com/HRMAsiaMag" target="_blank"><img src="http://www.hrmasianews.com/newsletter/images/25082014_04.jpg" style="display:block" border="0"></a></td>
                      <td width="39"><a href="https://twitter.com/HRM_Asia" target="_blank"><img src="http://www.hrmasianews.com/newsletter/images/25082014_05.jpg" style="display:block" border="0"></a></td>
                      <td width="33"><a href="https://www.linkedin.com/company/1807878" target="_blank"><img src="http://www.hrmasianews.com/newsletter/images/25082014_06.jpg" style="display:block" border="0"></a></td>
                      <td width="15"><img src="http://www.hrmasianews.com/newsletter/images/25082014_07.jpg" style="display:block" border="0"></td>
                    </tr>
                    <tr>
                      <td colspan="5" align="center" bgcolor="#EFEFEF" height="24"><font style="font-family:Verdana; font-size:12px;"></font>
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
            <tbody><tr>
              <td bgcolor="#EFEFEF" height="20" width="14"><img src="http://www.hrmasianews.com/newsletter/images/spacer.gif" alt="" border="0" width="10"></td>
              <td width="621"><table width="100%" border="0" cellspacing="0" cellpadding="0" style="background-color:##EFEFEF;font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
							  <tr>
								<td bgcolor="#EFEFEF"></td>
								<td bgcolor="#FFFFFF""><table width="100%" border="0" cellspacing="0" cellpadding="0" style="font-family:Arial, Helvetica, sans-serif; font-size:12px; color:#000000">
								<tr>
								<td cols="3"><h1 style="padding:10px 10px 0px 10px;">Course</h1></td>
								</tr>
								'. generate_course_list() .'<tr><td style="padding-left:10px;"><span style="font-size:11px"><a href="wwwhrmasia.com/courses" style="color:#be202e; text-decoration:none">More courses</a></span></td></tr></table>
								  </td>
								<td bgcolor="#EFEFEF" width="23"></td>
							  </tr>
							</table></td>
              <td bgcolor="#EFEFEF" width="15"></td>
              </tr>
              </tbody></table></td>
        </tr>
        <tr>
          <td><table border="0" width="650" cellpadding="0" cellspacing="0">
            <tbody>
              <tr>
                <td bgcolor="#EFEFEF" height="20" width="21"></td>
                <td align="center"><p><font size="2" face="Verdana, Arial, Helvetica, sans-serif"><br>
                  For sponsorship enquiries, please contact:<br>
                    <strong>Mohan Raj Valliappan, </strong>Accounts Manager, Congress Sponsorship<br>
                    <a href="mailto:mohan@hrmasia.com.sg">mohan@hrmasia.com.sg</a> | 
                    Tel: (65) 6423 4631 | 
                    Fax: (65) 6423 4632</font></p>
                  <p><font size="2" face="Verdana, Arial, Helvetica, sans-serif"><br>
                    To inquire more more about Corporate Training Courses, please contact:<br>
  <strong>Edwin Lim</strong> at </font> <font size="2" face="Verdana, Arial, Helvetica, sans-serif">+ 65 6423 4631   or <a href="mailto:edwin@hrmasia.com.sg"> edwin@hrmasia.com.sg</a></font><br>
  <br>
<br>
                  </p></td>
                <td bgcolor="#EFEFEF" width="6%"></td>
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
                  <td bgcolor="#FFFFFF"><table width="100%" height="84" border="0" cellpadding="5" cellspacing="0">
                    <tr>
                      <td width="209" height="42" align="center"><a href="http://www.kaplan.com.sg" target="_blank"><img src="http://www.hrmawards.com/nl/i/kaplan_2012.jpg" alt="" width="150" height="90" border="0"></a></td>
                      <td width="203" align="center"><a href="https://www.britishcouncil.org.sg/en/corporate-training" target="_blank"><img src="http://hrmasianews.com/banners/BC2.jpg" alt="" width="133" height="67" border="0"></a><a href="http://www.britishcouncil.org.sg/corporatetraining" target="_blank"></a></td>
                      <td width="160" align="center"><a href="http://www.odctraining.com.sg" target="_blank"><img src="http://www.hrmasia.com/sites/default/files/62.jpg" border="0" /></a></td>
                    </tr>
                    <tr>
                      <td height="42" align="center"><a href="http://www.performance.sg" target="_blank"><img src="http://www.hrmasia.com/sites/default/files/50.jpg" border="0"></a></td>
                      <td align="center"></td>
                      <td align="center"></td>
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
	.par_logo th{
		border-bottom: none !important;
	}
	</style>
	<p>Copy the EDM code below:</p>
	<textarea cols="85" rows="5">'. $edm .'</textarea>'. $edm .'
	';
		
	return $html;
}
function get_latest_course()
{
	//get today courses latest
	$results = db_query("SELECT node.title AS node_title, node.nid AS nid, 'node' AS field_data_field_trainining_company_node_entity_type, 'node' AS field_data_field_course_dates_node_entity_type, 'node' AS field_data_field_course_summary_node_entity_type,node_field_data_field_company_ref.title AS company_field,field_data_field_course_summary.field_course_summary_value AS jsummary,field_data_field_course_dates.field_course_dates_value AS post_date,field_data_field_course_premium_type.field_course_premium_type_tid as tid,file_managed_field_data_field_image.uri AS feature_image FROM 
{node} node
LEFT JOIN {field_data_field_trainining_company} field_data_field_trainining_company ON node.nid = field_data_field_trainining_company.entity_id AND (field_data_field_trainining_company.entity_type = 'node' AND field_data_field_trainining_company.deleted = '0')
LEFT JOIN {node} node_field_data_field_company_ref ON field_data_field_trainining_company.field_trainining_company_nid = node_field_data_field_company_ref.nid
LEFT JOIN {field_data_field_image} node_field_data_field_company_ref__field_data_field_image ON node_field_data_field_company_ref.nid = node_field_data_field_company_ref__field_data_field_image.entity_id AND (node_field_data_field_company_ref__field_data_field_image.entity_type = 'node' AND node_field_data_field_company_ref__field_data_field_image.deleted = '0')
LEFT JOIN {file_managed} file_managed_field_data_field_image ON node_field_data_field_company_ref__field_data_field_image.field_image_fid = file_managed_field_data_field_image.fid
LEFT JOIN {field_data_field_course_summary} field_data_field_course_summary ON node.nid = field_data_field_course_summary.entity_id AND (field_data_field_course_summary.entity_type = 'node' AND field_data_field_course_summary.deleted = '0')
LEFT JOIN {field_data_field_course_dates} field_data_field_course_dates ON node.nid = field_data_field_course_dates.entity_id AND (field_data_field_course_dates.entity_type = 'node' AND field_data_field_course_dates.deleted = '0')
INNER JOIN {field_data_field_course_premium_type} field_data_field_course_premium_type ON node.nid = field_data_field_course_premium_type.entity_id AND (field_data_field_course_premium_type.entity_type = 'node' AND field_data_field_course_premium_type.deleted = '0')
WHERE (( (node.status = '1') AND (node.type IN  ('training_courses')) AND (DATE_FORMAT(ADDTIME(field_data_field_course_dates.field_course_dates_value, SEC_TO_TIME(19800)), '%Y-%m-%d') >= '".date('Y-m-d', strtotime('now'))."' AND DATE_FORMAT(ADDTIME(field_data_field_course_dates.field_course_dates_value, SEC_TO_TIME(19800)), '%Y-%m-%d') <= '".date('Y-m-d', strtotime('now +1 month'))."') ))");
	$result = $results->fetchAll();  
	return $result;
}
function generate_course_list()
{
	global $base_url;
	$html = '';
	$results = get_latest_course();
	foreach ($results as $result){
	if(!empty($result->feature_image) && $result->tid == 271)
	{
	$image = '<img align="right" src="'.image_style_url("thumbnail",$result->feature_image).'">';
	}
	$html .= '<tr style="background-color:'.($result->tid == 271 ? "#f7eee7" : " ").'">
	<td style="border-bottom:1px solid #EFECEC;padding-bottom: 10px;padding-top: 4px;padding-left:10px;"><span style="font-size:14px; color:#be202e"><strong><a href="'.$base_url.'/'. drupal_get_path_alias('node/'.$result->nid).'">'. $result->node_title .'</a></strong></span>'.$image.'
	<br><div style="margin-bottom:3px;">'.date('j M Y', strtotime($result->post_date)).' | '. $result->company_field .'</div>
	<div style="margin-bottom:3px;">'.$result->jsummary.'</div></td></tr>';
	$image = '';
	}
	return $html;
}
