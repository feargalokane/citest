<?php
/**
 * @file
 * bt48_theme_helper.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bt48_theme_helper_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-social_icons-field_social_media'
  $field_instances['bean-social_icons-field_social_media'] = array(
    'bundle' => 'social_icons',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'linkicon',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'linkicon_bundle' => '',
          'linkicon_color' => 'orange',
          'linkicon_font' => 'sites/all/libraries/fontello/css/fontello.css',
          'linkicon_global_title' => '',
          'linkicon_load' => 1,
          'linkicon_no_text' => 1,
          'linkicon_position' => '',
          'linkicon_prefix' => 'icon',
          'linkicon_size' => 'large',
          'linkicon_style' => 'round-8',
          'linkicon_tooltip' => 1,
          'linkicon_vertical' => 0,
          'linkicon_wrapper_class' => '',
        ),
        'type' => 'linkicon',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_social_media',
    'label' => 'Social media',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'predefined',
      'title_maxlength' => 128,
      'title_predefined' => 'facebook|Facebook
google|Google
linkedin|LinkedIn
pinterest-circled|Pinterest
twitter|Twitter
vimeo-squared|Vimeo
youtube|YouTube
',
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Social media');

  return $field_instances;
}
