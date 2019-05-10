<?php //dpm($health, 'health'); ?>
<?php //dpm($risk, 'risk'); ?>
<?php //dpm($submission->value()); ?>
<section class="padding-top--xxl ">
  <div class="center prose padding-x--md">
    <p class="text-align--left font-size--xxl">
      You have
      <span class="bold"><?php print $factor_count; ?>
      out of <?php print $total_factors; ?></span>
      risk factors for kidney disease.
    </p>
  </div>
</section>

<?php if($factor_count > 0): ?>
  <section class="padding-bottom--xxl">
    <div class="prose center padding-x--md">
      <div class="prose center font-size--lg">
        <p class="">
          The information you provided in the assessment suggests that <span class="bold">you are at risk for developing chronic kidney disease</span>.
        </p>
        <p>
          Speak with your doctor about ??? tests.
        </p>
      </div>
      <?php //print $risk_factors;?>
      <h2>Your risk factors</h2>
      <div class="display--flex flex-wrap--nowrap flex-direction--column align-items--center">
        <?php foreach($risk_factors_data as $risk_factor): ?>
          <div class="padding-bottom--lg">
            <div class="bold font-size--lg padding-bottom--xxs">
              <?php print render($risk_factor->node_title); ?>
            </div>
            <?php print render($risk_factor->field_body); ?>
          </div>
        <?php endforeach; ?>
      </div>
    </div>
  </section>
<?php endif; ?>

<script type="text/javascript">
  window.onload = function() { window.print(); }
</script>
