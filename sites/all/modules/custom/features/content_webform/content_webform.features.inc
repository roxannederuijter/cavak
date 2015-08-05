<?php
/**
 * @file
 * content_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_webform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webformulier'),
      'base' => 'node_content',
      'description' => t('Een nieuw formulier of vragenlijst aanmaken. Resultaten en statistieken worden opgeslagen en zijn toegankelijk voor gebruikers met de juiste rechten.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
