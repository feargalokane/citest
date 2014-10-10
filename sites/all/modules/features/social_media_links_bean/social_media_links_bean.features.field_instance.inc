<?php
/**
 * @file
 * social_media_links_bean.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function social_media_links_bean_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-social_links-field_social_media_link'
  $field_instances['bean-social_links-field_social_media_link'] = array(
    'bundle' => 'social_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Paste the url to your social media provider - remember to include the <strong>http://</strong> at the beginning or the link won\'t validate.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'linkicon',
        'settings' => array(
          'field_delimiter' => '',
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
          'linkicon_color' => 'grey',
          'linkicon_font' => 'sites/all/libraries/fontello/css/fontello.css',
          'linkicon_global_title' => '',
          'linkicon_load' => 1,
          'linkicon_no_text' => 0,
          'linkicon_position' => '',
          'linkicon_prefix' => 'icon',
          'linkicon_size' => 'large',
          'linkicon_style' => 'round-10',
          'linkicon_tooltip' => 1,
          'linkicon_vertical' => 1,
          'linkicon_wrapper_class' => '',
        ),
        'type' => 'linkicon',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_social_media_link',
    'label' => 'Social media link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
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
google|Google Plus
linkedin|LinkedIn
pinterest-circled|Pinterest
twitter|Twitter
vimeo-squared|Vimeo
youtube|YouTube',
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
  t('Paste the url to your social media provider - remember to include the <strong>http://</strong> at the beginning or the link won\'t validate.');
  t('Social media link');

  return $field_instances;
}
