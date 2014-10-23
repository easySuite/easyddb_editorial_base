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
 * Implements hook_node_info().
 */
function easyddb_editorial_base_og_integration_node_info() {
  $items = array(
    'editorial_base' => array(
      'name' => t('Editorial base'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
