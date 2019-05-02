<?php

/**
 * @file
 * drupal_7_content_type.features.inc
 */

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
