<?php
/**
 * @file
 * hrm_features_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hrm_features_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aricle_post';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aricle Post';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'aricle_post:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name]- [created]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'article-post';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="theme2 themeblock">
<h2 class="title"><span>Articles</span></h2>
<div class="news-bottom clearfix">
<div class="news-image">[field_image] </div>
<h1 class="title">[title]</h1>
<div class="">[field_article_summary]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['aricle_post'] = $view;

  $view = new view();
  $view->name = 'article_category_subcategory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Article Category subcategory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['relationship'] = 'parent';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'article_subcategory' => 'article_subcategory',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'article_category_subcategory:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'article_category' => 'article_category',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'Case Studies';

  /* Display: Test */
  $handler = $view->new_display('block', 'Test', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $export['article_category_subcategory'] = $view;

  $view = new view();
  $view->name = 'article_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'article page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['first_column_classes'] = 'views-column-first-big';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Author name (field_author_name) */
  $handler->display->display_options['relationships']['field_author_name_uid']['id'] = 'field_author_name_uid';
  $handler->display->display_options['relationships']['field_author_name_uid']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['relationships']['field_author_name_uid']['field'] = 'field_author_name_uid';
  $handler->display->display_options['relationships']['field_author_name_uid']['delta'] = '-1';
  /* Relationship: Field: Featured Image (field_image:fid) */
  $handler->display->display_options['relationships']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['relationships']['field_image_fid']['field'] = 'field_image_fid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_author_name_uid';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">- [created]</div>
<div class="view-field-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'node';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_author_name_uid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'features-roll';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$realuser = str_replace("%20", " ",$view->args[0]);

$username= $realuser;
$view->build_info[\'title\'] = $username ;
$breadcrumb[] = l(\'Home\',\'<front>\');
$breadcrumb[] = l($username, \'features/\'.$realuser);
drupal_set_breadcrumb($breadcrumb);


?>
';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'article_page:block_1';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author name (field_author_name) */
  $handler->display->display_options['relationships']['field_author_name_uid']['id'] = 'field_author_name_uid';
  $handler->display->display_options['relationships']['field_author_name_uid']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['relationships']['field_author_name_uid']['field'] = 'field_author_name_uid';
  $handler->display->display_options['relationships']['field_author_name_uid']['delta'] = '-1';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_author_name_uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => '',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [created]</div>
<div class="view-field-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_author_name_uid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['name']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['name']['validate_options']['code'] = '$user = user_load_by_name(\'Sham Majid\');
return $user->uid;';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'features/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[body]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['article_page'] = $view;

  $view = new view();
  $view->name = 'article_subcategory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Article Subcategory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Haven\'t Post';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'article_subcategory' => 'article_subcategory',
    'forums' => 0,
    'ad_groups' => 0,
    'article_category' => 0,
    'category' => 0,
    'consultancy_firm' => 0,
    'course_premium_type' => 0,
    'course_type' => 0,
    'hrm_congress' => 0,
    'job_level' => 0,
    'jobs_premium_type' => 0,
    'newsletter' => 0,
    'tags' => 0,
    'userpoints' => 0,
  );
  /* Relationship: Taxonomy term: Content using Sub Category */
  $handler->display->display_options['relationships']['reverse_field_sub_category_node']['id'] = 'reverse_field_sub_category_node';
  $handler->display->display_options['relationships']['reverse_field_sub_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_sub_category_node']['field'] = 'reverse_field_sub_category_node';
  $handler->display->display_options['relationships']['reverse_field_sub_category_node']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['reverse_field_sub_category_node']['label'] = 'Sub Category';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Sub Category */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'reverse_field_sub_category_node';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'article-subcategory/%';
  $export['article_subcategory'] = $view;

  $view = new view();
  $view->name = 'congress_upcoming_and_past_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Congress upcoming and past events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming HRM Congress Series';
  $handler->display->display_options['css_class'] = 'past-events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'congress_series',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['alter']['text'] = '[field_date_congress] & [field_date_congress_1] ';
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Us Email */
  $handler->display->display_options['fields']['field_contact_us_email']['id'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['table'] = 'field_data_field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['field'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['label'] = 'Contact';
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_sponsor']['id'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['table'] = 'field_data_field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['field'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['label'] = 'Sponsors';
  $handler->display->display_options['fields']['field_sponsor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sponsor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="title">[title]</h2>
<div class="congress-date">[field_date_congress_1]</div>
<div class="congress-desc">[field_congress_description]</div>
<div class="congress-contact">[field_contact_us_email] </div>
<div class="congress-sponsor"><label>Sponsors</label>[field_sponsor] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Congress Date -  start date (field_date_congress) */
  $handler->display->display_options['sorts']['field_date_congress_value']['id'] = 'field_date_congress_value';
  $handler->display->display_options['sorts']['field_date_congress_value']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['sorts']['field_date_congress_value']['field'] = 'field_date_congress_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date_congress.field_date_congress_value' => 'field_data_field_date_congress.field_date_congress_value',
  );

  /* Display: Upcoming Congress Series */
  $handler = $view->new_display('page', 'Upcoming Congress Series', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HRM Congress Series';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'upcoming-events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['general'] = array(
    'mode' => 'horizontal',
    'speed' => '500',
    'slideMargin' => '0',
    'startSlide' => '0',
    'randomStart' => 0,
    'infiniteLoop' => 1,
    'hideControlOnEnd' => 0,
    'captions' => 0,
    'ticker' => 0,
    'tickerHover' => 0,
    'adaptiveHeight' => 0,
    'adaptiveHeightSpeed' => '500',
    'video' => 0,
    'touchEnabled' => 1,
    'preloadImages' => 'all',
    'disable_standard_css' => 0,
    'useCSS' => 1,
    'align_image' => 'left',
    'align_caption' => 'left',
    'swipeThreshold' => '50',
    'oneToOneTouch' => 1,
    'preventDefaultSwipeX' => 1,
    'preventDefaultSwipeY' => 0,
    'color_caption' => '80, 80, 80, 0.75',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['controlsfieldset'] = array(
    'controls' => 1,
    'nextText' => '',
    'prevText' => '',
    'startText' => '',
    'stopText' => '',
    'autoControls' => 0,
    'autoControlsCombine' => 0,
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['pagerfieldset'] = array(
    'pager' => 0,
    'pagerType' => 'full',
    'pagerShortSeparator' => ' / ',
    'pagerCustom' => '',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['autofieldset'] = array(
    'pause' => '4000',
    'autoStart' => 1,
    'auto' => 0,
    'autoHover' => '0',
    'autoDelay' => '0',
    'autoDirection' => 'next',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['carousel'] = array(
    'minSlides' => '0',
    'maxSlides' => '3',
    'moveSlides' => '0',
    'slideWidth' => '300',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['callback'] = array(
    'onSliderLoad' => '',
    'onSlideBefore' => '',
    'onSlideAfter' => '',
    'onSlideNext' => '',
    'onSlidePrev' => '',
  );
  $handler->display->display_options['style_options']['slideshow_type'] = 'bxslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
    'field_date_congress' => 0,
    'field_date_congress_1' => 0,
    'field_congress_description' => 0,
    'field_contact_us_email' => 0,
    'field_sponsor' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
    'field_date_congress' => 0,
    'field_date_congress_1' => 0,
    'field_congress_description' => 0,
    'field_contact_us_email' => 0,
    'field_sponsor' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'congress_series',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['alter']['text'] = '[field_date_congress] & [field_date_congress_1] ';
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Us Email */
  $handler->display->display_options['fields']['field_contact_us_email']['id'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['table'] = 'field_data_field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['field'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_contact_us_email']['exclude'] = TRUE;
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_sponsor']['id'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['table'] = 'field_data_field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['field'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sponsor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="title">[title]</h2>
<div class="congress-date">[field_date_congress]</div>
<!--div class="congress-desc"--><!--[field_congress_description]--><!--/div-->
<div class="congress-contact">[field_contact_us_email] </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date_congress.field_date_congress_value' => 'field_data_field_date_congress.field_date_congress_value',
  );
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    526 => '526',
  );
  $handler->display->display_options['path'] = 'upcoming-congress';

  /* Display: Past HRM Congress Series */
  $handler = $view->new_display('block', 'Past HRM Congress Series', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past HRM Congress Series';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'past-congress',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date_congress.field_date_congress_value' => 'field_data_field_date_congress.field_date_congress_value',
  );
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    526 => '526',
  );
  $export['congress_upcoming_and_past_events'] = $view;

  $view = new view();
  $view->name = 'course_category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Course Category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Areas of training';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cat';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: Course Date -  start date (field_course_dates) */
  $handler->display->display_options['filters']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['filters']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['filters']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['filters']['field_course_dates_value']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_course_dates_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_course_dates_value']['group'] = 1;
  /* Filter criterion: Content: Course Date - end date (field_course_dates:value2) */
  $handler->display->display_options['filters']['field_course_dates_value2']['id'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['filters']['field_course_dates_value2']['field'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_course_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_course_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'course_type' => 'course_type',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 2;

  /* Display: Areas of training */
  $handler = $view->new_display('block', 'Areas of training', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'area-cat';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<style>
/* Areas of training block */
#block-views-course-category-block-1{
	width: 60%;
	float: left;
	margin-right: 10%;
}
#block-views-course-category-block-1 .title{
	border-bottom: 2px solid #a5a5a5;
	color: #be202e;
	text-transform: uppercase;
	font-size: 18px;
}
#block-views-course-category-block-1 .area-cat{
	width: 50%;
	float: left;
	margin-bottom: 0.5em;
}

#block-views-course-category-block-1 .area-cat a{
	color: #000;
}


/* job level block */
#block-views-course-category-block-2{
	width: 30%;
	float: left;
}
#block-views-course-category-block-2 .title{
	border-bottom: 2px solid #a5a5a5;
	color: #be202e;
	text-transform: uppercase;
	font-size: 18px;
}
#block-views-course-category-block-2 .job-cat{
	margin-bottom: 0.5em;	
}
#block-views-course-category-block-2 .job-cat a{
	color: #000;
}
</style>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  $handler->display->display_options['block_description'] = 'Areas of training';

  /* Display: Job level */
  $handler = $view->new_display('block', 'Job level', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Job level';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'job-cat';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'job_level' => 'job_level',
  );
  $handler->display->display_options['block_description'] = 'Job level';

  /* Display: Areas of training */
  $handler = $view->new_display('block', 'Areas of training', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<style>
/* Areas of training block */
#block-views-course-category-block-1{
	width: 60%;
	float: left;
	margin-right: 10%;
}
#block-views-course-category-block-1 .title{
	border-bottom: 2px solid #a5a5a5;
	color: #be202e;
	text-transform: uppercase;
	font-size: 18px;
}
#block-views-course-category-block-1 .area-cat{
	width: 50%;
	float: left;
	margin-bottom: 0.5em;
}

#block-views-course-category-block-1 .area-cat a{
	color: #000;
}


/* job level block */
#block-views-course-category-block-2{
	width: 30%;
	float: left;
}
#block-views-course-category-block-2 .title{
	border-bottom: 2px solid #a5a5a5;
	color: #be202e;
	text-transform: uppercase;
	font-size: 18px;
}
#block-views-course-category-block-2 .job-cat{
	margin-bottom: 0.5em;	
}
#block-views-course-category-block-2 .job-cat a{
	color: #000;
}
</style>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Areas of training';

  /* Display: Job level */
  $handler = $view->new_display('block', 'Job level', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Job level';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'job_level' => 'job_level',
  );
  $handler->display->display_options['block_description'] = 'Job level';
  $export['course_category'] = $view;

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'courses:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Company (field_trainining_company) */
  $handler->display->display_options['relationships']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_trainining_company_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_trainining_company_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_cost']['id'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['table'] = 'field_data_field_cost';
  $handler->display->display_options['fields']['field_cost']['field'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Course benefits */
  $handler->display->display_options['fields']['field_key_benefits']['id'] = 'field_key_benefits';
  $handler->display->display_options['fields']['field_key_benefits']['table'] = 'field_data_field_key_benefits';
  $handler->display->display_options['fields']['field_key_benefits']['field'] = 'field_key_benefits';
  $handler->display->display_options['fields']['field_key_benefits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_benefits']['type'] = 'text_plain';
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="job-left">
<div class="job-detail">[field_course_dates] - [field_trainining_company]</div>
<div class="job-detail">[field_course_summary]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Date -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search courses';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Location (field_location) */
  $handler->display->display_options['filters']['field_location_value']['id'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_value']['field'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_value']['expose']['operator_id'] = 'field_location_value_op';
  $handler->display->display_options['filters']['field_location_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_value']['expose']['operator'] = 'field_location_value_op';
  $handler->display->display_options['filters']['field_location_value']['expose']['identifier'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Course Premium type (field_course_premium_type) */
  $handler->display->display_options['filters']['field_course_premium_type_tid']['id'] = 'field_course_premium_type_tid';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['table'] = 'field_data_field_course_premium_type';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['field'] = 'field_course_premium_type_tid';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['value'] = array(
    0 => '276',
  );
  $handler->display->display_options['filters']['field_course_premium_type_tid']['vocabulary'] = 'course_premium_type';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_course_dates.field_course_dates_value2' => 'field_data_field_course_dates.field_course_dates_value2',
  );
  $handler->display->display_options['path'] = 'courses';

  /* Display: Enhanced premium course */
  $handler = $view->new_display('block', 'Enhanced premium course', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Enhanced premium course';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'enhance-jobs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Company (field_trainining_company) */
  $handler->display->display_options['relationships']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_trainining_company_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_cost']['id'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['table'] = 'field_data_field_cost';
  $handler->display->display_options['fields']['field_cost']['field'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Course benefits */
  $handler->display->display_options['fields']['field_key_benefits']['id'] = 'field_key_benefits';
  $handler->display->display_options['fields']['field_key_benefits']['table'] = 'field_data_field_key_benefits';
  $handler->display->display_options['fields']['field_key_benefits']['field'] = 'field_key_benefits';
  $handler->display->display_options['fields']['field_key_benefits']['exclude'] = TRUE;
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Bullet Point 1 */
  $handler->display->display_options['fields']['field_courses_point1']['id'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['table'] = 'field_data_field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['field'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point1']['element_label_colon'] = FALSE;
  /* Field: Content: Bullet Point 2 */
  $handler->display->display_options['fields']['field_courses_point2']['id'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['table'] = 'field_data_field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['field'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point2']['element_label_colon'] = FALSE;
  /* Field: Content: Bullet Point 3 */
  $handler->display->display_options['fields']['field_courses_point3']['id'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['table'] = 'field_data_field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['field'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field-title">
	[title] 
</div>
<div class="job-detail">
	[field_course_dates] - [field_trainining_company]
</div>
<div class="job-bottom">
	<div class="job-left">
		[field_course_summary]
		<br/>
		- [field_courses_point1]
		<br/>
		- [field_courses_point2]
		<br/>
		- [field_courses_point3]
	</div>
	<div class="job-right">
		[field_image]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Date -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  /* Filter criterion: Content: Course Premium type (field_course_premium_type) */
  $handler->display->display_options['filters']['field_course_premium_type_tid']['id'] = 'field_course_premium_type_tid';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['table'] = 'field_data_field_course_premium_type';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['field'] = 'field_course_premium_type_tid';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['value'] = array(
    0 => '271',
  );
  $handler->display->display_options['filters']['field_course_premium_type_tid']['vocabulary'] = 'course_premium_type';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_course_dates.field_course_dates_value2' => 'field_data_field_course_dates.field_course_dates_value2',
  );
  $handler->display->display_options['block_description'] = 'Enhanced premium course';
  $export['courses'] = $view;

  $view = new view();
  $view->name = 'courses2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<style>
.course-row-wrapper {
	padding: 2em 0;
	border-bottom: 1px solid #dddddd;
}
.course-title {
	margin-bottom: 0.5em;
}
.course-title a {
	font-size: 17px;
	color: #be202e;
	font-weight: bold;
}
.course-company {
	margin-bottom: 1em;
}
.course-company a {
	font-size: 14px;
	color: #242424;
	font-weight: bold;
	text-transform: uppercase;
}
.course-no{

}
.course-mail{

}
.course-url{

}
.course-area{

}
</style>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Content: Register Link URL */
  $handler->display->display_options['fields']['field_register_link_url']['id'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['table'] = 'field_data_field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['field'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_register_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_register_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_register_link_url']['click_sort_column'] = 'url';
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="course-row-wrapper">
	<div class="course-title">[title]</div>
	<div class="course-company">[field_trainining_company]</div>
	<div class="course-no">Training Provider Contact Number: </div>
	<div class="course-mail">Training Provider Email: </div>
	<div class="course-url">Course URL: [field_register_link_url]</div>
	<div class="course-area">Area of Training: [field_course_type]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Course Title';
  /* Sort criterion: Content: Company (field_trainining_company) */
  $handler->display->display_options['sorts']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['sorts']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['sorts']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['sorts']['field_trainining_company_nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_trainining_company_nid']['expose']['label'] = 'Company Name';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Posted Date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  /* Filter criterion: Content: Job level (field_job_level) */
  $handler->display->display_options['filters']['field_job_level_tid']['id'] = 'field_job_level_tid';
  $handler->display->display_options['filters']['field_job_level_tid']['table'] = 'field_data_field_job_level';
  $handler->display->display_options['filters']['field_job_level_tid']['field'] = 'field_job_level_tid';
  $handler->display->display_options['filters']['field_job_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['operator_id'] = 'field_job_level_tid_op';
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['label'] = 'Job level (field_job_level)';
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['operator'] = 'field_job_level_tid_op';
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['identifier'] = 'field_job_level_tid';
  $handler->display->display_options['filters']['field_job_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_job_level_tid']['vocabulary'] = 'job_level';

  /* Display: Courses Search (course type) */
  $handler = $view->new_display('page', 'Courses Search (course type)', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<style>
.view-courses2 h3 { display:none; }
.course-views-row {
	padding: 15px 0;
	border-bottom: 1px solid #dddddd;
}
.course-views-row .course-container{
	background: #f7eee7;
	padding: 15px 2.5%;
}
.course-views-row .views-field-title{
	font-size: 17px;
	font-family: \'Merriweather\', Arial, serif;
	font-weight: 700;
	margin-bottom: 10px;
}
.course-views-row .course-detail{
	font-size: 13px;
	font-family: \'Ubuntu\', Arial, serif;
	font-weight: 400;
	font-style: italic;
	color: #6d6e71;
}
.course-views-row .course-bottom{
	clear: both;
	overflow: hidden;
}
.course-views-row .course-left{
	width: 70%;
	float: left;
}
.course-views-row .course-right{
	width: 30%;
	float: right;
	text-align: right;
	padding-top: 10px;
}
</style>

<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_3\');
print render($block[\'content\']);
*/
?>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_4\');
print render($block[\'content\']);
*/
?>
<?php
$block = module_invoke(\'views\',\'block_view\',\'courses2-block_1\');
print render($block[\'content\']);
?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No results can be found under this category.</p>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_3\');
print render($block[\'content\']);
*/
?>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_4\');
print render($block[\'content\']);
*/
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Company (field_trainining_company) */
  $handler->display->display_options['relationships']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Premium type */
  $handler->display->display_options['fields']['field_course_premium_type']['id'] = 'field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['table'] = 'field_data_field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['field'] = 'field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_premium_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_premium_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_premium_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_premium_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Courses Region */
  $handler->display->display_options['fields']['field_courses_region']['id'] = 'field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['table'] = 'field_data_field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['field'] = 'field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['label'] = '';
  $handler->display->display_options['fields']['field_courses_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_region']['element_default_classes'] = FALSE;
  /* Field: Content: Register Link URL */
  $handler->display->display_options['fields']['field_register_link_url']['id'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['table'] = 'field_data_field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['field'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_register_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_register_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_register_link_url']['click_sort_column'] = 'url';
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_summary']['element_default_classes'] = FALSE;
  /* Field: Content: Bullet Point 1 */
  $handler->display->display_options['fields']['field_courses_point1']['id'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['table'] = 'field_data_field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['field'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_point1']['element_default_classes'] = FALSE;
  /* Field: Content: Bullet Point 2 */
  $handler->display->display_options['fields']['field_courses_point2']['id'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['table'] = 'field_data_field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['field'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_point2']['element_default_classes'] = FALSE;
  /* Field: Content: Bullet Point 3 */
  $handler->display->display_options['fields']['field_courses_point3']['id'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['table'] = 'field_data_field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['field'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_point3']['element_default_classes'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_trainining_company_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//courses search
if ($data->field_field_course_premium_type[0][\'rendered\'][\'#markup\']==\'Enhanced Premium\') {
	if (strtotime($data->field_field_course_dates[0][\'raw\'][\'value\']) + (7 * 24 * 60 * 60) < time()) {
		//enhanced premium
		echo \'
		<div class="course-views-row"> 
		<div class="course-container">
			<div class="views-field-title"><a href="/\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'. $data->node_title .\'</a></div>
			<div class="course-detail">\'. $data->field_field_course_dates[0][\'rendered\'][\'#markup\'];
		if (isset($data->field_field_trainining_company[0][\'rendered\'][\'#title\'])&&!empty($data->field_field_trainining_company[0][\'rendered\'][\'#title\'])){
			echo \' - \'. $data->field_field_trainining_company[0][\'rendered\'][\'#title\'];
		}
		if (isset($data->field_field_courses_region[0][\'rendered\'][\'#title\'])&&!empty($data->field_field_courses_region[0][\'rendered\'][\'#title\'])){
			echo \' - \'. $data->field_field_courses_region[0][\'rendered\'][\'#title\'];
		}
		echo \'</div>
			<div class="course-bottom">
				<div class="course-left">\'. $data->field_field_course_summary[0][\'raw\'][\'safe_value\'];
		if (isset($data->field_field_courses_point1[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point1[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point1[0][\'raw\'][\'safe_value\'];
		}
		if (isset($data->field_field_courses_point2[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point2[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point2[0][\'raw\'][\'safe_value\'];
		}
		if (isset($data->field_field_courses_point3[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point3[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point3[0][\'raw\'][\'safe_value\'];
		}				
		echo
			\'</div>
				<div class="course-right">
					<img typeof="foaf:Image" src="\'. file_create_url($data->field_field_image[0][\'raw\'][\'uri\']) .\'" alt="">
				</div>
			</div>
		</div>
		</div>
		\';
	} else {
		//echo \'<style>.custom-job-listing .views-row-\'. ($view->row_index+1) .\' { display:none; }</style>\';               
	}
} else {
	//premium
	echo \'
	<div class="course-views-row"> 
	<div class="course-container" style="background: none;">
		<div class="views-field-title"><a href="/\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'. $data->node_title .\'</a></div>
		<div class="course-detail">\'. $data->field_field_course_dates[0][\'rendered\'][\'#markup\'] .\' - \'. $data->field_field_trainining_company[0][\'rendered\'][\'#title\'] .\' - \'. $data->field_field_courses_region[0][\'rendered\'][\'#title\'] .\'</div>
		<div class="course-bottom">
			<div class="course-left" style="width:100%;">\'. $data->field_field_course_summary[0][\'raw\'][\'safe_value\'] .\'</div>
		</div>
	</div>
	</div>
	\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Date -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Course Date - end date (field_course_dates:value2) */
  $handler->display->display_options['filters']['field_course_dates_value2']['id'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['filters']['field_course_dates_value2']['field'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Courses Search (job type) */
  $handler = $view->new_display('page', 'Courses Search (job type)', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<style>
.view-courses2 h3 { display:none; }
.course-views-row {
	padding: 15px 0;
	border-bottom: 1px solid #dddddd;
}
.course-views-row .course-container{
	background: #f7eee7;
	padding: 15px 2.5%;
}
.course-views-row .views-field-title{
	font-size: 17px;
	font-family: \'Merriweather\', Arial, serif;
	font-weight: 700;
	margin-bottom: 10px;
}
.course-views-row .course-detail{
	font-size: 13px;
	font-family: \'Ubuntu\', Arial, serif;
	font-weight: 400;
	font-style: italic;
	color: #6d6e71;
}
.course-views-row .course-bottom{
	clear: both;
	overflow: hidden;
}
.course-views-row .course-left{
	width: 70%;
	float: left;
}
.course-views-row .course-right{
	width: 30%;
	float: right;
	text-align: right;
	padding-top: 10px;
}
</style>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_3\');
print render($block[\'content\']);
*/
?>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_4\');
print render($block[\'content\']);
*/
?>
<?php
$block = module_invoke(\'views\',\'block_view\',\'courses2-block_1\');
print render($block[\'content\']);
?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No results can be found under this category.</p>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_3\');
print render($block[\'content\']);
*/
?>
<?php
/*
$block = module_invoke(\'views\',\'block_view\',\'course_category-block_4\');
print render($block[\'content\']);
*/
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Company (field_trainining_company) */
  $handler->display->display_options['relationships']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Premium type */
  $handler->display->display_options['fields']['field_course_premium_type']['id'] = 'field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['table'] = 'field_data_field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['field'] = 'field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_premium_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_premium_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_premium_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_premium_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Courses Region */
  $handler->display->display_options['fields']['field_courses_region']['id'] = 'field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['table'] = 'field_data_field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['field'] = 'field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['label'] = '';
  $handler->display->display_options['fields']['field_courses_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_region']['element_default_classes'] = FALSE;
  /* Field: Content: Register Link URL */
  $handler->display->display_options['fields']['field_register_link_url']['id'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['table'] = 'field_data_field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['field'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_register_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_register_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_register_link_url']['click_sort_column'] = 'url';
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_summary']['element_default_classes'] = FALSE;
  /* Field: Content: Bullet Point 1 */
  $handler->display->display_options['fields']['field_courses_point1']['id'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['table'] = 'field_data_field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['field'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_point1']['element_default_classes'] = FALSE;
  /* Field: Content: Bullet Point 2 */
  $handler->display->display_options['fields']['field_courses_point2']['id'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['table'] = 'field_data_field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['field'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_point2']['element_default_classes'] = FALSE;
  /* Field: Content: Bullet Point 3 */
  $handler->display->display_options['fields']['field_courses_point3']['id'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['table'] = 'field_data_field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['field'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_courses_point3']['element_default_classes'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_trainining_company_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//courses search
if ($data->field_field_course_premium_type[0][\'rendered\'][\'#markup\']==\'Enhanced Premium\') {
	if (strtotime($data->field_field_course_dates[0][\'raw\'][\'value\']) + (7 * 24 * 60 * 60) < time()) {
		//enhanced premium
		echo \'
		<div class="course-views-row"> 
		<div class="course-container">
			<div class="views-field-title"><a href="/\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'. $data->node_title .\'</a></div>
			<div class="course-detail">\'. $data->field_field_course_dates[0][\'rendered\'][\'#markup\'];
		if (isset($data->field_field_trainining_company[0][\'rendered\'][\'#title\'])&&!empty($data->field_field_trainining_company[0][\'rendered\'][\'#title\'])){
			echo \' - \'. $data->field_field_trainining_company[0][\'rendered\'][\'#title\'];
		}
		if (isset($data->field_field_courses_region[0][\'rendered\'][\'#title\'])&&!empty($data->field_field_courses_region[0][\'rendered\'][\'#title\'])){
			echo \' - \'. $data->field_field_courses_region[0][\'rendered\'][\'#title\'];
		}
		echo \'</div>
			<div class="course-bottom">
				<div class="course-left">\'. $data->field_field_course_summary[0][\'raw\'][\'safe_value\'];
		if (isset($data->field_field_courses_point1[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point1[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point1[0][\'raw\'][\'safe_value\'];
		}
		if (isset($data->field_field_courses_point2[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point2[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point2[0][\'raw\'][\'safe_value\'];
		}
		if (isset($data->field_field_courses_point3[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point3[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point3[0][\'raw\'][\'safe_value\'];
		}				
		echo
			\'</div>
				<div class="course-right">
					<img typeof="foaf:Image" src="\'. file_create_url($data->field_field_image[0][\'raw\'][\'uri\']) .\'" alt="">
				</div>
			</div>
		</div>
		</div>
		\';
	} else {
		//echo \'<style>.custom-job-listing .views-row-\'. ($view->row_index+1) .\' { display:none; }</style>\';               
	}
} else {
	//premium
	echo \'
	<div class="course-views-row"> 
	<div class="course-container" style="background: none;">
		<div class="views-field-title"><a href="/\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'. $data->node_title .\'</a></div>
		<div class="course-detail">\'. $data->field_field_course_dates[0][\'rendered\'][\'#markup\'] .\' - \'. $data->field_field_trainining_company[0][\'rendered\'][\'#title\'] .\' - \'. $data->field_field_courses_region[0][\'rendered\'][\'#title\'] .\'</div>
		<div class="course-bottom">
			<div class="course-left" style="width:100%;">\'. $data->field_field_course_summary[0][\'raw\'][\'safe_value\'] .\'</div>
		</div>
	</div>
	</div>
	\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Date -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Course Date - end date (field_course_dates:value2) */
  $handler->display->display_options['filters']['field_course_dates_value2']['id'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['filters']['field_course_dates_value2']['field'] = 'field_course_dates_value2';
  $handler->display->display_options['filters']['field_course_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: enhanced premium courses */
  $handler = $view->new_display('block', 'enhanced premium courses', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Company (field_trainining_company) */
  $handler->display->display_options['relationships']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['relationships']['field_trainining_company_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Premium type */
  $handler->display->display_options['fields']['field_course_premium_type']['id'] = 'field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['table'] = 'field_data_field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['field'] = 'field_course_premium_type';
  $handler->display->display_options['fields']['field_course_premium_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_premium_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_premium_type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Courses Region */
  $handler->display->display_options['fields']['field_courses_region']['id'] = 'field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['table'] = 'field_data_field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['field'] = 'field_courses_region';
  $handler->display->display_options['fields']['field_courses_region']['label'] = '';
  $handler->display->display_options['fields']['field_courses_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_region']['element_label_colon'] = FALSE;
  /* Field: Content: Register Link URL */
  $handler->display->display_options['fields']['field_register_link_url']['id'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['table'] = 'field_data_field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['field'] = 'field_register_link_url';
  $handler->display->display_options['fields']['field_register_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_register_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_register_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_register_link_url']['click_sort_column'] = 'url';
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['delta_offset'] = '0';
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Bullet Point 1 */
  $handler->display->display_options['fields']['field_courses_point1']['id'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['table'] = 'field_data_field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['field'] = 'field_courses_point1';
  $handler->display->display_options['fields']['field_courses_point1']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point1']['element_label_colon'] = FALSE;
  /* Field: Content: Bullet Point 2 */
  $handler->display->display_options['fields']['field_courses_point2']['id'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['table'] = 'field_data_field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['field'] = 'field_courses_point2';
  $handler->display->display_options['fields']['field_courses_point2']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point2']['element_label_colon'] = FALSE;
  /* Field: Content: Bullet Point 3 */
  $handler->display->display_options['fields']['field_courses_point3']['id'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['table'] = 'field_data_field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['field'] = 'field_courses_point3';
  $handler->display->display_options['fields']['field_courses_point3']['label'] = '';
  $handler->display->display_options['fields']['field_courses_point3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_courses_point3']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_trainining_company_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
		echo \'
		<div class="course-views-row"> 
		<div class="course-container">
			<div class="views-field-title"><a href="/\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'. $data->node_title .\'</a></div>
			<div class="course-detail">\'. $data->field_field_course_dates[0][\'rendered\'][\'#markup\'];
		if (isset($data->field_field_trainining_company[0][\'rendered\'][\'#title\'])&&!empty($data->field_field_trainining_company[0][\'rendered\'][\'#title\'])){
			echo \' - \'. $data->field_field_trainining_company[0][\'rendered\'][\'#title\'];
		}
		if (isset($data->field_field_courses_region[0][\'rendered\'][\'#title\'])&&!empty($data->field_field_courses_region[0][\'rendered\'][\'#title\'])){
			echo \' - \'. $data->field_field_courses_region[0][\'rendered\'][\'#title\'];
		}
		echo \'</div>
			<div class="course-bottom">
				<div class="course-left">\'. $data->field_field_course_summary[0][\'raw\'][\'safe_value\'];
		if (isset($data->field_field_courses_point1[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point1[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point1[0][\'raw\'][\'safe_value\'];
		}
		if (isset($data->field_field_courses_point2[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point2[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point2[0][\'raw\'][\'safe_value\'];
		}
		if (isset($data->field_field_courses_point3[0][\'raw\'][\'safe_value\'])&&!empty($data->field_field_courses_point3[0][\'raw\'][\'safe_value\'])){
			echo \'<br>- \'. $data->field_field_courses_point3[0][\'raw\'][\'safe_value\'];
		}				
		echo
			\'</div>
				<div class="course-right">
					<img typeof="foaf:Image" src="\'. file_create_url($data->field_field_image[0][\'raw\'][\'uri\']) .\'" alt="">
				</div>
			</div>
		</div>
		</div>
		\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Date -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Course Premium type (field_course_premium_type) */
  $handler->display->display_options['filters']['field_course_premium_type_tid']['id'] = 'field_course_premium_type_tid';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['table'] = 'field_data_field_course_premium_type';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['field'] = 'field_course_premium_type_tid';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['value'] = array(
    271 => '271',
  );
  $handler->display->display_options['filters']['field_course_premium_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_premium_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_premium_type_tid']['vocabulary'] = 'course_premium_type';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now - 7 day';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_course_dates.field_course_dates_value' => 'field_data_field_course_dates.field_course_dates_value',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_course_dates.field_course_dates_value2' => 'field_data_field_course_dates.field_course_dates_value2',
  );
  $export['courses2'] = $view;

  $view = new view();
  $view->name = 'courses_related';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses Related';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses Related';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates_1']['id'] = 'field_course_dates_1';
  $handler->display->display_options['fields']['field_course_dates_1']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_1']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Certification */
  $handler->display->display_options['fields']['field_certification']['id'] = 'field_certification';
  $handler->display->display_options['fields']['field_certification']['table'] = 'field_data_field_certification';
  $handler->display->display_options['fields']['field_certification']['field'] = 'field_certification';
  /* Field: Content: Contact Us Email */
  $handler->display->display_options['fields']['field_contact_us_email']['id'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['table'] = 'field_data_field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['field'] = 'field_contact_us_email';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Company (field_trainining_company) */
  $handler->display->display_options['arguments']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['default_argument_options']['code'] = 'if(arg(0)=="node")
{
	$nodedata = node_load(arg(1));
	return $nodedata->field_trainining_company[\'und\'][0][\'nid\'];
}';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Courses Related';
  $export['courses_related'] = $view;

  $view = new view();
  $view->name = 'couse_provider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Couse provider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Courses';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trainining_company']['type'] = 'node_reference_plain';
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Course Date */
  $handler->display->display_options['fields']['field_course_dates_1']['id'] = 'field_course_dates_1';
  $handler->display->display_options['fields']['field_course_dates_1']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_1']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Certification */
  $handler->display->display_options['fields']['field_certification']['id'] = 'field_certification';
  $handler->display->display_options['fields']['field_certification']['table'] = 'field_data_field_certification';
  $handler->display->display_options['fields']['field_certification']['field'] = 'field_certification';
  /* Field: Content: Contact Us Email */
  $handler->display->display_options['fields']['field_contact_us_email']['id'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['table'] = 'field_data_field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['field'] = 'field_contact_us_email';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Company (field_trainining_company) */
  $handler->display->display_options['arguments']['field_trainining_company_nid']['id'] = 'field_trainining_company_nid';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['field'] = 'field_trainining_company_nid';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['default_argument_options']['code'] = 'if(arg(0)=="node")
{
	$nodedata = node_load(arg(1));
	return $nodedata->field_trainining_company[\'und\'][0][\'nid\'];
}';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trainining_company_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Related Courses';
  $export['couse_provider'] = $view;

  $view = new view();
  $view->name = 'devchecker';
  $view->description = 'This view is for developer to check site\'s data.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'devchecker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'devchecker';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = 'Posted start Date';
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date_1']['id'] = 'field_posted_date_1';
  $handler->display->display_options['fields']['field_posted_date_1']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date_1']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date_1']['label'] = 'Posted End Date';
  $handler->display->display_options['fields']['field_posted_date_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Posted Date -  start date (field_posted_date) */
  $handler->display->display_options['sorts']['field_posted_date_value']['id'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['sorts']['field_posted_date_value']['field'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  $handler->display->display_options['path'] = 'devchecker';
  $export['devchecker'] = $view;

  $view = new view();
  $view->name = 'featured_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepageslider',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Field: Featured Image (field_image:alt) */
  $handler->display->display_options['filters']['field_image_alt']['id'] = 'field_image_alt';
  $handler->display->display_options['filters']['field_image_alt']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_alt']['field'] = 'field_image_alt';
  $handler->display->display_options['filters']['field_image_alt']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepageslider',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' [title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide-image">[field_image]</div>
<div class="title-with-body"><h4><span>HRM EVENTS</h4></span> <div class="slide-title"> [title]</div>
<div class="slide-body">[body]</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;

  /* Display: Thumbnail */
  $handler = $view->new_display('block', 'Thumbnail', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'thumb';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $export['featured_slider'] = $view;

  $view = new view();
  $view->name = 'features';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'homepage-blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'features' => 'features',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepage_image',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'block-content-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="block-content-title">[title]</div>
<div class="post-date">[field_date]</div>
<div class="block-body">[field_article_summary]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $export['features'] = $view;

  $view = new view();
  $view->name = 'features_category_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Features Category List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'features-roll';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['path'] = 'article-subcategory/%';

  /* Display: First Features */
  $handler = $view->new_display('block', 'First Features', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Talent Management */
  $handler = $view->new_display('page', 'Talent Management', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Talent Management';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'article-subcategory/talent-management';

  /* Display: First Talent Management */
  $handler = $view->new_display('block', 'First Talent Management', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Talent Acquisition */
  $handler = $view->new_display('page', 'Talent Acquisition', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Talent Acquisition';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_3';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    656 => '656',
    661 => '661',
    666 => '666',
    671 => '671',
    676 => '676',
    681 => '681',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/talent-acquisition';

  /* Display: First Talent Acquisition */
  $handler = $view->new_display('block', 'First Talent Acquisition', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    656 => '656',
    661 => '661',
    666 => '666',
    671 => '671',
    676 => '676',
    681 => '681',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: Learning And Development */
  $handler = $view->new_display('page', 'Learning And Development', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Learning And Development';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_4';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    626 => '626',
    631 => '631',
    636 => '636',
    641 => '641',
    646 => '646',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/learning-and-developement';

  /* Display: First Learning And Developement */
  $handler = $view->new_display('block', 'First Learning And Developement', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    626 => '626',
    631 => '631',
    636 => '636',
    641 => '641',
    646 => '646',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: HR Admin */
  $handler = $view->new_display('page', 'HR Admin', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mobility';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_5';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    566 => '566',
    571 => '571',
    576 => '576',
    581 => '581',
    586 => '586',
    591 => '591',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/hr-admin';

  /* Display: First HR Admin */
  $handler = $view->new_display('block', 'First HR Admin', 'block_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    566 => '566',
    571 => '571',
    576 => '576',
    581 => '581',
    586 => '586',
    591 => '591',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: HR Tech */
  $handler = $view->new_display('page', 'HR Tech', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HR Tech';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_6';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    601 => '601',
    606 => '606',
    616 => '616',
    611 => '611',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/hr-tech';

  /* Display: First HR Tech */
  $handler = $view->new_display('block', 'First HR Tech', 'block_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    601 => '601',
    606 => '606',
    616 => '616',
    611 => '611',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: Employment Law */
  $handler = $view->new_display('page', 'Employment Law', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employment Law';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_7';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    531 => '531',
    536 => '536',
    541 => '541',
    546 => '546',
    551 => '551',
    556 => '556',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/employment-law';

  /* Display: First Employment Law */
  $handler = $view->new_display('block', 'First Employment Law', 'block_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    531 => '531',
    536 => '536',
    541 => '541',
    546 => '546',
    551 => '551',
    556 => '556',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: Business Leadership & Strategy */
  $handler = $view->new_display('page', 'Business Leadership & Strategy', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business Leadership & Strategy';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_8';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    496 => '496',
    506 => '506',
    501 => '501',
    511 => '511',
    516 => '516',
    521 => '521',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'article-subcategory/business-leadership-strategy';

  /* Display: First Business Leadership & Strategy */
  $handler = $view->new_display('block', 'First Business Leadership & Strategy', 'block_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    496 => '496',
    506 => '506',
    501 => '501',
    511 => '511',
    516 => '516',
    521 => '521',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: Corporate Culture */
  $handler = $view->new_display('page', 'Corporate Culture', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Corporate Culture';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    471 => '471',
    466 => '466',
    476 => '476',
    481 => '481',
    486 => '486',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/corporate-culture';

  /* Display: First Corporate Culture */
  $handler = $view->new_display('block', 'First Corporate Culture', 'block_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    471 => '471',
    466 => '466',
    476 => '476',
    481 => '481',
    486 => '486',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: Compensation & Benefits */
  $handler = $view->new_display('page', 'Compensation & Benefits', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Compensation & Benefits';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_10';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    436 => '436',
    441 => '441',
    446 => '446',
    451 => '451',
    456 => '456',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'article-subcategory/compensation-benefits';

  /* Display: First Compensation & Benefits */
  $handler = $view->new_display('block', 'First Compensation & Benefits', 'block_10');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    436 => '436',
    441 => '441',
    446 => '446',
    451 => '451',
    456 => '456',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;

  /* Display: Case Studies */
  $handler = $view->new_display('page', 'Case Studies', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Case Studies';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'features_category_list:block_11';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name] - [field_date]</div>
<div class="view-field-body">[field_article_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'article_category';
  $handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    721 => '721',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'article-subcategory/compensation-benefits';

  /* Display: First Case Studies */
  $handler = $view->new_display('block', 'First Case Studies', 'block_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Article Summary */
  $handler->display->display_options['fields']['field_article_summary']['id'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['table'] = 'field_data_field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['field'] = 'field_article_summary';
  $handler->display->display_options['fields']['field_article_summary']['label'] = '';
  $handler->display->display_options['fields']['field_article_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
	<div class="news-image">
		[field_featured_image_listing]
	</div>
	<h1 class="title">
		[title]
	</h1>
	<div class="">
		[field_article_summary]
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'article_category';
  $handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Sub Category (field_sub_category) */
  $handler->display->display_options['filters']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['filters']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['filters']['field_sub_category_tid']['value'] = array(
    721 => '721',
  );
  $handler->display->display_options['filters']['field_sub_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_sub_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_category_tid']['vocabulary'] = 'article_subcategory';
  $handler->display->display_options['filters']['field_sub_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $export['features_category_list'] = $view;

  $view = new view();
  $view->name = 'filter_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filter Article';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'article_category';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_sub_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Sub Category */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $export['filter_article'] = $view;

  $view = new view();
  $view->name = 'forum_community';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Forum Community';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forum Community';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: My Communities */
  $handler = $view->new_display('block', 'My Communities', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Communities';
  $handler->display->display_options['display_description'] = 'My Communities';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'rmspace';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print views_embed_view(\'user\', \'block\', $row->tid);?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'global $user;
if($user->uid)
{
	$pref =  profile2_load_by_user($user->uid, \'choose_discussion_topic\') ;
	if(isset($pref->field_form_category[\'und\']))
    {
        foreach ($pref->field_form_category[\'und\'] as $pid) {
           $tid[] = $pid[\'tid\'];
        }
        return implode(\'+\', $tid);
    }
}
';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $export['forum_community'] = $view;

  $view = new view();
  $view->name = 'guest_contributors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guest Contributors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Guest Contributors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'contributors',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contributors' => 'contributors',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'contributors',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$user = user_load_by_name($row->title);
$picture = \'<img src="\'.image_style_url(\'contributors\',$data->field_field_image[0][\'raw\'][\'uri\']).\'" >\';
if(!empty($user->uid)){
    print \'<div class="views-field views-field-field-image"><a href="/features/\'.$user->name.\'">\'.$picture.\'</a></div>\';
    print \'<div class="views-field views-field-field-image"><a href="/features/\'.$user->name.\'">\'.$row->title.\'</a></div>\';
}
else
{
      print \'<div class="views-field views-field-field-image">\'.$picture.\'</div>\';
      print $row->title;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $export['guest_contributors'] = $view;

  $view = new view();
  $view->name = 'home_featured_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Featured Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['general'] = array(
    'mode' => 'horizontal',
    'speed' => '500',
    'slideMargin' => '0',
    'startSlide' => '0',
    'randomStart' => 0,
    'infiniteLoop' => 1,
    'hideControlOnEnd' => 0,
    'captions' => 0,
    'ticker' => 0,
    'tickerHover' => 0,
    'adaptiveHeight' => 0,
    'adaptiveHeightSpeed' => '500',
    'video' => 0,
    'touchEnabled' => 1,
    'preloadImages' => 'all',
    'disable_standard_css' => 0,
    'useCSS' => 1,
    'align_image' => 'left',
    'align_caption' => 'left',
    'swipeThreshold' => '50',
    'oneToOneTouch' => 1,
    'preventDefaultSwipeX' => 1,
    'preventDefaultSwipeY' => 0,
    'color_caption' => '80, 80, 80, 0.75',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['controlsfieldset'] = array(
    'controls' => 0,
    'nextText' => '',
    'prevText' => '',
    'startText' => '',
    'stopText' => '',
    'autoControls' => 0,
    'autoControlsCombine' => 0,
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['pagerfieldset'] = array(
    'pager' => 1,
    'pagerType' => 'full',
    'pagerShortSeparator' => ' / ',
    'pagerCustom' => '',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['autofieldset'] = array(
    'pause' => '4000',
    'autoStart' => 1,
    'auto' => 0,
    'autoHover' => '0',
    'autoDelay' => '0',
    'autoDirection' => 'next',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['carousel'] = array(
    'minSlides' => '1',
    'maxSlides' => '1',
    'moveSlides' => '0',
    'slideWidth' => '0',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['callback'] = array(
    'onSliderLoad' => '',
    'onSlideBefore' => '',
    'onSlideAfter' => '',
    'onSlideNext' => '',
    'onSlidePrev' => '',
  );
  $handler->display->display_options['style_options']['slideshow_type'] = 'bxslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
    'body' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
    'body' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepageslider',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'slider';
  $export['home_featured_slider'] = $view;

  $view = new view();
  $view->name = 'home_page_featured_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Home page featured slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home page featured slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Field collection item: Target */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['label'] = '';
  $handler->display->display_options['fields']['field_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['type'] = 'list_key';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_title']['alter']['target'] = '_[field_target]';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Call for Action */
  $handler->display->display_options['fields']['field_call_for_action']['id'] = 'field_call_for_action';
  $handler->display->display_options['fields']['field_call_for_action']['table'] = 'field_data_field_call_for_action';
  $handler->display->display_options['fields']['field_call_for_action']['field'] = 'field_call_for_action';
  $handler->display->display_options['fields']['field_call_for_action']['label'] = '';
  $handler->display->display_options['fields']['field_call_for_action']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_for_action']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Category */
  $handler->display->display_options['fields']['field_slider_category']['id'] = 'field_slider_category';
  $handler->display->display_options['fields']['field_slider_category']['table'] = 'field_data_field_slider_category';
  $handler->display->display_options['fields']['field_slider_category']['field'] = 'field_slider_category';
  $handler->display->display_options['fields']['field_slider_category']['label'] = '';
  $handler->display->display_options['fields']['field_slider_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_category']['element_label_colon'] = FALSE;
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'homepageslider',
    'image_link' => '',
  );
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide-image">[field_banner_image]</div>
<div class="title-with-body"><h4><span>[field_slider_category]</h4></span> <div class="slide-title">[field_title] [field_call_for_action]</div>
<div class="slide-body">[field_description]</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_featured_slider_content' => 'field_featured_slider_content',
  );

  /* Display: Slider */
  $handler = $view->new_display('block', 'Slider', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Link2 */
  $handler->display->display_options['fields']['field_link2']['id'] = 'field_link2';
  $handler->display->display_options['fields']['field_link2']['table'] = 'field_data_field_link2';
  $handler->display->display_options['fields']['field_link2']['field'] = 'field_link2';
  $handler->display->display_options['fields']['field_link2']['label'] = '';
  $handler->display->display_options['fields']['field_link2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link2']['type'] = 'link_plain';
  /* Field: Field collection item: Target */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['label'] = '';
  $handler->display->display_options['fields']['field_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['type'] = 'list_key';
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['alter']['path'] = '[field_link2]';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'homepageslider',
    'image_link' => '',
  );

  /* Display: Thumbnail */
  $handler = $view->new_display('block', 'Thumbnail', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'thumb';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Category */
  $handler->display->display_options['fields']['field_slider_category']['id'] = 'field_slider_category';
  $handler->display->display_options['fields']['field_slider_category']['table'] = 'field_data_field_slider_category';
  $handler->display->display_options['fields']['field_slider_category']['field'] = 'field_slider_category';
  $handler->display->display_options['fields']['field_slider_category']['label'] = '';
  $handler->display->display_options['fields']['field_slider_category']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $export['home_page_featured_slider'] = $view;

  $view = new view();
  $view->name = 'hrm_awards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Awards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM Awards';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Event Partners (field_event_partners) */
  $handler->display->display_options['relationships']['field_event_partners_nid']['id'] = 'field_event_partners_nid';
  $handler->display->display_options['relationships']['field_event_partners_nid']['table'] = 'field_data_field_event_partners';
  $handler->display->display_options['relationships']['field_event_partners_nid']['field'] = 'field_event_partners_nid';
  $handler->display->display_options['relationships']['field_event_partners_nid']['delta'] = '-1';
  /* Relationship: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['delta'] = '-1';
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['relationship'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Find Out More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '
<div class="awarddesc">[field_date_congress] [field_congress_description] </div>
<div class="awardlink clearfix">
<ul>
<li><a href="node/[nid]/register"> Nominate Now</a></li>
<li> [view_node]</li>
</ul>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_sponsor']['id'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['table'] = 'field_data_field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['field'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['label'] = 'Title Sponsor';
  $handler->display->display_options['fields']['field_sponsor']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sponsor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor']['separator'] = '';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_event_partners_nid';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Event Partners';
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    32 => '32',
  );
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'award-summit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['relationship'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Find Out More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="awardyear"><img src="/sites/all/themes/hrmasia/images/hrm-2015.png" /></div>
<div class="awarddesc">[field_date_congress] [field_congress_description] </div>
<div class="awardlink clearfix">
<ul>
<li><a href="http://www.tfaforms.com/350403" target="_blank">Book your seat/table(s)</a></li>
<li><a href="http://www.hrmawards.com" target="_blank">Find out more</a></li>
</ul>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_event_partners_nid';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Event Partners';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'hrm-awards';
  $export['hrm_awards'] = $view;

  $view = new view();
  $view->name = 'hrm_clinic';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Clinic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest HRM Clinic';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Answer */
  $handler->display->display_options['fields']['field_answer']['id'] = 'field_answer';
  $handler->display->display_options['fields']['field_answer']['table'] = 'field_data_field_answer';
  $handler->display->display_options['fields']['field_answer']['field'] = 'field_answer';
  $handler->display->display_options['fields']['field_answer']['label'] = '';
  $handler->display->display_options['fields']['field_answer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_answer']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_answer']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_answer']['alter']['more_link_path'] = 'more';
  $handler->display->display_options['fields']['field_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_answer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_answer']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clinic-wrapper">
	<div class="clinic-title">[title]</div>
	<div class="clinic-detail">Posted by [name] [created]</div>
	<div class="clinic-answer">[field_answer]</div>
	<!--<div class="clinic-more">[view_node]</div>-->
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_clinic' => 'hrm_clinic',
  );

  /* Display: HRM Clinic */
  $handler = $view->new_display('page', 'HRM Clinic', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HR Clinic';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
drupal_add_js(drupal_get_path(\'theme\', \'hrmasia\') .\'/js/readmore.min.js\', \'file\');
?>
<script>
jQuery( document ).ready(function() {
	jQuery(\'.clinic-answer\').readmore({
	  speed: 75,
	  maxHeight: 60
	});
});
</script>';
  $handler->display->display_options['path'] = 'hrm-clinic';

  /* Display: Latest HRM Clinic */
  $handler = $view->new_display('block', 'Latest HRM Clinic', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HR CLINIC';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
drupal_add_js(drupal_get_path(\'theme\', \'hrmasia\') .\'/js/readmore.min.js\', \'file\');
?>
<script>
jQuery( document ).ready(function() {
	jQuery(\'.clinic-answer\').readmore({
	  speed: 75,
	  maxHeight: 60
	});
});
</script>
<style>
#block-views-hrm-clinic-block-1 h2.title { display:none; }
</style>
<a href="/hrm-clinic"><img src="/sites/all/themes/hrmasia/images/HR-Clinic-Logo.jpg" border="0" style="width:50%;"/></a>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<a href="mailto:hrclinic@hrmasia.com.sg" style="background: #adcc37;border: none;color: white;text-transform: uppercase;-webkit-border-radius: 4px;-moz-border-radius: 4px;border-radius: 4px;cursor: pointer;padding: 7px 15px 4px 15px;font-family: \'Ubuntu\', Arial, serif;font-weight: 700;float: left;">HAVE A QUESTION? SEND IT TO US</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Answer */
  $handler->display->display_options['fields']['field_answer']['id'] = 'field_answer';
  $handler->display->display_options['fields']['field_answer']['table'] = 'field_data_field_answer';
  $handler->display->display_options['fields']['field_answer']['field'] = 'field_answer';
  $handler->display->display_options['fields']['field_answer']['label'] = '';
  $handler->display->display_options['fields']['field_answer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_answer']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_answer']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_answer']['alter']['more_link_path'] = 'more';
  $handler->display->display_options['fields']['field_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_answer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_answer']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clinic-wrapper">
	<div class="clinic-title"><a href="/hrm-clinic">[title]</a></div>
	<div class="clinic-detail">Posted by [name] [created]</div>
	<div class="clinic-answer">[field_answer]</div>
	<!--<div class="clinic-more">[view_node]</div>-->
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Latest HRM Clinic';
  $export['hrm_clinic'] = $view;

  $view = new view();
  $view->name = 'hrm_congress';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Congress';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'homepage-blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepage_image',
    'image_link' => 'content',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'block-content-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Us Email */
  $handler->display->display_options['fields']['field_contact_us_email']['id'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['table'] = 'field_data_field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['field'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['label'] = '';
  $handler->display->display_options['fields']['field_contact_us_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_email']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="block-content-title">[title]</div>
<div class="post-date">[field_date_congress]</div>
<div class="block-body">[field_congress_description]</div>
<div class="block-email">[field_contact_us_email]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Congress Date -  start date (field_date_congress) */
  $handler->display->display_options['sorts']['field_date_congress_value']['id'] = 'field_date_congress_value';
  $handler->display->display_options['sorts']['field_date_congress_value']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['sorts']['field_date_congress_value']['field'] = 'field_date_congress_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Content: Congress Date -  start date (field_date_congress) */
  $handler->display->display_options['filters']['field_date_congress_value']['id'] = 'field_date_congress_value';
  $handler->display->display_options['filters']['field_date_congress_value']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['filters']['field_date_congress_value']['field'] = 'field_date_congress_value';
  $handler->display->display_options['filters']['field_date_congress_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_congress_value']['default_date'] = 'now';
  $export['hrm_congress'] = $view;

  $view = new view();
  $view->name = 'hrm_covers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Covers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM Covers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'subscribe_618x236_',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_page_carousel' => 'user_page_carousel',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['hrm_covers'] = $view;

  $view = new view();
  $view->name = 'hrm_event_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Event List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_events' => 'hrm_events',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: HRM events type */
  $handler->display->display_options['fields']['field_hrm_events_type']['id'] = 'field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['field'] = 'field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['label'] = '';
  $handler->display->display_options['fields']['field_hrm_events_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrm_events_type']['type'] = 'node_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    526 => '526',
  );
  $handler->display->display_options['path'] = 'events';

  /* Display: awards */
  $handler = $view->new_display('block', 'awards', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: HRM events type */
  $handler->display->display_options['fields']['field_hrm_events_type']['id'] = 'field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['field'] = 'field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['label'] = '';
  $handler->display->display_options['fields']['field_hrm_events_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrm_events_type']['type'] = 'node_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    32 => '32',
  );
  $handler->display->display_options['block_description'] = 'Awards';

  /* Display: HRM summit */
  $handler = $view->new_display('block', 'HRM summit', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: HRM events type */
  $handler->display->display_options['fields']['field_hrm_events_type']['id'] = 'field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['field'] = 'field_hrm_events_type';
  $handler->display->display_options['fields']['field_hrm_events_type']['label'] = '';
  $handler->display->display_options['fields']['field_hrm_events_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrm_events_type']['type'] = 'node_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['block_description'] = 'HRM submit';
  $export['hrm_event_list'] = $view;

  $view = new view();
  $view->name = 'hrm_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Events Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'homepage-blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div><img src="/sites/default/files/field/image/hrmevents.png" /> </div>
<div class="block-content-title">Lorem Ipsum dolor sit amet </div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_events' => 'hrm_events',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['hrm_events'] = $view;

  $view = new view();
  $view->name = 'hrm_events_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: URL (Internal Use only) */
  $handler->display->display_options['fields']['field_url_internal_use_only_']['id'] = 'field_url_internal_use_only_';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['table'] = 'field_data_field_url_internal_use_only_';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['field'] = 'field_url_internal_use_only_';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['label'] = '';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_internal_use_only_']['element_label_colon'] = FALSE;
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['alter']['path'] = '[field_url_internal_use_only_]';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url_internal_use_only_]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  /* Sort criterion: Content: Congress Date -  start date (field_date_congress) */
  $handler->display->display_options['sorts']['field_date_congress_value']['id'] = 'field_date_congress_value';
  $handler->display->display_options['sorts']['field_date_congress_value']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['sorts']['field_date_congress_value']['field'] = 'field_date_congress_value';
  $handler->display->display_options['sorts']['field_date_congress_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_events' => 'hrm_events',
  );

  /* Display: Main Event Page */
  $handler = $view->new_display('page', 'Main Event Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL (Internal Use only) */
  $handler->display->display_options['fields']['field_url_internal_use_only_']['id'] = 'field_url_internal_use_only_';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['table'] = 'field_data_field_url_internal_use_only_';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['field'] = 'field_url_internal_use_only_';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['label'] = '';
  $handler->display->display_options['fields']['field_url_internal_use_only_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_internal_use_only_']['element_label_colon'] = FALSE;
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['alter']['path'] = '[field_url_internal_use_only_]';
  $handler->display->display_options['fields']['field_banner_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url_internal_use_only_]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print views_embed_view(\'hrm_events_list\',\'block_1\',$data->nid);  ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'hrm-events';

  /* Display: Grouped Congresss Event */
  $handler = $view->new_display('block', 'Grouped Congresss Event', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url_internal_use_only_]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_date_congress] - [field_date_congress_1], [field_congress_description]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrm_events_type_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  /* Filter criterion: Content: Congress Date -  start date (field_date_congress) */
  $handler->display->display_options['filters']['field_date_congress_value']['id'] = 'field_date_congress_value';
  $handler->display->display_options['filters']['field_date_congress_value']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['filters']['field_date_congress_value']['field'] = 'field_date_congress_value';
  $handler->display->display_options['filters']['field_date_congress_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_congress_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_congress_value']['default_date'] = 'now';
  $export['hrm_events_list'] = $view;

  $view = new view();
  $view->name = 'hrm_summits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM_Summits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HR Summit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Event Partners (field_event_partners) */
  $handler->display->display_options['relationships']['field_event_partners_nid']['id'] = 'field_event_partners_nid';
  $handler->display->display_options['relationships']['field_event_partners_nid']['table'] = 'field_data_field_event_partners';
  $handler->display->display_options['relationships']['field_event_partners_nid']['field'] = 'field_event_partners_nid';
  $handler->display->display_options['relationships']['field_event_partners_nid']['delta'] = '-1';
  /* Relationship: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['relationships']['field_hrm_events_type_nid']['delta'] = '-1';
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['relationship'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Find Out More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="awardyear">[field_banner_image]</div> 
<div class="awarddesc">[field_date_congress] [field_congress_description] </div>
<div class="awardlink clearfix">
<ul>
<li><a href="node/[nid]/register"> Nominate Now</a></li>
<li> [view_node]</li>
</ul>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_sponsor']['id'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['table'] = 'field_data_field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['field'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['label'] = 'Title Sponsor';
  $handler->display->display_options['fields']['field_sponsor']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sponsor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor']['separator'] = '';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_event_partners_nid';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Event Partners';
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: HRM events type (field_hrm_events_type) */
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['id'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['table'] = 'field_data_field_hrm_events_type';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['field'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['field_hrm_events_type_nid']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'award-summit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['relationship'] = 'field_hrm_events_type_nid';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress']['id'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Date */
  $handler->display->display_options['fields']['field_date_congress_1']['id'] = 'field_date_congress_1';
  $handler->display->display_options['fields']['field_date_congress_1']['table'] = 'field_data_field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['field'] = 'field_date_congress';
  $handler->display->display_options['fields']['field_date_congress_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_congress_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_congress_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_congress_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Congress Description */
  $handler->display->display_options['fields']['field_congress_description']['id'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['table'] = 'field_data_field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['field'] = 'field_congress_description';
  $handler->display->display_options['fields']['field_congress_description']['label'] = '';
  $handler->display->display_options['fields']['field_congress_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_congress_description']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Find Out More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="awardyear"><img src="http://www.hrmasia.com/sites/default/files/hrm-2015_new2.png"></div>
<div class="awarddesc">19 & 20 May 2015 | Suntec Singapore Convention & Exhibition Centre </div>
<div class="awardlink clearfix">
<ul>
<li><a href="http://www.hrsummit.com.sg" target="_blank">Find out more</a></li>
</ul>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_sponsor']['id'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['table'] = 'field_data_field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['field'] = 'field_sponsor';
  $handler->display->display_options['fields']['field_sponsor']['label'] = 'Title Sponsor';
  $handler->display->display_options['fields']['field_sponsor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sponsor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor']['separator'] = '';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_event_partners_nid';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Event Partners';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'hrm-summit';
  $export['hrm_summits'] = $view;

  $view = new view();
  $view->name = 'hrm_tv';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM TV';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM TV';
  $handler->display->display_options['css_class'] = 'homepage-blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_tv' => 'hrm_tv',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video code */
  $handler->display->display_options['fields']['field_video_code']['id'] = 'field_video_code';
  $handler->display->display_options['fields']['field_video_code']['table'] = 'field_data_field_video_code';
  $handler->display->display_options['fields']['field_video_code']['field'] = 'field_video_code';
  $handler->display->display_options['fields']['field_video_code']['label'] = '';
  $handler->display->display_options['fields']['field_video_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_code']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepage_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'block-content-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_tv_date']['id'] = 'field_tv_date';
  $handler->display->display_options['fields']['field_tv_date']['table'] = 'field_data_field_tv_date';
  $handler->display->display_options['fields']['field_tv_date']['field'] = 'field_tv_date';
  $handler->display->display_options['fields']['field_tv_date']['label'] = '';
  $handler->display->display_options['fields']['field_tv_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tv_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tv_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="block-content-title">[title]</div>
<div class="post-date">[field_tv_date]</div>
<div class="block-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['hrm_tv'] = $view;

  $view = new view();
  $view->name = 'hrm_tv_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM TV List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM TV';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_tv' => 'hrm_tv',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list view-news-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video code */
  $handler->display->display_options['fields']['field_video_code']['id'] = 'field_video_code';
  $handler->display->display_options['fields']['field_video_code']['table'] = 'field_data_field_video_code';
  $handler->display->display_options['fields']['field_video_code']['field'] = 'field_video_code';
  $handler->display->display_options['fields']['field_video_code']['label'] = '';
  $handler->display->display_options['fields']['field_video_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_tv_date) */
  $handler->display->display_options['sorts']['field_tv_date_value']['id'] = 'field_tv_date_value';
  $handler->display->display_options['sorts']['field_tv_date_value']['table'] = 'field_data_field_tv_date';
  $handler->display->display_options['sorts']['field_tv_date_value']['field'] = 'field_tv_date_value';
  $handler->display->display_options['sorts']['field_tv_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_tv' => 'hrm_tv',
  );
  $handler->display->display_options['path'] = 'hrmtv';

  /* Display: Latest hrmtv */
  $handler = $view->new_display('block', 'Latest hrmtv', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video code */
  $handler->display->display_options['fields']['field_video_code']['id'] = 'field_video_code';
  $handler->display->display_options['fields']['field_video_code']['table'] = 'field_data_field_video_code';
  $handler->display->display_options['fields']['field_video_code']['field'] = 'field_video_code';
  $handler->display->display_options['fields']['field_video_code']['label'] = '';
  $handler->display->display_options['fields']['field_video_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="theme2 themeblock">
<h2 class="title"><span>HRM TV</span></h2>
<div class="news-bottom clearfix">
<div class="news-video">[field_video_code] </div>
<h1 class="title">[title]</h1>
<div class="">[body]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['hrm_tv_list'] = $view;

  $view = new view();
  $view->name = 'jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="post-jobs">
<?php 
if(user_access(\'Jobs: Create new content\'))
{
  print l(\'Post a job >\',\'node/add/jobs\');
} 
?>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['jobs'] = $view;

  $view = new view();
  $view->name = 'jobs_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Company (field_company_ref) */
  $handler->display->display_options['relationships']['field_company_ref_nid']['id'] = 'field_company_ref_nid';
  $handler->display->display_options['relationships']['field_company_ref_nid']['table'] = 'field_data_field_company_ref';
  $handler->display->display_options['relationships']['field_company_ref_nid']['field'] = 'field_company_ref_nid';
  $handler->display->display_options['relationships']['field_company_ref_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
	if(isset($_GET[\'page\'])) 
	{
		$pagehead = $_GET[\'page\'];
	}
	if (empty($pagehead)) {
		print views_embed_view(\'jobs_list\',\'block_2\'); 
	}
?>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.view-jobs-list.view-display-id-block_2 .view-filters { display : none;}
.view-jobs-list.view-display-id-page .views-row.enhance {
	/*padding: 15px 0;*/
        background: #f7eee7;
        padding: 15px 2.5%;
}
.view-jobs-list.view-display-id-page .views-row.enhance .views-field-views-conditional {
	padding: 15px 2.5%;
	background: #f7eee7;
}
</style>
<script type="text/javascript">
//jQuery(document).ready(function () {
//	jQuery(\'.view-jobs-list.view-display-id-page .views-row\').each(function() {
//		var enhance = jQuery(this).find(\'.enhance-premium-jobs\').length;
//		if ( enhance > 0 ) {
//			jQuery(this).addClass(\'enhance\');
//		}
//	});
//});
</script>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
print views_embed_view(\'jobs_list\',\'block_2\'); 
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<center><p>No Result Found.</p></center>
<script type="text/javascript">
//jQuery(document).ready(function () {
//	if ( location.href.substr(location.href.search("\\\\?")).split("&")[1].split("=")[0] !== "title_pre") {
//		if ( location.href.substr(location.href.search("\\\\?")).split("=")[0].split("?")[1] == "title") {
//			var search = location.href.substr(location.href.search("\\\\?")).split("=")[1].split("&")[0];
//			console.log(search);
//			window.location.search = \'title=\' + search + \'&title_pre=\' + search;
//		}
//	}
//});
</script>
<style>
.view-jobs-list.view-display-id-block_2 .view-filters { display : none;}
</style>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Company (field_company_ref) */
  $handler->display->display_options['relationships']['field_company_ref_nid']['id'] = 'field_company_ref_nid';
  $handler->display->display_options['relationships']['field_company_ref_nid']['table'] = 'field_data_field_company_ref';
  $handler->display->display_options['relationships']['field_company_ref_nid']['field'] = 'field_company_ref_nid';
  $handler->display->display_options['relationships']['field_company_ref_nid']['delta'] = '-1';
  /* Relationship: Field: Featured Image (field_image:fid) */
  $handler->display->display_options['relationships']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['relationships']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['relationship'] = 'field_company_ref_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_company_ref_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Job Summary */
  $handler->display->display_options['fields']['field_job_summary']['id'] = 'field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['table'] = 'field_data_field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['field'] = 'field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['label'] = '';
  $handler->display->display_options['fields']['field_job_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = '';
  $handler->display->display_options['fields']['field_posted_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Point1 */
  $handler->display->display_options['fields']['field_point1']['id'] = 'field_point1';
  $handler->display->display_options['fields']['field_point1']['table'] = 'field_data_field_point1';
  $handler->display->display_options['fields']['field_point1']['field'] = 'field_point1';
  $handler->display->display_options['fields']['field_point1']['label'] = '';
  $handler->display->display_options['fields']['field_point1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_point1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_point1']['alter']['text'] = '<br/>
- [field_point1-value] ';
  $handler->display->display_options['fields']['field_point1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_point1']['hide_empty'] = TRUE;
  /* Field: Content: Point2 */
  $handler->display->display_options['fields']['field_point2']['id'] = 'field_point2';
  $handler->display->display_options['fields']['field_point2']['table'] = 'field_data_field_point2';
  $handler->display->display_options['fields']['field_point2']['field'] = 'field_point2';
  $handler->display->display_options['fields']['field_point2']['label'] = '';
  $handler->display->display_options['fields']['field_point2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_point2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_point2']['alter']['text'] = '<br/>
- [field_point2-value]';
  $handler->display->display_options['fields']['field_point2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_point2']['hide_empty'] = TRUE;
  /* Field: Content: Point3 */
  $handler->display->display_options['fields']['field_point3']['id'] = 'field_point3';
  $handler->display->display_options['fields']['field_point3']['table'] = 'field_data_field_point3';
  $handler->display->display_options['fields']['field_point3']['field'] = 'field_point3';
  $handler->display->display_options['fields']['field_point3']['label'] = '';
  $handler->display->display_options['fields']['field_point3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_point3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_point3']['alter']['text'] = '<br/>
- [field_point3-value]';
  $handler->display->display_options['fields']['field_point3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_point3']['hide_empty'] = TRUE;
  /* Field: Content: Jobs premium type */
  $handler->display->display_options['fields']['field_jobs_premium_type']['id'] = 'field_jobs_premium_type';
  $handler->display->display_options['fields']['field_jobs_premium_type']['table'] = 'field_data_field_jobs_premium_type';
  $handler->display->display_options['fields']['field_jobs_premium_type']['field'] = 'field_jobs_premium_type';
  $handler->display->display_options['fields']['field_jobs_premium_type']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_premium_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_premium_type']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_jobs_premium_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_premium_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if ($data->field_field_jobs_premium_type[0][\'rendered\'][\'#markup\']==\'Enhanced premium jobs\'){
	if (strtotime($data->field_field_posted_date[0][\'raw\'][\'value\']) + (7 * 24 * 60 * 60) <= time()) {
		echo \'
		<div class="enhance-premium-jobs" style="background: #f7eee7;padding: 15px 2.5%;">
		<div class="views-field-title"><a href="\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'.$data->node_title.\'</a></div>
		<div class="job-detail">\'.$data->field_field_posted_date[0][\'rendered\'][\'#markup\'].\' - \'.$data->field_field_company[0][\'rendered\'][\'#markup\'].\' - \'.$data->field_field_region[0][\'rendered\'][\'#markup\'].\'</div>
		<div class="job-bottom">
			<div class="job-left">\'.$data->field_field_job_summary[0][\'rendered\'][\'#markup\'];
		if (isset($data->field_field_point1[0][\'rendered\'][\'#markup\'])&&!empty($data->field_field_point1[0][\'rendered\'][\'#markup\'])){
			echo \'<br/>- \'.$data->field_field_point1[0][\'rendered\'][\'#markup\'];
		}
		if (isset($data->field_field_point2[0][\'rendered\'][\'#markup\'])&&!empty($data->field_field_point2[0][\'rendered\'][\'#markup\'])){
			echo \'<br/>- \'.$data->field_field_point2[0][\'rendered\'][\'#markup\'];
		}
		if (isset($data->field_field_point3[0][\'rendered\'][\'#markup\'])&&!empty($data->field_field_point3[0][\'rendered\'][\'#markup\'])){
			echo \'<br/>- \'.$data->field_field_point3[0][\'rendered\'][\'#markup\'];
		}
		echo \'
			</div>
			<div class="job-right"><img src="\'. image_style_url("thumbnail", $data->field_field_image[0][\'raw\'][\'uri\']) .\'" alt="" border="0"/></div>
		</div>
		</div>
		\';
	} else {
		echo \'<style>.custom-job-listing .views-row-\'. ($view->row_index+1) .\' { display:none; }</style>\';
	}
} else {
	echo \'
		<div class="premium-jobs">
		<div class="views-field-title"><a href="\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'.$data->node_title.\'</a></div>
		<div class="job-detail">\'.$data->field_field_posted_date[0][\'rendered\'][\'#markup\'].\' - \'.$data->field_field_company[0][\'rendered\'][\'#markup\'].\' - \'.$data->field_field_region[0][\'rendered\'][\'#markup\'].\'</div>
		<div class="job-bottom">\'.$data->field_field_job_summary[0][\'rendered\'][\'#markup\'].\'</div>
		</div>
	\';
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Posted Date -  start date (field_posted_date) */
  $handler->display->display_options['sorts']['field_posted_date_value']['id'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['sorts']['field_posted_date_value']['field'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Jobs premium type (field_jobs_premium_type) */
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['id'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['table'] = 'field_data_field_jobs_premium_type';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['field'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['value'] = array(
    321 => '321',
    316 => '316',
  );
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['expose']['operator_id'] = 'field_jobs_premium_type_tid_op';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['expose']['label'] = 'Jobs premium type (field_jobs_premium_type)';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['expose']['operator'] = 'field_jobs_premium_type_tid_op';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['expose']['identifier'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['vocabulary'] = 'jobs_premium_type';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_posted_date.field_posted_date_value2' => 'field_data_field_posted_date.field_posted_date_value2',
  );
  $handler->display->display_options['path'] = 'jobs';

  /* Display: Graduate Jobs */
  $handler = $view->new_display('page', 'Graduate Jobs', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Jobs for Fresh Graduates (field_jobs_for_fresh_graduates) */
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['id'] = 'field_jobs_for_fresh_graduates_value';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['table'] = 'field_data_field_jobs_for_fresh_graduates';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['field'] = 'field_jobs_for_fresh_graduates_value';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'graduate-jobs';

  /* Display: Non Graduate jobs */
  $handler = $view->new_display('page', 'Non Graduate jobs', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company_ref']['id'] = 'field_company_ref';
  $handler->display->display_options['fields']['field_company_ref']['table'] = 'field_data_field_company_ref';
  $handler->display->display_options['fields']['field_company_ref']['field'] = 'field_company_ref';
  $handler->display->display_options['fields']['field_company_ref']['label'] = '';
  $handler->display->display_options['fields']['field_company_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_company_ref']['alter']['text'] = '[field_date] - [field_company_ref]';
  $handler->display->display_options['fields']['field_company_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_ref']['type'] = 'node_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_company_ref_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'non-graduate-jobs';

  /* Display: Fresh Graduate Jobs Block */
  $handler = $view->new_display('block', 'Fresh Graduate Jobs Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fresh Graduate Jobs Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = ' ';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Jobs for Fresh Graduates (field_jobs_for_fresh_graduates) */
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['id'] = 'field_jobs_for_fresh_graduates_value';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['table'] = 'field_data_field_jobs_for_fresh_graduates';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['field'] = 'field_jobs_for_fresh_graduates_value';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['value'] = array(
    1 => '1',
  );

  /* Display: Enhance premium jobs */
  $handler = $view->new_display('block', 'Enhance premium jobs', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'enhance-jobs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Company (field_company_ref) */
  $handler->display->display_options['relationships']['field_company_ref_nid']['id'] = 'field_company_ref_nid';
  $handler->display->display_options['relationships']['field_company_ref_nid']['table'] = 'field_data_field_company_ref';
  $handler->display->display_options['relationships']['field_company_ref_nid']['field'] = 'field_company_ref_nid';
  $handler->display->display_options['relationships']['field_company_ref_nid']['delta'] = '-1';
  /* Relationship: Field: Featured Image (field_image:fid) */
  $handler->display->display_options['relationships']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['relationships']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['relationship'] = 'field_company_ref_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_company_ref_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = '';
  $handler->display->display_options['fields']['field_posted_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Job Summary */
  $handler->display->display_options['fields']['field_job_summary']['id'] = 'field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['table'] = 'field_data_field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['field'] = 'field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['label'] = '';
  $handler->display->display_options['fields']['field_job_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Point1 */
  $handler->display->display_options['fields']['field_point1']['id'] = 'field_point1';
  $handler->display->display_options['fields']['field_point1']['table'] = 'field_data_field_point1';
  $handler->display->display_options['fields']['field_point1']['field'] = 'field_point1';
  $handler->display->display_options['fields']['field_point1']['label'] = '';
  $handler->display->display_options['fields']['field_point1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_point1']['element_label_colon'] = FALSE;
  /* Field: Content: Point2 */
  $handler->display->display_options['fields']['field_point2']['id'] = 'field_point2';
  $handler->display->display_options['fields']['field_point2']['table'] = 'field_data_field_point2';
  $handler->display->display_options['fields']['field_point2']['field'] = 'field_point2';
  $handler->display->display_options['fields']['field_point2']['label'] = '';
  $handler->display->display_options['fields']['field_point2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_point2']['element_label_colon'] = FALSE;
  /* Field: Content: Point3 */
  $handler->display->display_options['fields']['field_point3']['id'] = 'field_point3';
  $handler->display->display_options['fields']['field_point3']['table'] = 'field_data_field_point3';
  $handler->display->display_options['fields']['field_point3']['field'] = 'field_point3';
  $handler->display->display_options['fields']['field_point3']['label'] = '';
  $handler->display->display_options['fields']['field_point3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_point3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="views-field-title">
	[title]
</div>
<div class="job-detail">
	[field_posted_date] - [field_company] - [field_region]
</div>
<div class="job-bottom">
	<div class="job-left">
		[field_job_summary]
		<br/>
		- [field_point1] 
		<br />
		- [field_point2] 
		<br />
		- [field_point3]
	</div>
	<div class="job-right">[field_image]</div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
	echo \'
		<div class="enhance-premium-jobs" style="background: #f7eee7;padding: 15px 2.5%;">
		<div class="views-field-title"><a href="\'. drupal_get_path_alias(\'node/\'.$data->nid) .\'">\'.$data->node_title.\'</a></div>
		<div class="job-detail">\'.$data->field_field_posted_date[0][\'rendered\'][\'#markup\'].\' - \'.$data->field_field_company[0][\'rendered\'][\'#markup\'].\' - \'.$data->field_field_region[0][\'rendered\'][\'#markup\'].\'</div>
		<div class="job-bottom">
			<div class="job-left">\'.$data->field_field_job_summary[0][\'rendered\'][\'#markup\'];
		if (isset($data->field_field_point1[0][\'rendered\'][\'#markup\'])&&!empty($data->field_field_point1[0][\'rendered\'][\'#markup\'])){
			echo \'<br/>- \'.$data->field_field_point1[0][\'rendered\'][\'#markup\'];
		}
		if (isset($data->field_field_point2[0][\'rendered\'][\'#markup\'])&&!empty($data->field_field_point2[0][\'rendered\'][\'#markup\'])){
			echo \'<br/>- \'.$data->field_field_point2[0][\'rendered\'][\'#markup\'];
		}
		if (isset($data->field_field_point3[0][\'rendered\'][\'#markup\'])&&!empty($data->field_field_point3[0][\'rendered\'][\'#markup\'])){
			echo \'<br/>- \'.$data->field_field_point3[0][\'rendered\'][\'#markup\'];
		}
		echo \'
			</div>
			<div class="job-right"><img src="\'. image_style_url("thumbnail", $data->field_field_image[0][\'raw\'][\'uri\']) .\'" alt="" border="0"/></div>
		</div>
		</div>
		\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Posted Date -  start date (field_posted_date) */
  $handler->display->display_options['sorts']['field_posted_date_value']['id'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['sorts']['field_posted_date_value']['field'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_region_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Region (field_region)';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
  );
  /* Filter criterion: Content: Jobs premium type (field_jobs_premium_type) */
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['id'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['table'] = 'field_data_field_jobs_premium_type';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['field'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['value'] = array(
    321 => '321',
  );
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['vocabulary'] = 'jobs_premium_type';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Date (node)';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['default_date'] = 'now - 7 day';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_posted_date.field_posted_date_value' => 'field_data_field_posted_date.field_posted_date_value',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date (node)';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_posted_date.field_posted_date_value2' => 'field_data_field_posted_date.field_posted_date_value2',
  );
  $handler->display->display_options['block_description'] = 'Enhance premium jobs';

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Jobs premium type (field_jobs_premium_type) */
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['id'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['table'] = 'field_data_field_jobs_premium_type';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['field'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['value'] = array(
    321 => '321',
    316 => '316',
  );
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['vocabulary'] = 'jobs_premium_type';
  $handler->display->display_options['filters']['field_jobs_premium_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Posted Date - end date (field_posted_date:value2) */
  $handler->display->display_options['filters']['field_posted_date_value2']['id'] = 'field_posted_date_value2';
  $handler->display->display_options['filters']['field_posted_date_value2']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['filters']['field_posted_date_value2']['field'] = 'field_posted_date_value2';
  $handler->display->display_options['filters']['field_posted_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_posted_date_value2']['default_date'] = 'now';

  /* Display: Updated Jobs Listing */
  $handler = $view->new_display('page', 'Updated Jobs Listing', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
print views_embed_view(\'jobs_list\',\'block_2\'); 
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<center><p>No Result Found.</p></center>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_company_ref_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Job Summary */
  $handler->display->display_options['fields']['field_job_summary']['id'] = 'field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['table'] = 'field_data_field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['field'] = 'field_job_summary';
  $handler->display->display_options['fields']['field_job_summary']['label'] = '';
  $handler->display->display_options['fields']['field_job_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = '';
  $handler->display->display_options['fields']['field_posted_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field-title">
	[title] 
</div>
<div class="job-detail">
	[field_posted_date] - [field_company] - [field_region]
</div>
<div class="job-bottom">
	[field_job_summary]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Jobs premium type */
  $handler->display->display_options['fields']['field_jobs_premium_type']['id'] = 'field_jobs_premium_type';
  $handler->display->display_options['fields']['field_jobs_premium_type']['table'] = 'field_data_field_jobs_premium_type';
  $handler->display->display_options['fields']['field_jobs_premium_type']['field'] = 'field_jobs_premium_type';
  $handler->display->display_options['fields']['field_jobs_premium_type']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_premium_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_premium_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Jobs premium type (field_jobs_premium_type) */
  $handler->display->display_options['sorts']['field_jobs_premium_type_tid']['id'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['sorts']['field_jobs_premium_type_tid']['table'] = 'field_data_field_jobs_premium_type';
  $handler->display->display_options['sorts']['field_jobs_premium_type_tid']['field'] = 'field_jobs_premium_type_tid';
  $handler->display->display_options['sorts']['field_jobs_premium_type_tid']['order'] = 'DESC';
  /* Sort criterion: Content: Posted Date -  start date (field_posted_date) */
  $handler->display->display_options['sorts']['field_posted_date_value']['id'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['sorts']['field_posted_date_value']['field'] = 'field_posted_date_value';
  $handler->display->display_options['sorts']['field_posted_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_posted_date.field_posted_date_value2' => 'field_data_field_posted_date.field_posted_date_value2',
  );
  $handler->display->display_options['path'] = 'jobs-new';
  $export['jobs_list'] = $view;

  $view = new view();
  $view->name = 'jobs_related';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs related';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jobs related';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Company (field_company_ref) */
  $handler->display->display_options['arguments']['field_company_ref_nid']['id'] = 'field_company_ref_nid';
  $handler->display->display_options['arguments']['field_company_ref_nid']['table'] = 'field_data_field_company_ref';
  $handler->display->display_options['arguments']['field_company_ref_nid']['field'] = 'field_company_ref_nid';
  $handler->display->display_options['arguments']['field_company_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_company_ref_nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_company_ref_nid']['default_argument_options']['code'] = 'if(arg(0)=="node")
{
	$nodedata = node_load(arg(1));
	return $nodedata->field_company_ref[\'und\'][0][\'nid\'];
}';
  $handler->display->display_options['arguments']['field_company_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_company_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_company_ref_nid']['summary_options']['items_per_page'] = '25';
  $export['jobs_related'] = $view;

  $view = new view();
  $view->name = 'latest_poll';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'latest poll';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'latest poll';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poll' => 'poll',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['latest_poll'] = $view;

  $view = new view();
  $view->name = 'my_community';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Myhrm Community section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Articles';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'select_preferences' => 'select_preferences',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'my_cummunity');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name]- [created]</div>
<div class="view-field-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_options']['code'] = 'global $user;
if($user->uid)
{
	$pref =  profile2_load_by_user($user->uid, \'select_preferences\') ;
	if(isset($pref->field_preferen[\'und\']))
    {
        foreach ($pref->field_preferen[\'und\'] as $pid) {
           $tid[] = $pid[\'tid\'];
        }
        return implode(\'+\', $tid);
    }
}';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_category_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_category_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'my-communities';

  /* Display: Myhrm Related Jobs */
  $handler = $view->new_display('block', 'Myhrm Related Jobs', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Myhrm Related Jobs';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  $view = views_get_current_view();
?>
<h2 class="title">
<span>Related Jobs</span>
</h2>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = '';
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: Related Events */
  $handler = $view->new_display('block', 'Related Events', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  $view = views_get_current_view();
?>
<h2 class="title">
<span>RELATED EVENTS <?php print \'( \'.$view->total_rows.  \')\';  ?></span>
</h2>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'normal';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
    'hrm_events' => 'hrm_events',
  );

  /* Display: Related Courses */
  $handler = $view->new_display('block', 'Related Courses', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  $view = views_get_current_view();
?>
<h2 class="title">
<span>RELATED COURSES</span>
</h2>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'choose_discussion_topic' => 'choose_discussion_topic',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_trainining_company']['id'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['table'] = 'field_data_field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['field'] = 'field_trainining_company';
  $handler->display->display_options['fields']['field_trainining_company']['label'] = '';
  $handler->display->display_options['fields']['field_trainining_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trainining_company']['type'] = 'node_reference_plain';
  /* Field: Content: Contact Us Email */
  $handler->display->display_options['fields']['field_contact_us_email']['id'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['table'] = 'field_data_field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['field'] = 'field_contact_us_email';
  $handler->display->display_options['fields']['field_contact_us_email']['label'] = 'Contact Detail';
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );

  /* Display: Forum Details */
  $handler = $view->new_display('block', 'Forum Details', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forum Details';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'rmspace-01';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print views_embed_view(\'user\', \'block\', $row->tid); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php print views_embed_view(\'tracker\', \'block_1\', $row->tid); ?><br>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: MyHRM Related Jobs */
  $handler = $view->new_display('block', 'MyHRM Related Jobs', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = '';
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date_1']['id'] = 'field_posted_date_1';
  $handler->display->display_options['fields']['field_posted_date_1']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date_1']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_posted_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date_1']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_forums_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'MyHRM Related Jobs';
  $export['my_community'] = $view;

  $view = new view();
  $view->name = 'myhrm_events_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Myhrm events listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'select_preferences' => 'select_preferences',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Profile: Select preferences (field_preferen) */
  $handler->display->display_options['arguments']['field_preferen_tid']['id'] = 'field_preferen_tid';
  $handler->display->display_options['arguments']['field_preferen_tid']['table'] = 'field_data_field_preferen';
  $handler->display->display_options['arguments']['field_preferen_tid']['field'] = 'field_preferen_tid';
  $handler->display->display_options['arguments']['field_preferen_tid']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_preferen_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_preferen_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_preferen_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_preferen_tid']['default_argument_options']['vocabularies'] = array(
    'article_category' => 'article_category',
  );
  $handler->display->display_options['arguments']['field_preferen_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_preferen_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_preferen_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_events' => 'hrm_events',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name]- [created]</div>
<div class="view-field-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_options']['code'] = 'global $user;
if($user->uid)
{
	$pref =  profile2_load_by_user($user->uid, \'select_preferences\') ;
	if(isset($pref->field_preferen[\'und\']))
    {
        foreach ($pref->field_preferen[\'und\'] as $pid) {
           $tid[] = $pid[\'tid\'];
        }
        return implode(\'+\', $tid);
    }
}';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_category_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_category_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
    'hrm_events' => 'hrm_events',
  );
  $handler->display->display_options['path'] = 'myhrm-event-listing';
  $export['myhrm_events_listing'] = $view;

  $view = new view();
  $view->name = 'news_home_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news home page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'detail-news';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_big',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'detail-news';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'homepage_image',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_class'] = 'post-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_news_summary']['id'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['table'] = 'field_data_field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['field'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['label'] = '';
  $handler->display->display_options['fields']['field_news_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';

  /* Display: home page news 2 */
  $handler = $view->new_display('block', 'home page news 2', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'news_home_page:block';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.img-responsive-home-news {
	width: 136px;
	height: 114px;
	float: left;
	margin-right: 20px;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_small',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive-home-news';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_news_summary']['id'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['table'] = 'field_data_field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['field'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['label'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $export['news_home_page'] = $view;

  $view = new view();
  $view->name = 'news_jobs_rss_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Jobs RSS FEED';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
    'article' => 'article',
    'hrm_events' => 'hrm_events',
    'hrm_tv' => 'hrm_tv',
    'jobs' => 'jobs',
    'news' => 'news',
    'training_courses' => 'training_courses',
  );

  /* Display: Feed 2 */
  $handler = $view->new_display('feed', 'Feed 2', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'rssfeed.xml';
  $export['news_jobs_rss_feed'] = $view;

  $view = new view();
  $view->name = 'news_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['row_classes'] = 'views-row news-first-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'news_list:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'normal',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_news_summary']['id'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['table'] = 'field_data_field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['field'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['label'] = '';
  $handler->display->display_options['fields']['field_news_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[name] - [field_date]</div>
<div class="view-field-body">[field_news_summary]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'news';

  /* Display: First News */
  $handler = $view->new_display('block', 'First News', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => 'content',
  );
  /* Field: Content: Featured Image Listing */
  $handler->display->display_options['fields']['field_featured_image_listing']['id'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['table'] = 'field_data_field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['field'] = 'field_featured_image_listing';
  $handler->display->display_options['fields']['field_featured_image_listing']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image_listing']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_featured_image_listing']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image_listing']['settings'] = array(
    'image_style' => 'list_top_scetion_340x240_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_news_summary']['id'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['table'] = 'field_data_field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['field'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['label'] = '';
  $handler->display->display_options['fields']['field_news_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-bottom clearfix">
<div class="news-image">[field_featured_image_listing]</div>
<h1 class="title">[title]</h1>
<div class="">[field_news_summary]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $export['news_list'] = $view;

  $view = new view();
  $view->name = 'partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PARTNERS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'carousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'partners_small',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partners' => 'partners',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['partners'] = $view;

  $view = new view();
  $view->name = 'preference_test_aricle_post';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Myhrm featured articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'select_preferences' => 'select_preferences',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Profile: Select preferences (field_preferen) */
  $handler->display->display_options['arguments']['field_preferen_tid']['id'] = 'field_preferen_tid';
  $handler->display->display_options['arguments']['field_preferen_tid']['table'] = 'field_data_field_preferen';
  $handler->display->display_options['arguments']['field_preferen_tid']['field'] = 'field_preferen_tid';
  $handler->display->display_options['arguments']['field_preferen_tid']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_preferen_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_preferen_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_preferen_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_preferen_tid']['default_argument_options']['vocabularies'] = array(
    'article_category' => 'article_category',
  );
  $handler->display->display_options['arguments']['field_preferen_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_preferen_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_preferen_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_223x181_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'normal';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="view-field-title">[title]</div>
<div class="created">[field_author_name]- [created]</div>
<div class="view-field-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_options']['code'] = 'global $user;
if($user->uid)
{
	$pref =  profile2_load_by_user($user->uid, \'select_preferences\') ;
	if(isset($pref->field_preferen[\'und\']))
    {
        foreach ($pref->field_preferen[\'und\'] as $pid) {
           $tid[] = $pid[\'tid\'];
        }
        return implode(\'+\', $tid);
    }
}';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_category_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_category_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'myhrm-featured-articles';
  $export['preference_test_aricle_post'] = $view;

  $view = new view();
  $view->name = 'related_jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Company (field_company_ref) */
  $handler->display->display_options['arguments']['field_company_ref_nid']['id'] = 'field_company_ref_nid';
  $handler->display->display_options['arguments']['field_company_ref_nid']['table'] = 'field_data_field_company_ref';
  $handler->display->display_options['arguments']['field_company_ref_nid']['field'] = 'field_company_ref_nid';
  $handler->display->display_options['arguments']['field_company_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_company_ref_nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_company_ref_nid']['default_argument_options']['code'] = 'if(arg(0)=="node")
{
	$nodedata = node_load(arg(1));
	return $nodedata->field_company_ref[\'und\'][0][\'nid\'];
}
';
  $handler->display->display_options['arguments']['field_company_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_company_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_company_ref_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Jobs';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Filter by Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Jobs for Fresh Graduates (field_jobs_for_fresh_graduates) */
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['id'] = 'field_jobs_for_fresh_graduates_value';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['table'] = 'field_data_field_jobs_for_fresh_graduates';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['field'] = 'field_jobs_for_fresh_graduates_value';
  $handler->display->display_options['filters']['field_jobs_for_fresh_graduates_value']['value'] = array(
    0 => '0',
  );

  /* Display: Related Jobs */
  $handler = $view->new_display('block', 'Related Jobs', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Related jobs';
  $export['related_jobs'] = $view;

  $view = new view();
  $view->name = 'related_post';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Post';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Jobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['general'] = array(
    'mode' => 'horizontal',
    'speed' => '500',
    'slideMargin' => '0',
    'startSlide' => '0',
    'randomStart' => 0,
    'infiniteLoop' => 1,
    'hideControlOnEnd' => 0,
    'captions' => 0,
    'ticker' => 0,
    'tickerHover' => 0,
    'adaptiveHeight' => 0,
    'adaptiveHeightSpeed' => '500',
    'video' => 0,
    'touchEnabled' => 1,
    'preloadImages' => 'all',
    'disable_standard_css' => 0,
    'useCSS' => 1,
    'align_image' => 'left',
    'align_caption' => 'left',
    'swipeThreshold' => '50',
    'oneToOneTouch' => 1,
    'preventDefaultSwipeX' => 1,
    'preventDefaultSwipeY' => 0,
    'color_caption' => '80, 80, 80, 0.75',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['controlsfieldset'] = array(
    'controls' => 1,
    'nextText' => 'next',
    'prevText' => 'pre',
    'startText' => '',
    'stopText' => '',
    'autoControls' => 0,
    'autoControlsCombine' => 0,
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['pagerfieldset'] = array(
    'pager' => 0,
    'pagerType' => 'full',
    'pagerShortSeparator' => ' / ',
    'pagerCustom' => '',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['autofieldset'] = array(
    'pause' => '4000',
    'autoStart' => 1,
    'auto' => 0,
    'autoHover' => '0',
    'autoDelay' => '0',
    'autoDirection' => 'next',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['carousel'] = array(
    'minSlides' => '1',
    'maxSlides' => '1',
    'moveSlides' => '0',
    'slideWidth' => '0',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['callback'] = array(
    'onSliderLoad' => '',
    'onSlideBefore' => '',
    'onSlideAfter' => '',
    'onSlideNext' => '',
    'onSlidePrev' => '',
  );
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'related_post';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'related_articles',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_image] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_events' => 'hrm_events',
  );

  /* Display: Related Articles */
  $handler = $view->new_display('block', 'Related Articles', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_options']['code'] = 'return TRUE;';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Related HRM TV */
  $handler = $view->new_display('block', 'Related HRM TV', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related HRM TV';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_tv' => 'hrm_tv',
  );

  /* Display: Related News */
  $handler = $view->new_display('block', 'Related News', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Tags (field_tags) */
  $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_tags_tid']['default_argument_options']['code'] = 'return TRUE;';
  $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Related Jobs */
  $handler = $view->new_display('block', 'Related Jobs', 'block_3');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: HRM Congress */
  $handler = $view->new_display('block', 'HRM Congress', 'block_4');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_congress' => 'hrm_congress',
  );

  /* Display: HRM Events */
  $handler = $view->new_display('block', 'HRM Events', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HRM Events';
  $export['related_post'] = $view;

  $view = new view();
  $view->name = 'test_features';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Test Features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Features Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sub_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_category' => 'field_category',
    'field_sub_category' => 'field_sub_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sub_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  /* Field: Content: Sub Category */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/test-features';
  $export['test_features'] = $view;

  $view = new view();
  $view->name = 'training_courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Training Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_courses' => 'training_courses',
  );
  /* Filter criterion: Content: Course type (field_course_type) */
  $handler->display->display_options['filters']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['filters']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['filters']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['filters']['field_course_type_tid']['value'] = array(
    181 => '181',
    201 => '201',
    171 => '171',
    241 => '241',
    206 => '206',
    191 => '191',
    186 => '186',
    156 => '156',
    166 => '166',
    216 => '216',
    176 => '176',
    226 => '226',
    211 => '211',
    251 => '251',
    196 => '196',
    221 => '221',
    236 => '236',
    246 => '246',
    231 => '231',
    161 => '161',
  );
  $handler->display->display_options['filters']['field_course_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_type_tid']['expose']['operator_id'] = 'field_course_type_tid_op';
  $handler->display->display_options['filters']['field_course_type_tid']['expose']['operator'] = 'field_course_type_tid_op';
  $handler->display->display_options['filters']['field_course_type_tid']['expose']['identifier'] = 'field_course_type_tid';
  $handler->display->display_options['filters']['field_course_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  $handler->display->display_options['filters']['field_course_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_course_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_type_tid']['vocabulary'] = 'course_type';
  $handler->display->display_options['filters']['field_course_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_course_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Job level (field_job_level) */
  $handler->display->display_options['filters']['field_job_level_tid']['id'] = 'field_job_level_tid';
  $handler->display->display_options['filters']['field_job_level_tid']['table'] = 'field_data_field_job_level';
  $handler->display->display_options['filters']['field_job_level_tid']['field'] = 'field_job_level_tid';
  $handler->display->display_options['filters']['field_job_level_tid']['value'] = array(
    266 => '266',
    256 => '256',
    261 => '261',
  );
  $handler->display->display_options['filters']['field_job_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['operator_id'] = 'field_job_level_tid_op';
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['operator'] = 'field_job_level_tid_op';
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['identifier'] = 'field_job_level_tid';
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  $handler->display->display_options['filters']['field_job_level_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_job_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_job_level_tid']['vocabulary'] = 'job_level';
  $handler->display->display_options['filters']['field_job_level_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'training-courses';
  $export['training_courses'] = $view;

  $view = new view();
  $view->name = 'user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10000000000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  $view = views_get_current_view();
  print $view->total_rows.  \' Members are following this community\';
  ?>';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'choose_discussion_topic' => 'choose_discussion_topic',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: fallower */
  $handler = $view->new_display('block', 'fallower', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'choose_discussion_topic' => 'choose_discussion_topic',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '.';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: My Communities (field_form_category) */
  $handler->display->display_options['arguments']['field_form_category_tid']['id'] = 'field_form_category_tid';
  $handler->display->display_options['arguments']['field_form_category_tid']['table'] = 'field_data_field_form_category';
  $handler->display->display_options['arguments']['field_form_category_tid']['field'] = 'field_form_category_tid';
  $handler->display->display_options['arguments']['field_form_category_tid']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_form_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_form_category_tid']['validate']['fail'] = 'ignore';

  /* Display: Forum member  */
  $handler = $view->new_display('block', 'Forum member ', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forum member';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'mem_tbl';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = '0';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (!empty($row->picture)) {
        $result = file_load($row->picture);        
        $picture = \'<img src="\'.image_style_url(\'thumbnail\',$result->uri).\'" style="border-radius:50%;width:75px;height:75px;">\';
      }
      else {
        $picture = \'<img src="/\'.variable_get(\'user_picture_default\').\'" style="width:75px;height:75px;border-radius:50%;">\';
      }
     print $picture;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: My Communities (field_form_category) */
  $handler->display->display_options['arguments']['field_form_category_tid']['id'] = 'field_form_category_tid';
  $handler->display->display_options['arguments']['field_form_category_tid']['table'] = 'field_data_field_form_category';
  $handler->display->display_options['arguments']['field_form_category_tid']['field'] = 'field_form_category_tid';
  $handler->display->display_options['arguments']['field_form_category_tid']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Picture */
  $handler->display->display_options['filters']['picture']['id'] = 'picture';
  $handler->display->display_options['filters']['picture']['table'] = 'users';
  $handler->display->display_options['filters']['picture']['field'] = 'picture';
  $handler->display->display_options['filters']['picture']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'members/%';

  /* Display: User Count */
  $handler = $view->new_display('block', 'User Count', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Count';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'mem_tbl';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<div class="member">
<?php
  $view = views_get_current_view();
  print \'<h2> MEMBER ( \'.$view->total_rows.  \')\';
  ?>
</div>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = '0';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: My Communities (field_form_category) */
  $handler->display->display_options['arguments']['field_form_category_tid']['id'] = 'field_form_category_tid';
  $handler->display->display_options['arguments']['field_form_category_tid']['table'] = 'field_data_field_form_category';
  $handler->display->display_options['arguments']['field_form_category_tid']['field'] = 'field_form_category_tid';
  $handler->display->display_options['arguments']['field_form_category_tid']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_form_category_tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_form_category_tid']['summary_options']['items_per_page'] = '25';
  $export['user'] = $view;

  return $export;
}
