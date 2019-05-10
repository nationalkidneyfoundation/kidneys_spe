<div class="print--hide1">
  <section class="padding-top--xxxl hero--waves-orange-tn">
    <div class="center prose padding-x--md padding-top--xxxl margin-top--xxxl linkHighlight">
      <?php if($scenario == 1): ?>
        <h1 class="font-size--xxxl margin-top--lg">You are at risk for Chronic Kidney Disease</h1>
        <h3>Understanding your results</h3>
        <p class="linkHighlight">
          The information you entered shows you have <?php print $factor_count;?> common risk factors for chronic kidney disease (CKD). This means you have an increased chance of developing CKD. Because CKD has no early symptoms, people at risk for CKD should be tested regularly to find out about their kidney health.
        </p>
        <p class="linkHighlight">
          The information below explains <span class="bold">your risk factors</span>. <a href="#" class="js--print-link">Print</a> a copy to discuss with your healthcare professional and ask them if CKD testing is right for you.
        </p>
      <?php endif;?>
      <?php if($scenario == 2): ?>
        <h1 class="font-size--xxxl margin-top--lg">You may be at risk for Chronic Kidney Disease</h1>
        <h3>Understanding your results</h3>
        <p class="linkHighlight">
          The information you entered shows you have <?php print $factor_count;?> common risk factors for diabetes. Diabetes is a major risk factor for kidney disease. Diabetes can be treated and can improved with healthy lifestyle choices.
        </p>
        <p class="linkHighlight">
          <a href="#" class="js--print-link">Print</a> a copy of this information to discuss with your healthcare professional and ask them if CKD testing is right for you.
        </p>
      <?php endif;?>
      <?php if($scenario == 3): ?>
        <h1 class="font-size--xxxl margin-top--lg">You are at risk for Chronic Kidney Disease</h1>

        <p class="padding-top--md linkHighlight">
          The information you entered suggests that it is likely you have chronic kidney disease.  Because many factors can cause the laboratory tests that diagnose CKD to fluctuate, it is important for you to speak with your doctor to confirm CKD through additional testing.
        </p>
        <p class="linkHighlight">
          Please <a href="#" class="js--print-link">print</a> the results of this survey, bring it to your doctor and ask for the two simple tests that will confirm if you have chronic kidney disease (To learn more about CKD testing).
        </p>
        <h3>Understanding your results</h3>
        <p class="linkHighlight">
          The information you entered shows you have <?php print $factor_count;?> of common risk factors for chronic kidney disease (CKD). Because CKD has no early symptoms, people at risk for CKD should be tested regularly to determine their kidney health.
        </p>
        <p>The information below explains <span class="bold">your risk factors</span>. <a href="#" class="js--print-link">Print</a> a copy to discuss with your healthcare professional.
        </p>
      <?php endif;?>
      <?php if($scenario == 4): ?>
        <h1 class="font-size--xxxl margin-top--lg">You have Chronic Kidney Disease</h1>
        <h3>Understanding your results</h3>
        <p class="linkHighlight">
          The information you entered shows you have <?php print $factor_count;?> common risk factors for chronic kidney disease (CKD) progression. The information below explains <span class="bold">your risk factors</span>.
        </p>
        <p class="linkHighlight">
          <a href="#" class="js--print-link">Print</a> a copy to discuss with your healthcare professional and ask them for regular CKD testing to monitor your kidney health.
        </p>
      <?php endif;?>
      <?php if($scenario == 5): ?>
        <h1 class="font-size--xxl margin-top--lg">You have no reported risk factors for Chronic Kidney Disease</h1>
        <p class="linkHighlight">
          The information you entered shows you have none of the common risk factors for chronic kidney disease (CKD).
        </p>
        <p class="linkHighlight">
          Keep doing what you are doing to stay healthy: <span class="font-style--italic">maintain a healthy weight, exercise regularly, don’t smoke</span>. These activities will help keep your kidneys healthy.
        </p>

        <p class="linkHighlight">
          Because other factors can impact your kidney health, partner with your clinician for more information about your health and risk. To learn more about preventing kidney disease:
        </p>
        <p>
          <a href="https://www.kidney.org/prevention/7-golden-rules-of-prevention">
            https://www.kidney.org/prevention/7-golden-rules-of-prevention
          </a>
          <a href="https://www.kidney.org/atoz/content/sixstepshealthprimer">
            https://www.kidney.org/atoz/content/sixstepshealthprimer
          </a>

        </p>
      <?php endif;?>
     </div>
  </section>
  <?php if($scenario != 5): ?>
    <section class="padding-y--xl bg--white">
      <div class="prose center padding-x--md">
        <h3 class="padding--none display--none">Your risk factors</h3>
        <div class="">
          <?php print $risk_factors;?>
        </div>
        <p class="linkHighlight display--none">Please <a href="#" class="js--print-link">print</a> the results of this survey, bring it to your doctor and ask for the two simple tests <a href="#tests">(eGFR and ACR)</a> that will tell you if you have chronic kidney disease.
        </p>
        <p class="text-align--center margin-top--xxxl ">
          <a href="#" class="js--print-link button--orange margin-right--sm margin-top--sm">print your results</a>
          <a href="<?php print $email;?>" class="button--outline--gray-4 margin-top--sm">email your results</a>
         </p>
      </div>
    </section>
  <?php endif; ?>
  <?php if($scenario != 5): ?>
    <section class="padding-y--xxl">
      <div class="prose center padding-x--md">

        <div class="">
          <a id="tests"></a>
          <h2 class="font-size--xxl font-weight--400 padding-bottom--sm border-width--none border-top-width--sm border-color--gray-4 border-style--solid">
            To learn more about CKD testing
          </h2>

          <!-- LEFT CONTENT -->
          <div class="sm--float--left sm--max-width--lg
                      md--margin-left--xxl- padding-bottom--lg sm--padding-right--xxl">
              <blockquote class="bg--gray-1 padding-x--lg padding-y--sm font-style--italic border-left border-width--md border-color--orange">
                  Ask your doctor for the estimated Glomerular Filtration Rate (eGFR) & Albumin-creatinine ratio, urine (ACR) tests.
              </blockquote>
          </div>
          <p>
            CKD is diagnosed using two, simple, inexpensive laboratory tests: <span class="bold">estimated Glomerular Filtration Rate </span> and <span class="bold">Albumin-creatinine ratio</span>, urine. Both tests are necessary to have a clear picture of your kidney health.
          </p>
          <p>
            CKD has a silent onset, which means there are often no symptoms until the kidneys are badly damaged.  Kidney tests will tell you how your kidneys are working. You should find out as early as possible if you have kidney disease to avoid problems and slow the loss of kidney function.
          </p>
          <p>
            Blood and urine tests show how well the kidneys are doing their job. Blood and urine tests reflect the level of function of the kidneys. Urine tests can show how well the kidneys remove body wastes and whether they are leaking too much protein.
          </p>
        </div>
        <h3>More about the lab tests</h3>
        <div class="border border-color--gray-3 rounded">
          <div id="list__accordion--11" class="border-bottom border-color--gray-3 padding--md">
            <a href="#" class="display--flex align-items--baseline color--gray-4" data-toggle="class" data-target="#list__accordion--11 i|#list__accordion--11 .desc" data-class="hide|hide">
              <div class="cursor--pointer font-size--sm">
                <i class="icon-right-open  color--gray-4"></i>
                <i class="hide icon-down-open color--orange"></i>
              </div>
              <div class="bold padding-left--sm">
                Estimated Glomerular Filtration Rate (eGFR)
              </div>
            </a>
            <div class="desc hide sm--margin-left--md padding-top--xxs sm--padding-left--sm">
              <p>
                This test is the best measure of how well the kidneys are removing wastes and excess fluid from the blood. Your healthcare professional can estimate GFR (eGFR) from the blood creatinine level using your age, weight, gender, race and body size. Normal eGFR can vary according to age (as you get older it goes down).
              </p>
              <p>
                An eGFR below 60 is a sign that the kidneys are not working properly. An eGFR below 15 may mean that the person will need treatment for kidney failure, such as dialysis or a kidney transplant. You can think of eGFR as a percent of kidney function with less than 60% being lower than normal. The eGFR goes down if kidney disease gets worse.
              </p>
            </div>
          </div>
          <div id="list__accordion--12" class="padding--md">
            <a href="#" class="display--flex align-items--baseline color--gray-4" data-toggle="class" data-target="#list__accordion--12 i|#list__accordion--12 .desc" data-class="hide|hide">
              <div class="cursor--pointer font-size--sm">
                <i class="icon-right-open  color--gray-4"></i>
                <i class="hide icon-down-open color--orange"></i>
              </div>
              <div class="bold padding-left--sm">
                Albumin-Creatinine Ratio (ACR)
              </div>
            </a>
            <div class="desc hide sm--margin-left--md padding-top--xxs sm--padding-left--sm">
              <p>
                The urine albumin test or albumin-creatinine ratio (ACR) is a test that measures the amount of protein called albumin in the urine. Albumin is found in high amounts in the blood, but almost no albumin is in the urine when the kidneys work well. However, kidney disease may cause albumin to spill (leak) into the urine, even early in the disease. An ACR more than 30  means that albumin has spilled into your urine because the kidneys are not working well.
              </p>
            </div>
          </div>
        </div>
    </section>
  <?php endif; ?>
  <section class="padding-y--xxxl">
    <div class="prose center padding-x--md">
      <h2 class="font-size--xxl font-weight--400 padding-bottom--sm border-width--none border-top-width--sm border-color--gray-4 border-style--solid">
        General information about the kidneys</h2>

      <div class="linkHighlight">
        <div class="sm--float--right sm--max-width--lg
                      md--margin-right--xxl- padding-bottom--lg sm--padding-left--xxl">
              <blockquote class="bg--gray-1 padding-x--lg padding-y--sm font-style--italic border-left border-width--md border-color--orange">
                  30 million American adults have CKD and millions of others are at increased risk. </blockquote>
          </div>
          <p>
            The kidneys filter your blood to remove wastes and excess fluid to make urine. They also help control blood pressure and make hormones that your body needs to stay healthy.
          </p>
          <p>
            Chronic kidney disease means the kidneys have been damaged by diabetes, high blood pressure or other disorders. Damage to your kidneys can lead to high blood pressure, heart disease and kidney failure.
          </p>
          <p>
            Chronic kidney disease has a silent onset, which means there are often no symptoms until the kidneys are damaged.  Kidney tests will tell you how your kidneys are working. If you are at risk, you should find out as early as possible if you have kidney disease to avoid problems and slow the loss of kidney function.
          </p>
          <p>
            More information about chronic kidney disease and how to slow its progression may be found at:<br>
            <a href="http://ckd.vacloud.us/">http://ckd.vacloud.us</a><br>
            <a href="https://www.kidney.org/atoz">https://www.kidney.org/atoz</a>
          </p>
      </div>

    </div>
  </section>
</div>
<div class="display--none  print--show">
  <section class="padding-top--xxl ">
    <div class="container padding-x--md">
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
      <div class="container padding-x--md">
        <div class="font-size--lg">
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
          <?php foreach($risk_factors as $risk_factor): ?>
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

</div>
