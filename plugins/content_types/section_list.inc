<?php
/**
 * @file
 * Editorial base list Section terms.
 */

$plugin = array(
  'title' => t('List Section terms'),
  'description' => t('Display terms from sections vocabulary.'),
  'single' => TRUE,
  'render callback' => 'easyddb_editorial_base_section_list_content_type_render',
  'category' => t('easyDDB'),
);
