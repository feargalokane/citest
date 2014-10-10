<?php
/**
 * @file
 * site_config_bt48.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_config_bt48_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
