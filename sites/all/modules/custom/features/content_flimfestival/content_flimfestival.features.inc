<?php
/**
 * @file
 * content_flimfestival.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_flimfestival_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_flimfestival_node_info() {
  $items = array(
    'filmfestival' => array(
      'name' => t('Filmfestival'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
