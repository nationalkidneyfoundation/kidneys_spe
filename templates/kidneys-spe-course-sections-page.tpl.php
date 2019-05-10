
  <section class=" padding-y--xl ">
  	<div class="container md--display--flex flex-wrap--wrap align-items--center">
  	  <div class="align-self--flex-start padding-x--md padding-y--xxxl width--100 md--width--50 md--padding-right--xxxl">

        	<h1 class="caps padding-top--xl font-size--xl font-weight--400">
            Thanks for taking time to answer our questions.
          </h1>
          <p class="font-size--lg">We've compiled personalized information that will help
            you take control of your kidney health.
          </p>
  		</div>

  			<div class="width--100 md--width--50 md--padding-y--xxl md--padding-left--xxl padding-x--md">
      		<div class="bg--gray-1 rounded">
            <div class="overflow--hidden">
              <div class="position--relative">
                <div class="padding-x--lg padding-top--lg margin-bottom--xl">
                  <p class="font-size--xl">Based on your answers, the health of your kidneys is:</p>
                </div>
                <div class="position--relative display--inline-block margin-top--xl text-align--center padding-x--lg"
                  style="left:<?php print $type['score'];?>%;transform:translateX(-50%);">
                  <div class="bold padding-y--sm padding-x--md caps font-size--md line-height--120 color--gray-4 white-space--nowrap rounded"
                    style="background-color:<?php print $color;?>;">
                      <?php print $type['name'];?>
                  </div>
                  <div class="arrow center" style="width:0;height:0;border-left:20px solid transparent;border-right:20px solid transparent; border-top:20px solid <?php print $color;?>">

                  </div>
                </div>
              </div>
              <div class="display--flex padding-x--xl padding-y--md caps bold font-size--sm" style="background: linear-gradient(to left, #d51217, #FEDC00, #018241)">
                <div class="width--33 vertical-align--middle text-align--left">
                  <?php print $type['scale'][0];?></div>
                <div class="width--33 vertical-align--middle text-align--center">
                  <?php print $type['scale'][1];?></div>
                <div class="width--33 vertical-align--middle text-align--right">
                  <?php print $type['scale'][2];?></div>
              </div>
            </div>

       		</div>
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
  <section class="padding-y--xl border-top bg--gray-1">
    <div class="container">
      <a name="course-sections"></a>
      <div class="prose center padding-x--md ">
        <h3 class="center prose font-size--xl ">Take control of your kidney health</h3>
        <p class="font-size--lg">
          We've created a custom course that walks you through important topic in a clear and concise manner. Start with section one below.
        </p>
        <div class="padding-top--lg display--none">

          <form action="/content/kidney-basics" method="post" id="kidneys-misc-pardot-form0" accept-charset="UTF-8"><div><div id="pardot-form-upQ2oTMDDm"><div class=" pardot-form search-form form-wrapper" id="edit-container--3"><div class="form-item form-type-textfield form-item-email">
            <label class="element-invisible" for="edit-email">Email </label>
           <input placeholder="Enter your email" type="text" id="edit-email" name="email" value="" size="60" maxlength="128" class="form-text">
          </div>
          <input type="submit" id="edit-submit" name="op" value="Sign Up" class="form-submit ajax-processed"></div></div><input type="hidden" name="form_build_id" value="form-AAPRXNfzbTR5OKs4-31evW-XBATu3-K6cxagjd4svIs">
          <input type="hidden" name="form_id" value="kidneys_misc_pardot_form0">
          </div></form>
          <p class="">Providing your email will help us keep you on track, but it is not required to start learning.</p>
        </div>
      </div>
      <div class="padding-x--md  padding-top--xxl display--flex flex-wrap--wrap justify-content--center ">
        <?php foreach($sections as $section):?>
          <?php print $section;?>
        <?php endforeach;?>
      </div>
    </div>
  </section>
  <section class="padding-y--xl hide">
    <div class="prose center">
      <a name="course-desc"></a>
      <h3 class="padding-x--md  center prose">Course Description</h3>
      <div class="padding-x--md  padding-y--md display--flex flex-wrap--wrap">
        <?php print $course_description;?>
      </div>
    </div>
  </section>
