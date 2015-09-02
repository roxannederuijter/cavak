<?php
/**
 * @file
 * content_agenda.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_agenda_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_event-field_inhoudcontent'
  $field_instances['field_collection_item-field_event-field_inhoudcontent'] = array(
    'bundle' => 'field_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_inhoudcontent',
    'label' => 'inhoud',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_kolom_afbeelding' => -1,
        '1_kolom_tekst' => -1,
        '1_kolom_tekst_33_3_breed' => -1,
        '2_kolommen_afbeeldingen' => -1,
        '2_kolommen_tekst' => -1,
        '2_kolommen_tekst_30_afbeelding_7' => -1,
        '2_kolommen_tekst_afbeelding_link' => -1,
        '2_kolommen_tekst_afbeelding_rech' => -1,
        '2_kolommen_tekst_video' => -1,
        '3_kolommen_tekst' => -1,
        '3_kolommen_tekst_video_tekst' => -1,
        '3_kolommen_video_s' => -1,
        'afbeelding_tekst_link_33_3_' => -1,
        'event' => 'event',
        'jury' => -1,
        'links_titels_rechts_quote' => -1,
        'quote' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1_kolom_afbeelding' => 2,
        '1_kolom_tekst' => 3,
        '1_kolom_tekst_33_3_breed' => 4,
        '2_kolommen_afbeeldingen' => 5,
        '2_kolommen_tekst' => 6,
        '2_kolommen_tekst_30_afbeelding_7' => 7,
        '2_kolommen_tekst_afbeelding_link' => 8,
        '2_kolommen_tekst_afbeelding_rech' => 9,
        '2_kolommen_tekst_video' => 10,
        '3_kolommen_tekst' => -10,
        '3_kolommen_tekst_video_tekst' => -10,
        '3_kolommen_video_s' => -10,
        'afbeelding_tekst_link_33_3_' => -10,
        'event' => -10,
        'jury' => -10,
        'links_titels_rechts_quote' => -10,
        'quote' => -10,
        'video' => -10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-agenda-field_banner'
  $field_instances['node-agenda-field_banner'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner',
    'label' => 'Banner',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-agenda-field_call_to_action'
  $field_instances['node-agenda-field_call_to_action'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_call_to_action',
    'label' => 'call to action',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-agenda-field_event'
  $field_instances['node-agenda-field_event'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event',
    'label' => 'event',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  t('call to action');
  t('event');
  t('inhoud');

  return $field_instances;
}
