<?php
/**
 * @file
 * Editorial base custom hooks definition.
 */

/**
 * Implements hook_section_tabs().
 *
 * Example usage.
 */
function hook_section_tabs() {
  $tabs = array();

  $tabs['example_tab'] = array(
    '#type' => 'fieldset',
    '#title' => t('Example tab title'),
    '#group' => 'section_tabs', // Do not change this.
  );

  $tabs['example_tab']['example_element'] = array(
    '#type' => 'checkbox',
    '#title' => t('Example checkbox in a tab'),
    '#default_value' => variable_get('example_element', 0),
  );

  return $tabs;
}
