<!--css hack-->
<style>

  .form-required {
    display: none;
  }
  .form {
    background-color: #fff9f2;
    /*border: 3px solid #fe971e;
    border-radius: 7px;*/
  }
  /*fff9f2 fe971e*/
  .hero--gout {
    background-color: #3f3f3f;
    background-image: url(/<?php print $theme_path; ?>/images/bg_crystals_v3.png);
    background-size: cover;
    background-repeat: no-repeat;
    position: relative;
    background-position: center;
  }
  @media (min-width: 52em) {
    .hero--gout {
      background-size: 55% 100%;
      background-position: left;
    }
  }
  .hero--gout::after {
    content: '';
    background-image: url(/<?php print $theme_path; ?>/images/edge_bottom_brush.png);
    position: absolute;
    bottom: 0;
    background-position: bottom;
    background-size: contain;
    background-repeat: no-repeat;
    width: 100%;
    height: 16px;
  }
  .bg--crystals--v2 {
    background-image: url(/<?php print $theme_path; ?>/images/bg_crystals_v2.png);
    background-size: cover;
    background-repeat: no-repeat;
    background-position: center;
  }
  .edge--ragged--top,
  .edge--ragged--bottom {
    position: relative;
  }
  .edge--ragged--top::before {
    content: '';
    background-image: url(/<?php print $theme_path; ?>/images/ragged_top.png);
    position: absolute;
    top: 0;
    background-position: top;
    background-size: contain;
    background-repeat: no-repeat;
    width: 100%;
    height: 16px;
  }
  .edge--ragged--bottom::after {
    content: '';
    background-image: url(/<?php print $theme_path; ?>/images/ragged_bottom.png);
    position: absolute;
    bottom: 0;
    background-position: bottom;
    background-size: contain;
    background-repeat: no-repeat;
    width: 100%;
    height: 16px;
  }
  @media print{
    * {
      color: #3b444f !important;
      background-color: white !important;
    }
    a[href]:after {
      content: " (" attr(href) ")";
    }

    .embedded-video {
      display: none;
      width: 0 !important;
      height: 0 !important;
      overflow: hidden !important;
      line-height: 0pt !important;
      white-space: nowrap;
    }

    .hero--gout,
    .bg--crystals--v1,
    .bg--crystals--v2,
    .bg--crystals--v3 {
      background: inherit;
    }
    .container,
    .prose {
      max-width: 650px;
    }
    .print--padding--none {
      padding: 0;
    }
  }
</style>

<?php if($is_admin): ?>
  <section class="container padding-y--lg">
    <h3>Admin only: Profiles for this submission</h3>
    <?php print $profile_names;?>
  </section>
<?php endif; ?>
<section class="hero--gout margin-bottom--xxl print--hide">
  <div class="container display--flex flex-wrap--wrap align-items--center padding-y--xl padding-x--md">
    <div class="display--flex width--100 md--width--50 padding-x--md padding-y--xl md--padding-right--lg">
      <div class="display--inline-block center color--white">
        <div class="font-size--xl line-height--120 caps">Thanks for taking time to answer our questions.</div>
        <div class="padding-top--lg font-size--lg">Below you'll find personalized content based on your answers that will help you take control of your gout health.</div>
      </div>
    </div>
    <div class="width--100 md--width--50 md--padding-left--lg ">
      <img class="display--block center" style="max-width:280px" src="/<?php print $theme_path; ?>/images/legs_header.gif">
    </div>
  </div>
</section>
<section class="print--show hide">
  <div class="container padding-x--md">
    <div class="text-align--center">
      <h2 class="padding-bottom--xl">Here is personalized information that will help you take control of your gout health.</h2>
    </div>
  </div>
