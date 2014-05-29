<?php
/**
 * @file
 * luggage_solr.entity_path.inc
 */

/**
 * Implements hook_entity_path_config_default().
 */
function luggage_solr_entity_path_config_default() {
  $export = array();

  $entity_path_config = new stdClass();
  $entity_path_config->disabled = FALSE; /* Edit this to true to make a default entity_path_config disabled initially */
  $entity_path_config->api_version = 1;
  $entity_path_config->cid = '3';
  $entity_path_config->instance = 'taxonomy_term';
  $entity_path_config->path_pattern = 'search/content';
  $entity_path_config->query_pattern = 'f[0]=im_field_[term:vocabulary]%3A[term:tid]&retain-filters=1';
  $entity_path_config->fragment_pattern = '';
  $entity_path_config->config = array(
    'pathauto_cleanstring' => 0,
    'space_separator' => 0,
    'space_separator_char' => '_',
    'path_case' => 'lowercase',
  );
  $export['taxonomy_term'] = $entity_path_config;

  return $export;
}
