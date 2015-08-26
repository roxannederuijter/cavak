<?php
/**
 * @file
 * content_webform.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_webform_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-webform-field_afbeelding4'
  $field_instances['node-webform-field_afbeelding4'] = array(
    'bundle' => 'webform',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_afbeelding4',
    'label' => 'Afbeelding',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-webform-field_paragraph_s'
  $field_instances['node-webform-field_paragraph_s'] = array(
    'bundle' => 'webform',
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
    'field_name' => 'field_paragraph_s',
    'label' => 'Paragraph\'s',
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
        '3_kolommen_video_s' => -1,
        'afbeelding_tekst_link_33_3_' => -1,
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
        '3_kolommen_video_s' => -10,
        'afbeelding_tekst_link_33_3_' => -10,
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
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Afbeelding');
  t('Body');
  t('Paragraph\'s');

  return $field_instances;
}
