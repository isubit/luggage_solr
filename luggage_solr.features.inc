<?php
/**
 * @file
 * luggage_solr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_solr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_path" && $api == "entity_path") {
    return array("version" => "1");
  }
}
