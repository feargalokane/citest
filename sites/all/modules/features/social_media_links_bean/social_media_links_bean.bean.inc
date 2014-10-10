<?php
/**
 * @file
 * social_media_links_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function social_media_links_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'social_links';
  $bean_type->label = 'Social Links';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['social_links'] = $bean_type;

  return $export;
}
