<?php
/**
 * @file
 * content_castcrew.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function content_castcrew_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  return $config;
}
