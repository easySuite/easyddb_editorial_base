<?php
/**
 * @file
 * easyddb_editorial_base_og_integration.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function easyddb_editorial_base_og_integration_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:editorial_base:subscribe without approval'
  $permissions['node:editorial_base:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
