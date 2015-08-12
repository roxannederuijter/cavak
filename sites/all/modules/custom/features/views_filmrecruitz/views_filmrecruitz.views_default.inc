<?php
/**
 * @file
 * views_filmrecruitz.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_filmrecruitz_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'filmrecruitz';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filmrecruitz';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filmrecruitz';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Afbeelding */
  $handler->display->display_options['fields']['field_afbeelding4']['id'] = 'field_afbeelding4';
  $handler->display->display_options['fields']['field_afbeelding4']['table'] = 'field_data_field_afbeelding4';
  $handler->display->display_options['fields']['field_afbeelding4']['field'] = 'field_afbeelding4';
  $handler->display->display_options['fields']['field_afbeelding4']['label'] = '';
  $handler->display->display_options['fields']['field_afbeelding4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_afbeelding4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_afbeelding4']['settings'] = array(
    'image_style' => '',
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
    'webform' => 'webform',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['filmrecruitz'] = array(
    t('Master'),
    t('Filmrecruitz'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['filmrecruitz'] = $view;

  return $export;
}
