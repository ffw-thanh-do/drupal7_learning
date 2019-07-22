<?php

/**
 * @file
 * drupal_7_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_7_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupal_7_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupal_7_content_type_node_info() {
  $items = array(
    'component_ct' => array(
      'name' => t('Component CT'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