</section>
<section>
  <div class="container display--flex flex-wrap--wrap padding-bottom--xl padding-x--md">
    <h2 class="print--hide width--100 padding-bottom--xl text-align--center">Personalized Health Information</h2>
    <div class="print--hide width--100 md--width--50 md--padding-right--xxxl text-align--center">
      <img src="/<?php print $theme_path; ?>/images/book300x300.png" alt="book with open pages">
    </div>
    <div class="print--width--100 width--100 md--width--50 md--padding-left--lg print--padding--none">
      <p class="print--hide text-align--center md--text-align--left ">Explore these topics to better understand your gout health</p>
      <?php print $knowledge_units; ?>
    </div>
  </div>
</section>
<section>
  <div class="container padding-top--xxxl padding-x--md">

    <div class="display--flex flex-wrap--wrap flex-direction--row-rev ">
        <div class="width--100 md--width--50 print--hide">
          <div class="text-align--center padding-bottom--md">
            <img src="/<?php print $theme_path; ?>/images/doctor300x300.png" alt="an outline drawing of a doctor with a stethoscope">
          </div>
        </div>
        <div class="print--width--100 width--100 md--width--50">
          <h2 class="text-align--center md--text-align--left padding-bottom--md">Important next steps</h2>
          <?php print $actions;?>
        </div>
    </div>
  </div>
</section>
<section class="print--hide">
  <div class="container padding-y--xxl padding-x--md">
    <div class="print--hide md--width--50 text-align--center md--text-align--left margin-bottom--md">
      <a data-track="event" data-category="cta" data-action="print" data-label="spe-gout-results" href="#" class="hide sm--display--inline font-size--sm caps button--gray-3 js--print-link margin--xxs"><i class="icon-print"></i> <span class="sm--display--inline">Print</span></a>
      <a data-track="event" data-category="cta" data-action="email" data-label="spe-gout-results" href="mailto:?subject=Shared%20from%20National%20Kidney%20Foundation&amp;body=<?php print rawurldecode("Here is content from the National Kidney Foundation you might be interested in: $path");?>" class="font-size--sm caps button--gray-3 margin--xxs"><i class="icon-mail-alt"></i> <span class=" sm--display--inline">Email</span></a>
      <a data-track="event" data-category="cta" data-action="bookmark" data-label="spe-gout-results" href="#" class="font-size--sm caps button--gray-3 js--bookmark-link margin--xxs"><i class="icon-bookmark"></i> <span class="sm--display--inline">Bookmark</span></a>
    </div>
  </div>
</section>
<section class="bg--gray-1 edge--ragged--bottom edge--ragged--top bg--crystals--v2">
  <div class="prose center padding-y--xxl padding-x--md text-align--center">
    <h2 class="width--100 padding-bottom--xl ">If you have gout, you should get checked for kidney disease</h2>
    <div class=" print--hide display--flex sm--flex-wrap--no-wrap flex-wrap--wrap padding-y--md  align-items--center ">
      <div class="padding--xs center">
        <div class="circle square--lg padding--lg bg--white border border-color--gray-4 border-width--sm">
          <img src="/<?php print $theme_path; ?>/images/foot300x300.png" />
        </div>
      </div>
      <div class="sm--show font-size--xxxxl padding--md">&rarr;</div>
      <div class="sm--hide width--100 font-size--xxxl  padding--md">&darr;</div>
      <div class="padding--xs center">
        <div class="circle square--lg padding--lg bg--white border border-color--gray-4 border-width--sm">
          <img src="/<?php print $theme_path; ?>/images/list300x300.png" />
        </div>
      </div>
    </div>
    <p>Speak with your healthcare professional about getting your <strong>Kidney Score</strong> - 2 simple tests: a blood test for kidney function called GFR; and a urine test for kidney damage called ACR.</p>

  </div>
