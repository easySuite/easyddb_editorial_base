<?php
/**
 * @file
 * easyddb_editorial_base_custom_css.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function easyddb_editorial_base_custom_css_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-editorial_base-field_custom_css'
  $field_instances['taxonomy_term-editorial_base-field_custom_css'] = array(
    'bundle' => 'editorial_base',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_custom_css',
    'label' => 'Custom CSS',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom CSS');

  return $field_instances;
}
