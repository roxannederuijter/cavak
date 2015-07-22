<?php
/**
 * @file
 * content_sponsor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_sponsor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_sponsor_node_info() {
  $items = array(
    'sponsors' => array(
      'name' => t('Sponsors'),
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