</section>
<section>
  <div class="container padding-y--xxxl padding-x--md">
    <h2 class="width--100 padding-bottom--xl text-align--center">More Resources</h2>
    <div class="center prose">
      <div class="display--flex align-items--flex-start margin-bottom--sm">
        <div class="print--hide margin-right--md" style="flex: 0 0 75px;">
          <img src="/<?php print $theme_path; ?>/images/inphographic75x75.png" alt="infographic icon">
        </div>
        <div class="margin-left--md" style="flex: 1;">
          <p><span class="bold">Gout and Kidney Disease</span>
            <br><a class="bold" href="https://www.kidney.org/sites/default/files/01-10-7307_IBG_Gout_Infographic_Pad5.pdf">Download</a> an infographic that outlines the connection between gout and kidney disease.
          </p>
        </div>
      </div>
        <div class="display--flex align-items--flex-start margin-bottom--sm">
          <div class="print--hide margin-right--md" style="flex: 0 0 75px;">
              <img src="/<?php print $theme_path; ?>/images/factsheet75x75.png" alt="factsheet icon">
          </div>
          <div class="margin-left--md" style="flex: 1;">
            <p><span class="bold">Gout Fact sheet</span>
              <br> A fact sheet about gout and CKD, and why and how you should manage both conditions. <a class="bold" href="https://www.kidney.org/sites/default/files/02-10-7789_BBI_TakedaGout_Pad_2.pdf">Download now.</a>
            </p>
          </div>
        </div>
        <div class="display--flex align-items--flex-start margin-bottom--sm">
          <div class="print--hide margin-right--md" style="flex: 0 0 75px;">
            <img src="/<?php print $theme_path; ?>/images/checklist75x75.png" alt="checklist icon">
          </div>
          <div class="margin-left--md" style="flex: 1;">
            <p><span class="bold">Gout and Uric Acid tracker</span>
              <br> Track your serum uric acid (sUA) level (amount of uric acid in your blood), estimated glomerular filtration rate (eGFR) and albumin-to-creatine ratio using the online Gout and Uric Acid Tracker by <a class="bold" href="https://www.kidney.org/sites/default/files/trackyourlabsgout.xlsx">clicking here</a>, or by printing out the <a href="https://www.kidney.org/sites/default/files/11-10-4832_ebc_gout_checklist.pdf" target="PDF" class="bold">PDF version.</a>
            </p>
          </div>
        </div>
        <div class="display--flex align-items--flex-start margin-bottom--sm">
          <div class="print--hide margin-right--md" style="flex: 0 0 75px;">
            <img src="/<?php print $theme_path; ?>/images/video75x75.png" alt="video icon">
          </div>
          <div class="margin-left--md" style="flex: 1;">
            <p><span class="bold">Video</span>
              <br>
              <a href="https://www.youtube.com/watch?v=jdlWQC-o76M" class="bold">Hear from a patient</a> as he looks back on life with gout and how he has dealt with it medically, physically, and emotionally.
            </p>
          </div>
        </div>
    </div>
  </div>
</section>
<section>
  <div class="bg--gray-2 padding-top--xl padding-x--md">
    <div class="container prose text-align--center">
      <h2 class="width--100 text-align--center">Thank You</h2>
      <p>We appreciate you taking the time to answer our questions and for reviewing these topics. Gout can be a chronic, or long term disease, so it’s important to stay with any treatment plan recommended by a clinician and report any sudden changes in symptoms.</p>
    <p>If you have questions, you can speak with your healthcare team or <a href="https://www.kidney.org/about/contact">contact</a> the National Kidney Foundation.</p>
    </div>
  </div>
  <div class="bg--gray-2 padding-bottom--xl padding-x--md">
    <div class="container prose text-align--center">
      <div  class="print--hide">
        <h3 class="width--100 text-align--center">We want to know what you think.</h3>
        <p>Help us continue to improve this content by answering a short survey.</p>
        <div class="margin-bottom--md">

          <a class="button--orange caps padding-y--md padding-x--xl color--white" href="https://www.surveymonkey.com/r/D88G2TM?ckd=<?php print $submission->field_spe_ckd_diagnosis[0]->value();?>&gt=<?php print $submission->field_spe_gout_diagnosis[0]->value();?>" target="_blank">Take survey</a>
        </div>
      </div>
    </div>
  </div>
</section>
