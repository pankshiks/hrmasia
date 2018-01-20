 <?php print "<?xmlns"; ?> version="1.0" encoding="UTF-8" <?php print "?>"; ?>
<!-- <rss version="2.0" xml:base="<?php print $link; ?>" xmlns:atom="http://www.w3.org/2005/Atom" <?php print $namespaces; ?>> -->
<?php print "<?xml-stylesheet"; ?> itle="XSL_formatting" type="text/xsl" href="/shared/bsp/xsl/rss/nolsol.xsl" <?php print "?>"; ?>
<rss xmlns:dc="http://purl.org/dc/elements/1.1/" xmlns:media="http://search.yahoo.com/mrss/" xmlns:atom="http://www.w3.org/2005/Atom" version="2.0">
  <channel>
    <!-- <title><![CDATA[<?php print "HRM Asia"; ?>]]></title>
    <link><?php print $link; ?></link>
    <description><![CDATA[<?php print $description; ?>]]></description>
    <language><?php print $langcode; ?></language>
    <?php print $channel_elements; ?>
    <?php //print $items; ?> -->
    <title>HRM Asia</title>
	<link><?php print $link; ?></link>
	<atom:link href="<?php print $link; ?>" rel="self" type="application/rss+xml"/>
	<description>Welcome to HRM Asia</description>
	<copyright>Copyright (C) 2014</copyright>
	<ttl>5</ttl>
    <!-- Start training_courses -->
    <?php
    	global $base_url;
    	$training_courses_id = db_select ( 'node', 'n' )
                  ->fields ( 'n', array ( 'nid', 'title' ) )
                  ->condition ( 'type', 'training_courses' )
                  ->orderBy('created', 'DESC')
                  ->range(0,50)
                  ->execute ()
                  ->fetchAllKeyed ();
        foreach ($training_courses_id as $id => $datas ) {
        	$data = node_load($id);
        	$path = $base_url . '/node/' . $data->nid;
    ?>
    		<item>
				<title><![CDATA[<?php print $data->title; ?>]]></title>
			    <link><?php print htmlentities($path); ?></link>
			    <description><![CDATA[<?php print $data->field_course_summary['und'][0]['safe_value']; ?>]]></description>
			    <pubDate><?php print date('r',$data->created); ?></pubDate>
			 	<dc:creator><?php print $data->name; ?></dc:creator>
			 	<guid isPermaLink="false"><?php print $data->nid . $base_url;; ?></guid>
			</item>
    <?php
        }
    ?>
    <!-- Start training_courses -->
    <!-- Start jobs -->
    <?php
    	global $base_url;
    	$jobs_id = db_select ( 'node', 'n' )
                  ->fields ( 'n', array ( 'nid', 'title' ) )
                  ->condition ( 'type', 'jobs' )
                  ->orderBy('created', 'DESC')
                  ->range(0,50)
                  ->execute ()
                  ->fetchAllKeyed ();
        foreach ($jobs_id as $id => $datas ) {
        	$data = node_load($id);
        	$path = $base_url . '/node/' . $data->nid;
    ?>
    		<item>
				<title><![CDATA[<?php print $data->title; ?>]]></title>
			    <link><?php print htmlentities($path); ?></link>
			    <description><![CDATA[<?php print $data->field_job_summary['und'][0]['safe_value']; ?>]]></description>
			    <pubDate><?php print date('r',$data->created); ?></pubDate>
			 	<dc:creator><?php print $data->name; ?></dc:creator>
			 	<guid isPermaLink="false"><?php print $data->nid . $base_url;; ?></guid>
			</item>
    <?php
        }
    ?>
    <!-- Start jobs -->
    <!-- Start hrm_events -->
    <?php
    	global $base_url;
    	$hrm_events_id = db_select ( 'node', 'n' )
                  ->fields ( 'n', array ( 'nid', 'title' ) )
                  ->condition ( 'type', 'hrm_events' )
                  ->orderBy('created', 'DESC')
                  ->range(0,5)
                  ->execute ()
                  ->fetchAllKeyed ();
        foreach ($hrm_events_id as $id => $datas ) {
        	$data = node_load($id);
        	$path = $base_url . '/node/' . $data->nid;
    ?>
    		<item>
				<title><![CDATA[<?php print $data->title; ?>]]></title>
			    <link><?php print htmlentities($path); ?></link>
			    <description><![CDATA[<?php print $data->body['und'][0]['safe_value']; ?>]]></description>
			    <pubDate><?php print date('r',$data->created); ?></pubDate>
			 	<dc:creator><?php print $data->name; ?></dc:creator>
			 	<guid isPermaLink="false"><?php print $data->nid . $base_url;; ?></guid>
			</item>
    <?php
        }
    ?>
    <!-- Start hrm_events -->
    <!-- Start Features -->
    <?php
    	global $base_url;
    	$article_id = db_select ( 'node', 'n' )
                  ->fields ( 'n', array ( 'nid', 'title' ) )
                  ->condition ( 'type', 'article' )
                  ->orderBy('created', 'DESC')
                  ->range(0,5)
                  ->execute ()
                  ->fetchAllKeyed ();
        foreach ($article_id as $id => $datas ) {
        	$data = node_load($id);
        	$path = $base_url . '/node/' . $data->nid;
    ?>
    		<item>
				<title><![CDATA[<?php print $data->title; ?>]]></title>
			    <link><?php print htmlentities($path); ?></link>
			    <description><![CDATA[<?php print $data->field_article_summary['und'][0]['safe_value']; ?>]]></description>
			    <pubDate><?php print date('r',$data->created); ?></pubDate>
			 	<dc:creator><?php print $data->name; ?></dc:creator>
			 	<guid isPermaLink="false"><?php print $data->nid . $base_url;; ?></guid>
			</item>
    <?php
        }
    ?>
    <!-- Start Features -->
    <!-- Start news -->
    <?php
    	$news_id = db_select ( 'node', 'n' )
                  ->fields ( 'n', array ( 'nid', 'title' ) )
                  ->condition ( 'type', 'news' )
                  ->orderBy('created', 'DESC')
                  ->range(0,5)
                  ->execute ()
                  ->fetchAllKeyed ();
        foreach ($news_id as $id => $datas ) {
        	$data = node_load($id);
        	$path = $base_url . '/node/' . $data->nid;
    ?>
    		<item>
				<title><![CDATA[<?php print $data->title; ?>]]></title>
			    <link><?php print htmlentities($path); ?></link>
			    <description><![CDATA[<?php print $data->field_news_summary['und'][0]['safe_value']; ?>]]></description>
			    <pubDate><?php print date('r',$data->created); ?></pubDate>
			 	<dc:creator><?php print $data->name; ?></dc:creator>
			 	<guid isPermaLink="false"><?php print $data->nid . $base_url;; ?></guid>
			</item>
    <?php
        }
    ?>
    <!-- Start news -->
  </channel>
</rss>