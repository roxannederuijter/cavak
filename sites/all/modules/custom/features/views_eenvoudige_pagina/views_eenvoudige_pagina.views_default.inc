<?php
/**
 * @file
 * views_eenvoudige_pagina.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_eenvoudige_pagina_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eenvoudigepagina';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'eenvoudigepagina';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'eenvoudigepagina';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: call to action */
  $handler->display->display_options['fields']['field_call_to_action']['id'] = 'field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['table'] = 'field_data_field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['field'] = 'field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_call_to_action']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_call_to_action']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['eenvoudigepagina'] = array(
    t('Master'),
    t('eenvoudigepagina'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Alle'),
    t('Block'),
  );
  $export['eenvoudigepagina'] = $view;

  return $export;
}
