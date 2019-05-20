<?php

/**
 * @file
 * kidneys_spe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kidneys_spe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kidneys_spe_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function kidneys_spe_default_entityform_type() {
  $items = array();
  $items['personalized_health_form'] = entity_import('entityform_type', '{
    "type" : "personalized_health_form",
    "label" : "SPE",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "basic" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "basic" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "3" : 0,
        "5" : 0,
        "6" : 0,
        "9" : 0,
        "40" : 0,
        "7" : 0,
        "8" : 0,
        "11" : 0,
        "14" : 0,
        "13" : 0,
        "15" : 0,
        "10" : 0,
        "16" : 0,
        "17" : 0,
        "20" : 0,
        "12" : 0,
        "38" : 0,
        "19" : 0,
        "37" : 0,
        "18" : 0,
        "21" : 0,
        "22" : 0,
        "39" : 0,
        "28" : 0,
        "23" : 0,
        "24" : 0,
        "25" : 0,
        "26" : 0,
        "27" : 0,
        "30" : 0,
        "29" : 0,
        "31" : 0,
        "32" : 0,
        "33" : 0,
        "34" : 0,
        "35" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "current_type" : "personalized_health_form",
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/personalized-health-form",
        "alias" : "personalized-health\\/form\\/new",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function kidneys_spe_node_info() {
  $items = array(
    'knowledge_unit' => array(
      'name' => t('Knowledge Unit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patient_profile' => array(
      'name' => t('Patient Profile'),
      'base' => 'node_content',
      'description' => t('Serialized Patient Education (SPE) profile'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'spe_course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'spe_section' => array(
      'name' => t('Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
