<?php
/**
 * @file
 * kidneys_spe.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kidneys_spe_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spe_admin_kus';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spe: admin kus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'spe: admin kus';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_base_category_v2']['id'] = 'field_base_category_v2';
  $handler->display->display_options['fields']['field_base_category_v2']['table'] = 'field_data_field_base_category_v2';
  $handler->display->display_options['fields']['field_base_category_v2']['field'] = 'field_base_category_v2';
  $handler->display->display_options['fields']['field_base_category_v2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_spe_ku_type']['id'] = 'field_spe_ku_type';
  $handler->display->display_options['fields']['field_spe_ku_type']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['fields']['field_spe_ku_type']['field'] = 'field_spe_ku_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Category (field_base_category_v2) */
  $handler->display->display_options['sorts']['field_base_category_v2_tid']['id'] = 'field_base_category_v2_tid';
  $handler->display->display_options['sorts']['field_base_category_v2_tid']['table'] = 'field_data_field_base_category_v2';
  $handler->display->display_options['sorts']['field_base_category_v2_tid']['field'] = 'field_base_category_v2_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'knowledge_unit' => 'knowledge_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['expose']['operator_id'] = 'field_spe_related_profile_target_id_op';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['expose']['label'] = 'Patient Profile';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['expose']['operator'] = 'field_spe_related_profile_target_id_op';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['expose']['identifier'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['filters']['field_spe_related_profile_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    9 => 0,
    40 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
    14 => 0,
    13 => 0,
    15 => 0,
    10 => 0,
    16 => 0,
    17 => 0,
    20 => 0,
    12 => 0,
    38 => 0,
    19 => 0,
    37 => 0,
    18 => 0,
    21 => 0,
    22 => 0,
    39 => 0,
    28 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    30 => 0,
    29 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
  );
  /* Filter criterion: Content: Category (field_base_category_v2) */
  $handler->display->display_options['filters']['field_base_category_v2_tid']['id'] = 'field_base_category_v2_tid';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['table'] = 'field_data_field_base_category_v2';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['field'] = 'field_base_category_v2_tid';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['value'] = '';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_base_category_v2_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_base_category_v2_tid']['expose']['operator_id'] = 'field_base_category_v2_tid_op';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['expose']['operator'] = 'field_base_category_v2_tid_op';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['expose']['identifier'] = 'field_base_category_v2_tid';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    9 => 0,
    40 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
    14 => 0,
    13 => 0,
    15 => 0,
    10 => 0,
    16 => 0,
    17 => 0,
    20 => 0,
    12 => 0,
    38 => 0,
    19 => 0,
    37 => 0,
    18 => 0,
    21 => 0,
    22 => 0,
    39 => 0,
    28 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    30 => 0,
    29 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
  );
  $handler->display->display_options['filters']['field_base_category_v2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_base_category_v2_tid']['vocabulary'] = 'spe_categories';
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_spe_ku_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_spe_ku_type_value']['expose']['operator_id'] = 'field_spe_ku_type_value_op';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['expose']['operator'] = 'field_spe_ku_type_value_op';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['expose']['identifier'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    9 => 0,
    40 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
    14 => 0,
    13 => 0,
    15 => 0,
    10 => 0,
    16 => 0,
    17 => 0,
    20 => 0,
    12 => 0,
    38 => 0,
    19 => 0,
    37 => 0,
    18 => 0,
    21 => 0,
    22 => 0,
    39 => 0,
    28 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    30 => 0,
    29 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/spe-admin-kus';
  $translatables['spe_admin_kus'] = array(
    t('Master'),
    t('spe: admin kus'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Category'),
    t('Type'),
    t('Title'),
    t('Patient Profile'),
    t('Page'),
  );
  $export['spe_admin_kus'] = $view;

  $view = new view();
  $view->name = 'spe_categories_by_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spe: categories by profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'spe_categories' => 'spe_categories',
    'app_compatibility' => 0,
    'atoz_index' => 0,
    'atoz_topic' => 0,
    'banner_section' => 0,
    'blog_type' => 0,
    'category' => 0,
    'constituency' => 0,
    'disciplines' => 0,
    'discount_code' => 0,
    'event_type' => 0,
    'flexible_content_category' => 0,
    'job_contact' => 0,
    'job_type' => 0,
    'newsletter_type' => 0,
    'newsroom_topic' => 0,
    'office_type' => 0,
    'recipe_appropriation' => 0,
    'recipe_type' => 0,
    'special_event_page' => 0,
    'subspecialties' => 0,
    'tags' => 0,
    'tool_groupings' => 0,
    'u_s_states' => 0,
    'video_topic' => 0,
    'zipcode' => 0,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_base_category_v2']['id'] = 'field_base_category_v2';
  $handler->display->display_options['fields']['field_base_category_v2']['table'] = 'field_data_field_base_category_v2';
  $handler->display->display_options['fields']['field_base_category_v2']['field'] = 'field_base_category_v2';
  $handler->display->display_options['fields']['field_base_category_v2']['label'] = '';
  $handler->display->display_options['fields']['field_base_category_v2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_base_category_v2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_base_category_v2']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
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
    'knowledge_unit' => 'knowledge_unit',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related Profile (field_spe_related_profile)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['spe_categories_by_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['spe_categories_by_profile'] = $view;

  $view = new view();
  $view->name = 'spe_categories_by_profile_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'spe: categories by profile 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What you need to know';
  $handler->display->display_options['css_class'] = 'grid--center';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-cell padding--md margin-bottom--lg width--100 md--width--33';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Category */
  $handler->display->display_options['relationships']['reverse_field_base_category_v2_node']['id'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['relationships']['reverse_field_base_category_v2_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_base_category_v2_node']['field'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['relationships']['reverse_field_base_category_v2_node']['label'] = 'content';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['relationships']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['relationships']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['relationships']['field_spe_related_profile_target_id']['relationship'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['relationships']['field_spe_related_profile_target_id']['label'] = 'profile';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_type'] = '0';
  $handler->display->display_options['fields']['tid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_1']['convert_spaces'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'spe_categories_by_profile_2:page_1';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['relationship'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'spe_categories' => 'spe_categories',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['relationship'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_base_category_v2_node';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: overview */
  $handler = $view->new_display('panel_pane', 'overview', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'grid--center  center';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'basic';
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: menu */
  $handler = $view->new_display('panel_pane', 'menu', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Explore by topic';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'padding-bottom--xxs font-size--lg bold';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'personalized-health-information/!1/[tid]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'display--block width--100 font-size--md font-weight--400';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'tid' => 'tid',
    'draggableviews' => 'draggableviews',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Draggableviews: Taxonomy term */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'personalized-health-information/!1/[tid]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'font-size--lg display--block width--100';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'personalized-health-information/test/%';
  $translatables['spe_categories_by_profile_2'] = array(
    t('Master'),
    t('What you need to know'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('content'),
    t('profile'),
    t('.'),
    t('All'),
    t('overview'),
    t('View panes'),
    t('menu'),
    t('Explore by topic'),
    t('[name]'),
    t('Page'),
  );
  $export['spe_categories_by_profile_2'] = $view;

  $view = new view();
  $view->name = 'spe_course_sections_by_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spe: course sections by profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_spe_course_sections_node']['id'] = 'reverse_field_spe_course_sections_node';
  $handler->display->display_options['relationships']['reverse_field_spe_course_sections_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_spe_course_sections_node']['field'] = 'reverse_field_spe_course_sections_node';
  $handler->display->display_options['relationships']['reverse_field_spe_course_sections_node']['label'] = 'course';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_section_knowledge_units_target_id']['id'] = 'field_section_knowledge_units_target_id';
  $handler->display->display_options['relationships']['field_section_knowledge_units_target_id']['table'] = 'field_data_field_section_knowledge_units';
  $handler->display->display_options['relationships']['field_section_knowledge_units_target_id']['field'] = 'field_section_knowledge_units_target_id';
  $handler->display->display_options['relationships']['field_section_knowledge_units_target_id']['label'] = 'KUs';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Period */
  $handler->display->display_options['fields']['field_spe_section_period']['id'] = 'field_spe_section_period';
  $handler->display->display_options['fields']['field_spe_section_period']['table'] = 'field_data_field_spe_section_period';
  $handler->display->display_options['fields']['field_spe_section_period']['field'] = 'field_spe_section_period';
  /* Sort criterion: Content: Sections (field_spe_course_sections:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_spe_course_sections';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['relationship'] = 'field_section_knowledge_units_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_spe_course_sections_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'spe_section' => 'spe_section',
  );
  $translatables['spe_course_sections_by_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('course'),
    t('KUs'),
    t('Nid'),
    t('Body'),
    t('Period'),
    t('All'),
  );
  $export['spe_course_sections_by_profile'] = $view;

  $view = new view();
  $view->name = 'spe_knowledge_units';
  $view->description = '';
  $view->tag = 'spe';
  $view->base_table = 'node';
  $view->human_name = 'spe: knowledge units';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'nothing';
  $handler->display->display_options['empty']['area']['format'] = 'basic';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <h3 class="font-size--lg bold cursor--pointer padding--none">
      [title]
    </h3>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Category (field_base_category_v2) */
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['id'] = 'field_base_category_v2_tid';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['table'] = 'field_data_field_base_category_v2';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['field'] = 'field_base_category_v2_tid';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['summary_options']['items_per_page'] = '25';
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    0 => '0',
  );

  /* Display: KUs by Category */
  $handler = $view->new_display('panel_pane', 'KUs by Category', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section id="ku-[nid]" class="display--table padding-bottom--sm" >
  <div class="display--table-cell font-size--lg cursor--pointer padding-top--xs padding-right--xs" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <a class="font-size--lg cursor--pointer padding--none"  data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
      [title]
    </a>
    <div class="desc hide padding-top--xs padding-bottom--md">[body] [edit_node]</div>
  </div>

</section>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'spe_knowledge_units:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
    'field_base_category_v2_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'category_id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: KU Actions by Category */
  $handler = $view->new_display('panel_pane', 'KU Actions by Category', 'panel_pane_2');
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    1 => '1',
  );

  /* Display: KU TtoT by Category */
  $handler = $view->new_display('panel_pane', 'KU TtoT by Category', 'panel_pane_3');
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    2 => '2',
  );

  /* Display: KU Actions */
  $handler = $view->new_display('panel_pane', 'KU Actions', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What you should do now';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <a href="#" class="font-size--lg cursor--pointer padding--none font-weight--400">
      [title]
    </a>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );

  /* Display: KU Descriptions */
  $handler = $view->new_display('panel_pane', 'KU Descriptions', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'So long, fairwell.';
  $handler->display->display_options['empty']['area']['format'] = 'basic';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <h3 class="font-size--lg bold cursor--pointer padding--none">
      [title]
    </h3>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Category (field_base_category_v2) */
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['id'] = 'field_base_category_v2_tid';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['table'] = 'field_data_field_base_category_v2';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['field'] = 'field_base_category_v2_tid';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_base_category_v2_tid']['summary_options']['items_per_page'] = '25';
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
    'field_base_category_v2_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'category_id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: KUs by Category Sort */
  $handler = $view->new_display('page', 'KUs by Category Sort', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'padding--none';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'nid' => 'nid',
    'title' => 'title',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '  <h3 class="bold padding--none">
      [title]
  </h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'spe_knowledge_units:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'personalized-health-information/ku-sort/%/%';

  /* Display: KU Actions V2 */
  $handler = $view->new_display('panel_pane', 'KU Actions V2', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What you should do now';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'grid--center';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-cell width--100 sm--width--50 md--width--33';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="padding--md margin-bottom--md  margin-x--md bg--gray-1">
  <h3>[title]</h3>
  <div class="padding-bottom--md">[body]</div>
  [edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );

  /* Display: KU Risk Factors */
  $handler = $view->new_display('panel_pane', 'KU Risk Factors', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Your risk factors';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <a href="#" class="font-size--lg cursor--pointer padding--none font-weight--400">
      [title]
    </a>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );

  /* Display: KU Risk Factors V2 */
  $handler = $view->new_display('panel_pane', 'KU Risk Factors V2', 'risk');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What you should do now';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'max-width--xxl center padding--md';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="border-style--solid border-width--sm border-color--gray-4 rounded padding--lg bg--gray-1">
  <h3>[title]</h3>
  <div class="padding-bottom--md">[body]</div>
  [edit_node]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );

  /* Display: KU Risk Factors V2 */
  $handler = $view->new_display('panel_pane', 'KU Risk Factors V2', 'risk_factors');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What you should do now';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'max-width--xxl center padding--md';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_spe_icon']['id'] = 'field_spe_icon';
  $handler->display->display_options['fields']['field_spe_icon']['table'] = 'field_data_field_spe_icon';
  $handler->display->display_options['fields']['field_spe_icon']['field'] = 'field_spe_icon';
  $handler->display->display_options['fields']['field_spe_icon']['label'] = '';
  $handler->display->display_options['fields']['field_spe_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spe_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spe_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Slug */
  $handler->display->display_options['fields']['field_base_slug']['id'] = 'field_base_slug';
  $handler->display->display_options['fields']['field_base_slug']['table'] = 'field_data_field_base_slug';
  $handler->display->display_options['fields']['field_base_slug']['field'] = 'field_base_slug';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );

  /* Display: KU All */
  $handler = $view->new_display('panel_pane', 'KU All', 'all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What you should do now';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'max-width--xxl center padding--md';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_spe_icon']['id'] = 'field_spe_icon';
  $handler->display->display_options['fields']['field_spe_icon']['table'] = 'field_data_field_spe_icon';
  $handler->display->display_options['fields']['field_spe_icon']['field'] = 'field_spe_icon';
  $handler->display->display_options['fields']['field_spe_icon']['label'] = '';
  $handler->display->display_options['fields']['field_spe_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spe_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spe_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_ku_type_value']['limit'] = '0';
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
    'knowledge_unit' => 'knowledge_unit',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_spe_related_profile_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_card_action_links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'profiles_ids',
    ),
  );
  $translatables['spe_knowledge_units'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('nothing'),
    t('<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <h3 class="font-size--lg bold cursor--pointer padding--none">
      [title]
    </h3>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>'),
    t('All'),
    t('KUs by Category'),
    t('edit'),
    t('<section id="ku-[nid]" class="display--table padding-bottom--sm" >
  <div class="display--table-cell font-size--lg cursor--pointer padding-top--xs padding-right--xs" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <a class="font-size--lg cursor--pointer padding--none"  data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
      [title]
    </a>
    <div class="desc hide padding-top--xs padding-bottom--md">[body] [edit_node]</div>
  </div>

</section>'),
    t('View panes'),
    t('KU Actions by Category'),
    t('KU TtoT by Category'),
    t('KU Actions'),
    t('What you should do now'),
    t('<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <a href="#" class="font-size--lg cursor--pointer padding--none font-weight--400">
      [title]
    </a>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>'),
    t('KU Descriptions'),
    t('So long, fairwell.'),
    t('<section id="ku-[nid]" class="display--table padding-bottom--sm" data-toggle="class" data-target="#ku-[nid] i|#ku-[nid] .desc" data-class="hide|hide">
  <div class="display--table-cell font-size--lg bold cursor--pointer padding-top--xs padding-right--xs">
    <i class="icon-plus"></i>
    <i class="icon-minus hide"></i>
  </div>
  <div class="dispay--table-cell width--100">
    <h3 class="font-size--lg bold cursor--pointer padding--none">
      [title]
    </h3>
    <div class="desc hide padding-top--xs padding-bottom--md">[body]</div>
  </div>

</section>
'),
    t('KUs by Category Sort'),
    t('  <h3 class="bold padding--none">
      [title]
  </h3>'),
    t('KU Actions V2'),
    t('<div class="padding--md margin-bottom--md  margin-x--md bg--gray-1">
  <h3>[title]</h3>
  <div class="padding-bottom--md">[body]</div>
  [edit_node]
</div>'),
    t('KU Risk Factors'),
    t('Your risk factors'),
    t('KU Risk Factors V2'),
    t('<div class="border-style--solid border-width--sm border-color--gray-4 rounded padding--lg bg--gray-1">
  <h3>[title]</h3>
  <div class="padding-bottom--md">[body]</div>
  [edit_node]
</div>'),
    t('Slug'),
    t('KU All'),
  );
  $export['spe_knowledge_units'] = $view;

  $view = new view();
  $view->name = 'spe_kus_by_section_and_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spe: KUs by section and profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_section_knowledge_units_node']['id'] = 'reverse_field_section_knowledge_units_node';
  $handler->display->display_options['relationships']['reverse_field_section_knowledge_units_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_section_knowledge_units_node']['field'] = 'reverse_field_section_knowledge_units_node';
  $handler->display->display_options['relationships']['reverse_field_section_knowledge_units_node']['label'] = 'Section';
  $handler->display->display_options['relationships']['reverse_field_section_knowledge_units_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_section_knowledge_units_node';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Knowledge Units (field_section_knowledge_units:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_section_knowledge_units';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Related Profile (field_spe_related_profile) */
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['id'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['table'] = 'field_data_field_spe_related_profile';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['field'] = 'field_spe_related_profile_target_id';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_spe_related_profile_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_section_knowledge_units_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    0 => '0',
  );

  /* Display: informational */
  $handler = $view->new_display('panel_pane', 'informational', 'info');

  /* Display: actions_track */
  $handler = $view->new_display('panel_pane', 'actions_track', 'action_track');
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
    'knowledge_unit' => 'knowledge_unit',
  );
  /* Filter criterion: Content: Type (field_spe_ku_type) */
  $handler->display->display_options['filters']['field_spe_ku_type_value']['id'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['table'] = 'field_data_field_spe_ku_type';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['field'] = 'field_spe_ku_type_value';
  $handler->display->display_options['filters']['field_spe_ku_type_value']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $translatables['spe_kus_by_section_and_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Section'),
    t('Nid'),
    t('All'),
    t('informational'),
    t('View panes'),
    t('actions_track'),
  );
  $export['spe_kus_by_section_and_profile'] = $view;

  $view = new view();
  $view->name = 'spe_profile_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spe: profile admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SPE: Patient Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Patient Profile (Archetypes)';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Family History of CKD */
  $handler->display->display_options['fields']['field_spe_family_history']['id'] = 'field_spe_family_history';
  $handler->display->display_options['fields']['field_spe_family_history']['table'] = 'field_data_field_spe_family_history';
  $handler->display->display_options['fields']['field_spe_family_history']['field'] = 'field_spe_family_history';
  $handler->display->display_options['fields']['field_spe_family_history']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_family_history']['multi_type'] = 'ul';
  /* Field: Field: Hypertension Diagnosis */
  $handler->display->display_options['fields']['field_spe_htx_diagnosis']['id'] = 'field_spe_htx_diagnosis';
  $handler->display->display_options['fields']['field_spe_htx_diagnosis']['table'] = 'field_data_field_spe_htx_diagnosis';
  $handler->display->display_options['fields']['field_spe_htx_diagnosis']['field'] = 'field_spe_htx_diagnosis';
  $handler->display->display_options['fields']['field_spe_htx_diagnosis']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_htx_diagnosis']['multi_type'] = 'ul';
  /* Field: Field: Diabetes Diagnosis */
  $handler->display->display_options['fields']['field_spe_diabetes_diagnosis']['id'] = 'field_spe_diabetes_diagnosis';
  $handler->display->display_options['fields']['field_spe_diabetes_diagnosis']['table'] = 'field_data_field_spe_diabetes_diagnosis';
  $handler->display->display_options['fields']['field_spe_diabetes_diagnosis']['field'] = 'field_spe_diabetes_diagnosis';
  $handler->display->display_options['fields']['field_spe_diabetes_diagnosis']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_diabetes_diagnosis']['multi_type'] = 'ul';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_spe_transplant']['id'] = 'field_spe_transplant';
  $handler->display->display_options['fields']['field_spe_transplant']['table'] = 'field_data_field_spe_transplant';
  $handler->display->display_options['fields']['field_spe_transplant']['field'] = 'field_spe_transplant';
  $handler->display->display_options['fields']['field_spe_transplant']['label'] = 'Have you had a transplant?';
  /* Field: Field: CKD Diagnosis */
  $handler->display->display_options['fields']['field_spe_ckd_diagnosis']['id'] = 'field_spe_ckd_diagnosis';
  $handler->display->display_options['fields']['field_spe_ckd_diagnosis']['table'] = 'field_data_field_spe_ckd_diagnosis';
  $handler->display->display_options['fields']['field_spe_ckd_diagnosis']['field'] = 'field_spe_ckd_diagnosis';
  $handler->display->display_options['fields']['field_spe_ckd_diagnosis']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_ckd_diagnosis']['multi_type'] = 'ul';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_spe_dialysis']['id'] = 'field_spe_dialysis';
  $handler->display->display_options['fields']['field_spe_dialysis']['table'] = 'field_data_field_spe_dialysis';
  $handler->display->display_options['fields']['field_spe_dialysis']['field'] = 'field_spe_dialysis';
  $handler->display->display_options['fields']['field_spe_dialysis']['label'] = 'Are you currently on dialysis?';
  /* Field: Content: BMI */
  $handler->display->display_options['fields']['field_spe_bmi']['id'] = 'field_spe_bmi';
  $handler->display->display_options['fields']['field_spe_bmi']['table'] = 'field_data_field_spe_bmi';
  $handler->display->display_options['fields']['field_spe_bmi']['field'] = 'field_spe_bmi';
  $handler->display->display_options['fields']['field_spe_bmi']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_bmi']['multi_type'] = 'ul';
  /* Field: Field: eGFR */
  $handler->display->display_options['fields']['field_spe_egfr']['id'] = 'field_spe_egfr';
  $handler->display->display_options['fields']['field_spe_egfr']['table'] = 'field_data_field_spe_egfr';
  $handler->display->display_options['fields']['field_spe_egfr']['field'] = 'field_spe_egfr';
  $handler->display->display_options['fields']['field_spe_egfr']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_egfr']['multi_type'] = 'ul';
  /* Field: Field: ACR */
  $handler->display->display_options['fields']['field_spe_acr']['id'] = 'field_spe_acr';
  $handler->display->display_options['fields']['field_spe_acr']['table'] = 'field_data_field_spe_acr';
  $handler->display->display_options['fields']['field_spe_acr']['field'] = 'field_spe_acr';
  $handler->display->display_options['fields']['field_spe_acr']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spe_acr']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'patient_profile' => 'patient_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/spe-profile-admin';
  $translatables['spe_profile_admin'] = array(
    t('Master'),
    t('SPE: Patient Profile'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Patient Profile (Archetypes)'),
    t('Family History of CKD'),
    t('Hypertension Diagnosis'),
    t('Diabetes Diagnosis'),
    t('Have you had a transplant?'),
    t('CKD Diagnosis'),
    t('Are you currently on dialysis?'),
    t('BMI'),
    t('eGFR'),
    t('ACR'),
    t('Page'),
  );
  $export['spe_profile_admin'] = $view;

  $view = new view();
  $view->name = 'spe_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SPE Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SPE Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: eGFR */
  $handler->display->display_options['fields']['field_spe_egfr']['id'] = 'field_spe_egfr';
  $handler->display->display_options['fields']['field_spe_egfr']['table'] = 'field_data_field_spe_egfr';
  $handler->display->display_options['fields']['field_spe_egfr']['field'] = 'field_spe_egfr';
  $handler->display->display_options['fields']['field_spe_egfr']['delta_offset'] = '0';
  /* Field: Field: ACR */
  $handler->display->display_options['fields']['field_spe_acr']['id'] = 'field_spe_acr';
  $handler->display->display_options['fields']['field_spe_acr']['table'] = 'field_data_field_spe_acr';
  $handler->display->display_options['fields']['field_spe_acr']['field'] = 'field_spe_acr';
  $handler->display->display_options['fields']['field_spe_acr']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'patient_profile' => 'patient_profile',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = 'stage';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/spe-profiles';
  $translatables['spe_profiles'] = array(
    t('Master'),
    t('SPE Profiles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('eGFR'),
    t('ACR'),
    t('Page'),
  );
  $export['spe_profiles'] = $view;

  return $export;
}
