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
    <image> 
      <url>http://hrmasia.com/sites/default/files/new-lio.png</url> 
      <title>HRM Asia</title> 
      <link>http://www.hrmasia.com</link>
    </image>
	  <copyright>Copyright (C) 2016</copyright>
	  <ttl>5</ttl>
    <!-- Start Features -->
    <?php
    global $base_url;
    $article_id = db_select ( 'node', 'n' )
      ->fields ( 'n', array ( 'nid', 'title' ) )
      ->condition(db_or()->condition('type', 'article')->condition('type', 'news'))
      ->orderBy('created', 'DESC')
      ->range(0,10)
      ->execute ()
      ->fetchAllKeyed ();
      
    foreach ($article_id as $id => $datas ) {
      $data = node_load($id);
      if($data->type == "article"){
        if(isset($data->field_author_name['und'][0]['uid'])){
          $auth = user_load($data->field_author_name['und'][0]['uid']);
          $author = $auth->name;
        } else {
          $author = "HRM Asia";
        }
        $article_summary = $data->field_article_summary['und'][0]['safe_value'];
      } else {
        $author = "HRM Asia";
        $article_summary = $data->field_news_summary['und'][0]['safe_value'];
      }
      $path = $base_url . '/node/' . $data->nid;
      ?>
      <item>
		    <title><![CDATA[<?php print $data->title; ?>]]></title>
		    <link><?php print htmlentities($path); ?></link>
		    <description><![CDATA[<?php print $article_summary; ?>]]></description>
		    <pubDate><?php print date('r',$data->created); ?></pubDate>
		    <dc:creator><?php print $author; ?></dc:creator>
		    <guid isPermaLink="false"><?php print $data->nid . $base_url;; ?></guid>
	      </item>
      <?php
    }
    ?>
    <!-- Start Features -->
  </channel>
</rss>