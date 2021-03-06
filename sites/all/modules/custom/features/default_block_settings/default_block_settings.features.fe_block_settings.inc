<?php
/**
 * @file
 * default_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function default_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-banner'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'banner',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bean-buttons'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'buttons',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'filmrecruitzz',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-filmrecruitz-footer'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'filmrecruitz-footer',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'filmrecruitz*
filmrecruitzz*
schrijf-crew
schrijf-cast
ik-zoek',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-mail'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'mail',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bean-socialmedia'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'socialmedia',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'filmrecruitzz*
filmrecruitz*
schrijf-crew
schrijf-cast
ik-zoek',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-events'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'events',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'zervices/evenementen',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-filmfestival'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'filmfestival',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'zervices/filmfestival',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-filmrecruitzcast'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'filmrecruitzcast',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'Filmrecruitz/cast*',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-filmrecruitzcrew'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'filmrecruitzcrew',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'filmrecruitz/crew*',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-filmrecruitzzoekopdracht'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'filmrecruitzzoekopdracht',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'filmrecruitz/zoekopdracht',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-flimrecruitzinschrijven'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'flimrecruitzinschrijven',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'schrijf-cast
schrijf-crew
ik-zoek',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-googlemaps'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'googlemaps',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-headerlinks'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'headerlinks',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'online',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'zervices/online',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-tips'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'tips',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'zervices/tips',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-zinema'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'zinema',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'zinema',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-filmrecruitz-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-filmrecruitz-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-zervices-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-zervices-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'zervices/tips-en-ervaringen
filmfestival
evenementen
online',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => 'filmrecruitz/cast*
filmrecruitz/crew*
schrijf-cast
schrijf-crew
filmrecruitz/zoekopdracht*
ik-zoek',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => 'zervices/filmfestival
zervices/online
zervices/evenementen
zervices/tips',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 5,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-cast_crew-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-cast_crew-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'filmrecruitz/cast',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views--exp-cast_crew-page_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-cast_crew-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'filmrecruitz/crew',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views--exp-news-page_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-news-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'nieuws*',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views--exp-zinema-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-zinema-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'Zinema',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-agenda-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'agenda-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'default',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Agenda',
    'visibility' => 1,
  );

  $export['views-banner-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'banner-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-banner-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'banner-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-cast_crew-slideshow'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cast_crew-slideshow',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'filmrecruitzz',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-eenvoudigepagina-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'eenvoudigepagina-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-filmrecruitz-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'filmrecruitz-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'filmrecruitzz',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-filmrecruitz-switch'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'filmrecruitz-switch',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'ik-zoek
schrijf-cast
schrijf-crew',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-front-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'front-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-news-frontpage_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-frontpage_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-sponsoren-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'sponsoren-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'default',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['webform-client-block-60'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'client-block-60',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'filmrecruitz/cast',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['webform-client-block-61'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'client-block-61',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'filmrecruitz/crew',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
