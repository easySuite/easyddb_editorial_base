<?php
/**
 * @file
 * easyddb_editorial_base_header_image.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function easyddb_editorial_base_header_image_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-editorial_base-field_header_image'
  $field_instances['taxonomy_term-editorial_base-field_header_image'] = array(
    'bundle' => 'editorial_base',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_header_image',
    'label' => 'Header image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/header_image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'artesis_media_browser--media_browser_1' => 0,
          'dams_media_browser--media_browser_2' => 0,
          'dams_media_browser--media_browser_3' => 0,
          'dams_media_browser--media_browser_4' => 0,
          'dams_media_browser--media_browser_5' => 0,
          'ding_content' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Header image');

  return $field_instances;
}
