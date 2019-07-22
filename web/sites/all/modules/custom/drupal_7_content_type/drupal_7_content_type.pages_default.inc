<?php

/**
 * @file
 * drupal_7_content_type.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function drupal_7_content_type_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6f8f0b18-d9dd-4dd0-9597-6d030f84c3b2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e56beafb-879e-4a93-9bf0-1d27ea22f4e5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_6f8f0b18-d9dd-4dd0-9597-6d030f84c3b2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-caf179e7-f03e-4f8c-ad0c-200f32f6ff15';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_content_reference';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 1,
      'use_content_language' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Suggested reading',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'caf179e7-f03e-4f8c-ad0c-200f32f6ff15';
  $display->content['new-caf179e7-f03e-4f8c-ad0c-200f32f6ff15'] = $pane;
  $display->panels['middle'][0] = 'new-caf179e7-f03e-4f8c-ad0c-200f32f6ff15';
  $pane = new stdClass();
  $pane->pid = 'new-e78ad6f6-9ddd-4ad3-801b-1f918c41ab0d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e78ad6f6-9ddd-4ad3-801b-1f918c41ab0d';
  $display->content['new-e78ad6f6-9ddd-4ad3-801b-1f918c41ab0d'] = $pane;
  $display->panels['middle'][1] = 'new-e78ad6f6-9ddd-4ad3-801b-1f918c41ab0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6f8f0b18-d9dd-4dd0-9597-6d030f84c3b2'] = $handler;

  return $export;
}
