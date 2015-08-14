<?php
/**
 * @file
 * content_crew.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_crew_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_crew_node_info() {
  $items = array(
    'crew' => array(
      'name' => t('Crew'),
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
