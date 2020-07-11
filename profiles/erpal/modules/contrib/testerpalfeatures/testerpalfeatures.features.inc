<?php

/**
 * @file
 * testerpalfeatures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function testerpalfeatures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
