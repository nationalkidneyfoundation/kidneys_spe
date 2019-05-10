<?php //dpm($health, 'health'); ?>
<?php //dpm($risk, 'risk'); ?>
<?php //dpm($submission->value()); ?>
<section class="hero--kidneys bg--gray-1 background-size--cover min-height--xl display--flex">
  <div class="container padding-x--md">
    <div class="center prose">
      <h2 class="display--none text-align--left font-size--xxl padding-top--none">
        Thanks for taking time to answer our questions.
      </h2>
      <p class="text-align--left font-size--xxxl padding-top--xxl">
        You have
        <span class="color--gray-4 bold"><?php print $factor_count; ?>
        out of <?php print $total_factors; ?></span>
        risk factors for kidney disease.
      </p>
     </div>
   </div>
</section>
