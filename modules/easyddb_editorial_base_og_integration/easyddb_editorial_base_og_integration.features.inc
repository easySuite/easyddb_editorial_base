<?php
/**
 * @file
 * easyddb_editorial_base_og_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyddb_editorial_base_og_integration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function easyddb_editorial_base_og_integration_strongarm_alter(&$data) {
  if (isset($data['og_menu_max_menus_per_group'])) {
    $data['og_menu_max_menus_per_group']->value = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_node_info().
 */
function easyddb_editorial_base_og_integration_node_info() {
  $items = array(
    'editorial_base' => array(
      'name' => t('Editorial base OG'),
      'base' => 'node_content',
      'description' => t('Organic Group for editorial base needs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
