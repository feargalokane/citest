<?php
/**
 * @file
 * slideshow_bt48.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slideshow_bt48_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_overlay|field_collection_item|field_slide|full';
  $field_group->group_name = 'group_slide_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_slide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_slide_title',
      1 => 'field_slide_link',
      2 => 'field_slide_subttitle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slide Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'slide-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_slide_overlay|field_collection_item|field_slide|full'] = $field_group;

  return $export;
}
