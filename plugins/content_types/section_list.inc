<?php
/**
 * @file
 * Editorial base list Section terms.
 */

$plugin = array(
  'title' => t('List Section terms'),
  'description' => t('Display terms from sections vocabulary.'),
  'single' => TRUE,
  'edit form' => 'easyddb_editorial_base_section_list_content_type_edit_form',
  'render callback' => 'easyddb_editorial_base_section_list_content_type_render',
  'category' => t('easyDDB'),
);
