<?php //dpm($health, 'health'); ?>
<?php //dpm($risk, 'risk'); ?>
<?php //dpm($submission->value()); ?>
<section class="bg--gray-4 color--white padding-x--lg md--padding--xl">
  <div class="container md--padding-x--xxl">
    <div class="center prose">
      <div class="sm--padding--xl padding--md">
        <h2 class="display--none text-align--left font-size--xxl padding-top--none">
          Thanks for taking time to answer our questions.
        </h2>
        <?php if($type['type'] == 'health'): ?>
        <h2 class="text-align--left font-size--xxl padding-top--none">Based on what you've told us your <span style="color:<?php print $color;?>;">kidney health</span> is:</h2>
        <?php else: ?>
        <h2 class="text-align--left font-size--xxl padding-top--none">Based on what you've told us your <span style="color: <?php print $color;?>;">risk for kidney disease</span> is:</h2>
        <?php endif;?>
        <div class="padding-top--xl padding-bottom--xxl">
          <div class="position--relative">
            <div class="position--relative display--inline-block  text-align--center padding-x--lg"
              style="left:<?php print $type['score'];?>%;transform:translateX(-50%);">
              <div class="bold padding-y--sm padding-x--md caps font-size--md line-height--120 color--gray-4 white-space--nowrap"
                style="background-color:<?php print $color;?>;">
                  <?php print $type['name'];?>
              </div>
              <div class="arrow center" style="width:0;height:0;border-left:20px solid transparent;border-right:20px solid transparent; border-top:20px solid <?php print $color;?>">

              </div>
            </div>
          </div>
          <div class="display--table vertical-align--middle width--100 padding-x--xl padding-y--md caps bold color--gray-4 font-size--sm" style="background: linear-gradient(to left, #d51217, #FEDC00, #018241)">
            <div class="display--table-cell width--33 vertical-align--middle text-align--left">
              <?php print $type['scale'][0];?></div>
            <div class="display--table-cell width--33 vertical-align--middle text-align--center">
              <?php print $type['scale'][1];?></div>
            <div class="display--table-cell width--33 vertical-align--middle text-align--right">
              <?php print $type['scale'][2];?></div>
          </div>
        </div>
         <p class="font-size--lg">Knowing this is just the beginning. Below we've compiled personalized information that will help
           you <span class=" bold" style="color: <?php print $color;?>;">take control of your kidney health.</span>
         </p>
       </div>
     </div>
   </div>
</section>
