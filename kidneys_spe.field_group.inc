<?php

/**
 * @file
 * kidneys_spe.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kidneys_spe_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_11|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_11';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step',
    'weight' => '3',
    'children' => array(
      0 => 'field_spe_gout_symptoms',
      1 => 'field_spe_pot_symptoms',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_11|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_1|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 1',
    'weight' => '9',
    'children' => array(
      0 => 'field_spe_family_history',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 1',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_1|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_2|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_spe_htx_diagnosis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 2',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_2|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_3|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 3',
    'weight' => '1',
    'children' => array(
      0 => 'field_spe_diabetes_diagnosis',
      1 => 'field_spe_prediabetes_diagnosis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 3',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_3|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_4|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_4';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 4',
    'weight' => '7',
    'children' => array(
      0 => 'field_spe_ckd_diagnosis',
      1 => 'field_spe_on_dialysis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 4',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_4|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_5|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_5';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 5',
    'weight' => '8',
    'children' => array(
      0 => 'field_spe_had_transplant',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 5',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_5|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_6|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_6';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 6',
    'weight' => '10',
    'children' => array(
      0 => 'field_spe_weight',
      1 => 'field_spe_height_feet',
      2 => 'field_spe_height_inches',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 6',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_6|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_7|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_7';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 7',
    'weight' => '2',
    'children' => array(
      0 => 'field_spe_gout_diagnosis',
      1 => 'field_spe_pot_diagnosis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 7',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_7|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_8|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_8';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 8',
    'weight' => '11',
    'children' => array(
      0 => 'field_spe_egfr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 8',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_8|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_9|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_9';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 9',
    'weight' => '12',
    'children' => array(
      0 => 'field_spe_acr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 9',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_9|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_x|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step_x';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step X',
    'weight' => '6',
    'children' => array(
      0 => 'field_spe_heart_disease',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step X',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_x|entityform|personalized_health_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step|entityform|personalized_health_form|form';
  $field_group->group_name = 'group_step';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'personalized_health_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step',
    'weight' => '4',
    'children' => array(
      0 => 'field_spe_gout_uric_acid_level',
      1 => 'field_spe_pot_level',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step|entityform|personalized_health_form|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Step');
  t('Step 1');
  t('Step 2');
  t('Step 3');
  t('Step 4');
  t('Step 5');
  t('Step 6');
  t('Step 7');
  t('Step 8');
  t('Step 9');
  t('Step X');

  return $field_groups;
}
