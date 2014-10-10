<?php
/**
 * @file
 * events_bt48.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function events_bt48_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_events-map:events-map
  $menu_links['main-menu_events-map:events-map'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events-map',
    'router_path' => 'events-map',
    'link_title' => 'Events Map',
    'options' => array(
      'identifier' => 'main-menu_events-map:events-map',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_events:events
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Events Map');


  return $menu_links;
}
