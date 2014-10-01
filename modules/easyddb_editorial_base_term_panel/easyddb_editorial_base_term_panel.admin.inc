<?php
/**
 * @file
 * Editorial base term panel administrative interface.
 */

function easyddb_editorial_base_admin_term_panel($form, $form_state) {

  $form = array();
  // Gets list of handlers for term_viev.
  $page = 'term_view';
  $task = page_manager_get_task($page);
  ctools_get_plugins('page_manager', 'task_handlers', 'panel_context');
  $handlers = page_manager_load_sorted_handlers($task, '', TRUE);

  $options = array();
  foreach ($handlers as $handler => $v) {
    $options[$handler] = $handler;
  }

  $form['editorial_base_term_panel_handler'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#title' => t('Handler for generating term panel'),
    '#description' => t('Choose a handler for generating term panel variants.'),
    '#default_value' => variable_get('editorial_base_term_panel_handler', 'term_view_panel_context'),
  );

  return system_settings_form($form);
}



