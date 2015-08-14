<?php
/**
 * @file
 * views_castcrew.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_castcrew_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cast_crew';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cast/Crew';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cast';
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
    'field_ik_ben__tid' => array(
      'bef_format' => 'bef_hidden',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
    'field_catogorie_cast_crew_tid' => array(
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
  /* Field: Content: Profielfoto */
  $handler->display->display_options['fields']['field_profielfoto']['id'] = 'field_profielfoto';
  $handler->display->display_options['fields']['field_profielfoto']['table'] = 'field_data_field_profielfoto';
  $handler->display->display_options['fields']['field_profielfoto']['field'] = 'field_profielfoto';
  $handler->display->display_options['fields']['field_profielfoto']['label'] = '';
  $handler->display->display_options['fields']['field_profielfoto']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_profielfoto']['element_class'] = 'image-main';
  $handler->display->display_options['fields']['field_profielfoto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profielfoto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profielfoto']['settings'] = array(
    'image_style' => '300_x_300_',
    'image_link' => 'content',
  );
  /* Field: Field: Naam */
  $handler->display->display_options['fields']['field_naam']['id'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['table'] = 'field_data_field_naam';
  $handler->display->display_options['fields']['field_naam']['field'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['label'] = '';
  $handler->display->display_options['fields']['field_naam']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_naam']['element_label_colon'] = FALSE;
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
    'crew' => 'crew',
  );
  /* Filter criterion: Content: Ik ben : (field_ik_ben_) */
  $handler->display->display_options['filters']['field_ik_ben__tid']['id'] = 'field_ik_ben__tid';
  $handler->display->display_options['filters']['field_ik_ben__tid']['table'] = 'field_data_field_ik_ben_';
  $handler->display->display_options['filters']['field_ik_ben__tid']['field'] = 'field_ik_ben__tid';
  $handler->display->display_options['filters']['field_ik_ben__tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_ik_ben__tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ik_ben__tid']['expose']['operator_id'] = 'field_ik_ben__tid_op';
  $handler->display->display_options['filters']['field_ik_ben__tid']['expose']['label'] = 'Ik ben : (field_ik_ben_)';
  $handler->display->display_options['filters']['field_ik_ben__tid']['expose']['operator'] = 'field_ik_ben__tid_op';
  $handler->display->display_options['filters']['field_ik_ben__tid']['expose']['identifier'] = 'field_ik_ben__tid';
  $handler->display->display_options['filters']['field_ik_ben__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ik_ben__tid']['vocabulary'] = 'ik_ben_';
  /* Filter criterion: Content: catogorie cast/crew (field_catogorie_cast_crew) */
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['id'] = 'field_catogorie_cast_crew_tid';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['table'] = 'field_data_field_catogorie_cast_crew';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['field'] = 'field_catogorie_cast_crew_tid';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['expose']['operator_id'] = 'field_catogorie_cast_crew_tid_op';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['expose']['operator'] = 'field_catogorie_cast_crew_tid_op';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['expose']['identifier'] = 'field_catogorie_cast_crew_tid';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_catogorie_cast_crew_tid']['vocabulary'] = 'catogorie_cast_crew';

  /* Display: Cast-page */
  $handler = $view->new_display('page', 'Cast-page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
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
    'crew_cast' => 'crew_cast',
  );
  /* Filter criterion: Content: Ik ben : (field_ik_ben_) */
  $handler->display->display_options['filters']['field_ik_ben__tid']['id'] = 'field_ik_ben__tid';
  $handler->display->display_options['filters']['field_ik_ben__tid']['table'] = 'field_data_field_ik_ben_';
  $handler->display->display_options['filters']['field_ik_ben__tid']['field'] = 'field_ik_ben__tid';
  $handler->display->display_options['filters']['field_ik_ben__tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_ik_ben__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ik_ben__tid']['vocabulary'] = 'ik_ben_';
  $handler->display->display_options['path'] = 'filmrecruitz/cast';

  /* Display: Crew-page */
  $handler = $view->new_display('page', 'Crew-page', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'filmrecruitz/crew';
  $translatables['cast_crew'] = array(
    t('Master'),
    t('Cast'),
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
    t('Ik ben : (field_ik_ben_)'),
    t('Cast-page'),
    t('Crew-page'),
  );
  $export['cast_crew'] = $view;

  return $export;
}
