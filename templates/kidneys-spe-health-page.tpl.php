

<?php if($is_admin): ?>
  <section class="container padding-y--lg">
    <h3>Admin only: Profiles for this submission</h3>
    <?php print $profile_names;?>
  </section>
<?php endif; ?>
<section class="hero--health edge--ragged--bottom margin-bottom--xxl print--hide">
  <div class="container display--flex flex-wrap--wrap align-items--center padding-y--xl padding-x--md">
    <div class="display--flex width--100 md--width--50 padding-x--md padding-y--xl md--padding-right--lg">
      <div class="display--inline-block center color--white">
        <div class="font-size--xl line-height--120 caps">Thanks for taking time to answer our questions.</div>
        <div class="padding-top--lg font-size--lg">Below you'll find individualized content based on your answers that will help you take control of your kidney health.</div>
      </div>
    </div>
  </div>
</section>
<section class="print--show hide">
  <div class="container padding-x--md">
    <div class="text-align--center">
      <h2 class="padding-bottom--xl">Here is individualized information that will help you take control of your kidney health.</h2>
    </div>
  </div>
</section>
<section>
  <div class="container display--flex flex-wrap--wrap margin-bottom--xxl padding-x--md">
    <h2 class="prose center text-align--center margin-bottom--lg">Based on your lab results the health of your kidneys is:</h2>

    <div class="md--padding-x--xl width--100 prose center">
      <div class="position--relative">
        <div class="position--relative display--inline-block text-align--center padding-x--lg "
          style="left:<?php print $type['score'];?>%;transform:translateX(-50%);">
          <div class="padding-y--sm width--md color--gray-4 white-space--nowrap pill caps bold font-size--sm"
            style="background-color:<?php print $color;?>;">
              <?php print $type['name'];?>
          </div>
          <div class="arrow center" style="width:0;height:0;border-left:10px solid transparent;border-right:10px solid transparent; border-top:10px solid <?php print $color;?>">

          </div>
        </div>
      </div>
      <div class="pill border border-color--gray-4 border-width--sm padding--xxs margin-bottom--sm">
        <div class="display--flex padding-x--xl padding-y--md pill align-items--center caps bold font-size--sm"
             style="background: linear-gradient(to right, #d51217, #FEDC00, #018241)">
          <div class="width--33 vertical-align--middle text-align--left">
            <?php print $type['scale'][2];?></div>
          <div class="width--33 vertical-align--middle text-align--center">
            <?php print $type['scale'][1];?></div>
          <div class="width--33 vertical-align--middle text-align--right">
            <?php print $type['scale'][0];?></div>
        </div>
      </div>
      <p class="text-align--center"><a href="#">Learn more</a> about this result.</p>
    </div>

  </div>
</section>
<section class="padding-y--xl bg--gray-1 display--none">
  <div class="prose center padding-x--md  ">
    <a name=""></a>
    <h3 class="font-size--xl ">Get started here</h3>
    <div class="padding-bottom--md ">
      <div class="">
        <?php //print $video;?>

        <p class="font-size--lg">
          Here are a few things that are important for you to consider now. We know you are busy and understanding your kidney health can feel complex and overwhelming, the items listed here should help you get started.
        </p>
      </div>
      <div class="">
        <?php print $actions;?>
      </div>
    </div>
  </div>
</section>
<section class="padding-y--xl border-top">
  <div class="container">
    <a name="course-sections"></a>
    <div class="prose center padding-x--md text-align--center">
      <h3 class="font-size--xl ">Take control of your kidney health</h3>
      <p class="font-size--lg">
        We've created a custom course that walks you through important topics in a clear and concise manner. Start with section one below.
      </p>
    </div>
    <div class="padding-x--md  padding-top--xxl display--flex flex-wrap--wrap justify-content--center ">
      <?php foreach($sections as $section):?>
        <div class="sm--padding-right--xl padding-y--xl width--100 sm--width--50 md--width--33 lg--width--25">
          <?php print $section;?>
        </div>
      <?php endforeach;?>
    </div>
  </div>
</section>

<section class="print--hide border-bottom">
  <div class="container padding-y--xxl padding-x--md">
    <div class="print--hide text-align--center">
      <a data-track="event" data-category="cta" data-action="print" data-label="spe-health-results" href="#" class="hide sm--display--inline font-size--sm caps button--gray-1 js--print-link margin--xxs"><i class="icon-print"></i> <span class="sm--display--inline">Print</span></a>
      <a data-track="event" data-category="cta" data-action="email" data-label="spe-health-results" href="mailto:?subject=Shared%20from%20National%20Kidney%20Foundation&amp;body=<?php print rawurldecode("Here is content from the National Kidney Foundation you might be interested in: $path");?>" class="font-size--sm caps button--gray-1 margin--xxs"><i class="icon-mail-alt"></i> <span class=" sm--display--inline">Email</span></a>
      <a data-track="event" data-category="cta" data-action="bookmark" data-label="spe-health-results" href="#" class="font-size--sm caps button--gray-1 js--bookmark-link margin--xxs"><i class="icon-bookmark"></i> <span class="sm--display--inline">Bookmark</span></a>
    </div>
  </div>
</section>


<section>
  <div class="hide padding-top--xl padding-x--md">
    <div class="container prose text-align--center">
      <h2 class="width--100 text-align--center">Thank You</h2>
      <p>We appreciate you taking the time to answer our questions and for reviewing these topics. Gout can be a chronic, or long term disease, so it’s important to stay with any treatment plan recommended by a clinician and report any sudden changes in symptoms.</p>
      <p>If you have questions, you can speak with your healthcare team or <a href="https://www.kidney.org/about/contact">contact</a> the National Kidney Foundation.</p>
    </div>
  </div>
  <div class="padding-y--xl padding-x--md">
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
