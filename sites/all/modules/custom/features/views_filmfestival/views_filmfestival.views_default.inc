<?php
/**
 * @file
 * views_filmfestival.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_filmfestival_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'filmfestival';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'filmfestival';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'filmfestival';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Afbeelding */
  $handler->display->display_options['fields']['field_afbeelding2']['id'] = 'field_afbeelding2';
  $handler->display->display_options['fields']['field_afbeelding2']['table'] = 'field_data_field_afbeelding2';
  $handler->display->display_options['fields']['field_afbeelding2']['field'] = 'field_afbeelding2';
  $handler->display->display_options['fields']['field_afbeelding2']['label'] = '';
  $handler->display->display_options['fields']['field_afbeelding2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_afbeelding2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_afbeelding2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Subtitel */
  $handler->display->display_options['fields']['field_subtitel']['id'] = 'field_subtitel';
  $handler->display->display_options['fields']['field_subtitel']['table'] = 'field_data_field_subtitel';
  $handler->display->display_options['fields']['field_subtitel']['field'] = 'field_subtitel';
  $handler->display->display_options['fields']['field_subtitel']['label'] = '';
  $handler->display->display_options['fields']['field_subtitel']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
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
    'filmfestival' => 'filmfestival',
  );
  /* Filter criterion: Content: categorie filmfestival (field_categorie_filmfestival) */
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['id'] = 'field_categorie_filmfestival_tid_1';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['table'] = 'field_data_field_categorie_filmfestival';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['field'] = 'field_categorie_filmfestival_tid';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['vocabulary'] = 'categorie_filmfestival';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['hierarchy'] = 1;

  /* Display: Pagina */
  $handler = $view->new_display('page', 'Pagina', 'page_1');
  $handler->display->display_options['path'] = 'filmfestival';

  /* Display: Pagina online */
  $handler = $view->new_display('page', 'Pagina online', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'online';
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
    'filmfestival' => 'filmfestival',
  );
  /* Filter criterion: Content: categorie filmfestival (field_categorie_filmfestival) */
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['id'] = 'field_categorie_filmfestival_tid_1';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['table'] = 'field_data_field_categorie_filmfestival';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['field'] = 'field_categorie_filmfestival_tid';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['vocabulary'] = 'categorie_filmfestival';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'online';

  /* Display: Pagina evenementen */
  $handler = $view->new_display('page', 'Pagina evenementen', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evenementen';
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
    'filmfestival' => 'filmfestival',
  );
  /* Filter criterion: Content: categorie filmfestival (field_categorie_filmfestival) */
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['id'] = 'field_categorie_filmfestival_tid_1';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['table'] = 'field_data_field_categorie_filmfestival';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['field'] = 'field_categorie_filmfestival_tid';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['vocabulary'] = 'categorie_filmfestival';
  $handler->display->display_options['filters']['field_categorie_filmfestival_tid_1']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'evenementen';
  $translatables['filmfestival'] = array(
    t('Master'),
    t('filmfestival'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Pagina'),
    t('Pagina online'),
    t('online'),
    t('Pagina evenementen'),
    t('Evenementen'),
  );
  $export['filmfestival'] = $view;

  return $export;
}
