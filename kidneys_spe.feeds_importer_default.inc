<?php

/**
 * @file
 * kidneys_spe.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function kidneys_spe_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'spe_course';
  $feeds_importer->config = array(
    'name' => 'spe course',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'section',
            'target' => 'field_spe_course_sections:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'code_name',
            'target' => 'field_spe_code_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'form_header',
            'target' => 'field_spe_course_form_header',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'form_subheader',
            'target' => 'field_spe_course_form_sub_header',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'lede',
            'target' => 'field_lede',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'spe_course',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['spe_course'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'spe_knowledge_units';
  $feeds_importer->config = array(
    'name' => 'spe knowledge units',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'type',
            'target' => 'field_spe_ku_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'category',
            'target' => 'field_base_category_v2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'slug',
            'target' => 'field_base_slug',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'profile',
            'target' => 'field_spe_related_profile:label',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'knowledge_unit',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['spe_knowledge_units'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'spe_profiles';
  $feeds_importer->config = array(
    'name' => 'spe profiles',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'ckd',
            'target' => 'field_spe_ckd_diagnosis',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'acr',
            'target' => 'field_spe_acr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'bmi',
            'target' => 'field_spe_bmi',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'diabetes',
            'target' => 'field_spe_diabetes_diagnosis',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'gfr',
            'target' => 'field_spe_egfr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'family',
            'target' => 'field_spe_family_history',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'gout_diagnosis',
            'target' => 'field_spe_gout_diagnosis',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'gout_symptoms',
            'target' => 'field_spe_gout_symptoms',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'uric',
            'target' => 'field_spe_gout_uric_acid_level',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'transplant',
            'target' => 'field_spe_had_transplant',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'heart',
            'target' => 'field_spe_heart_disease',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'dialysis',
            'target' => 'field_spe_on_dialysis',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'prediabetes',
            'target' => 'field_spe_prediabetes_diagnosis',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'bloodpressure',
            'target' => 'field_spe_htx_diagnosis',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'patient_profile',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['spe_profiles'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'spe_sections';
  $feeds_importer->config = array(
    'name' => 'spe sections',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'kus',
            'target' => 'field_section_knowledge_units:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'period',
            'target' => 'field_spe_section_period',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'spe_section',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['spe_sections'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'spe_taxonomy_terms';
  $feeds_importer->config = array(
    'name' => 'spe taxonomy terms',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'spe_categories',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['spe_taxonomy_terms'] = $feeds_importer;

  return $export;
}
