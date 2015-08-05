<?php
/**
 * @file
 * content_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function content_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'link_image';
  $bean_type->label = 'link image';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['link_image'] = $bean_type;

  return $export;
}
