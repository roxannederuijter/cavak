<?php
/**
 * @file
 * views_zinema.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_zinema_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'zinema';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Zinema';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zinema';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
    ),
    'field_catogorie_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Catogorie */
  $handler->display->display_options['fields']['field_catogorie']['id'] = 'field_catogorie';
  $handler->display->display_options['fields']['field_catogorie']['table'] = 'field_data_field_catogorie';
  $handler->display->display_options['fields']['field_catogorie']['field'] = 'field_catogorie';
  $handler->display->display_options['fields']['field_catogorie']['label'] = '';
  $handler->display->display_options['fields']['field_catogorie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catogorie']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Volgorde (field_volgorde) */
  $handler->display->display_options['sorts']['field_volgorde_value']['id'] = 'field_volgorde_value';
  $handler->display->display_options['sorts']['field_volgorde_value']['table'] = 'field_data_field_volgorde';
  $handler->display->display_options['sorts']['field_volgorde_value']['field'] = 'field_volgorde_value';
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
    'zinema' => 'zinema',
  );
  /* Filter criterion: Content: Catogorie (field_catogorie) */
  $handler->display->display_options['filters']['field_catogorie_tid']['id'] = 'field_catogorie_tid';
  $handler->display->display_options['filters']['field_catogorie_tid']['table'] = 'field_data_field_catogorie';
  $handler->display->display_options['filters']['field_catogorie_tid']['field'] = 'field_catogorie_tid';
  $handler->display->display_options['filters']['field_catogorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_catogorie_tid']['expose']['operator_id'] = 'field_catogorie_tid_op';
  $handler->display->display_options['filters']['field_catogorie_tid']['expose']['label'] = 'Categorie';
  $handler->display->display_options['filters']['field_catogorie_tid']['expose']['operator'] = 'field_catogorie_tid_op';
  $handler->display->display_options['filters']['field_catogorie_tid']['expose']['identifier'] = 'field_catogorie_tid';
  $handler->display->display_options['filters']['field_catogorie_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_catogorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_catogorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_catogorie_tid']['vocabulary'] = 'catogorie';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'zinema';
  $translatables['zinema'] = array(
    t('Master'),
    t('Zinema'),
    t('more'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Categorie'),
    t('Page'),
  );
  $export['zinema'] = $view;

  return $export;
}
