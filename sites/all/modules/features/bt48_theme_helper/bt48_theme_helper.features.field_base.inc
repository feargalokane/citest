<?php
/**
 * @file
 * bt48_theme_helper.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bt48_theme_helper_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_social_media'
  $field_bases['field_social_media'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_media',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_predefined' => '',
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
