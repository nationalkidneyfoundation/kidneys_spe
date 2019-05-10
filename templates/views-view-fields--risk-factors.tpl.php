<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
  <div class="prose padding--xl margin--xl rounded border border-width--sm border-color--gray-4 bg--gray-1 print--border-width--none">
    <?php if (isset($fields['field_spe_icon'])): ?>
      <div class="print--hide color--white z-index--400 square--md circle bg--dazzle margin-top--xxxl- margin-left--xxxl- text-align--center font-size--xl bold">
        <div class="width--60 center">
          <?php print $fields['field_spe_icon']->content; ?>
        </div>
      </div>
    <?php endif;?>
    <div class="padding-x--md">
      <div class="bold font-size--lg padding-bottom--xxs"><?php print $fields['title']->content; ?></div>
      <?php print $fields['body']->content; ?>
    </div>
  </div>
