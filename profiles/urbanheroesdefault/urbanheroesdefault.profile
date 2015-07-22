<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

function urbanheroesdefault_install_tasks($install_state) {
  $tasks['urbanheroesdefault_enable_features'] = array(
    'display_name' => st('Enable Features'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );
  $tasks['urbanheroesdefault_enable_theme'] = array(
    'display_name' => st('Enable Features'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );
  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function urbanheroesdefault_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'nick@urban-heroes.nl';
  $form['admin_account']['account']['name']['#default_value'] = 'nick';
  $form['admin_account']['account']['mail']['#default_value'] = 'nick@urban-heroes.nl';
  $form['server_settings']['site_default_country']['#default_value'] = 'NL';
  $form['update_notifications']['update_status_module']['#default_value'] = array(0 => 1);

}

function urbanheroesdefault_enable_theme() {
  $enable = array(
    'theme_default' => 'default',
    'admin_theme' => 'seven',
  );
  theme_enable($enable);

  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }

  // Disable the default Bartik theme
  theme_disable(array('bartik'));
}

function urbanheroesdefault_enable_features() {
  $modules = array();

  if (!module_exists('field_bases')) {
    $modules[] = 'field_bases';
  }
  if (!module_exists('d')) {
    $modules[] = 'd';
  }
  if (!module_exists('default_permissions')) {
    $modules[] = 'default_permissions';
  }
  if (!module_exists('default_roles')) {
    $modules[] = 'default_roles';
  }
  if (!module_exists('default_tekstopmaak')) {
    $modules[] = 'default_tekstopmaak';
  }
  if (!module_exists('default_talen')) {
    $modules[] = 'default_talen';
  }
  if (!module_exists('default_superfish_settings')) {
    $modules[] = 'default_superfish_settings';
  }
  if (!module_exists('default_seo_settings')) {
    $modules[] = 'default_seo_settings';
  }
  if (!module_exists('default_ckeditor_profiles')) {
    $modules[] = 'default_ckeditor_profiles';
  }
  if (!module_exists('default_block_settings')) {
    $modules[] = 'default_block_settings';
  }
  if (!module_exists('content_type_basic_page')) {
    $modules[] = 'content_type_basic_page';
  }
  if (!module_exists('content_paragraph_bundels')) {
    $modules[] = 'content_paragraph_bundels';
  }
  if (!module_exists('content_ds_settings')) {
    $modules[] = 'content_ds_settings';
  }

  module_enable($modules);
  // revert

  foreach ($modules as $module) {
    features_revert_module($module);
  }
  foreach ($modules as $module) {
    features_revert_module($module);
  }

}

