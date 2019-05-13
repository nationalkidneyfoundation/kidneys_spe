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
    background-image: url(/<?php print $theme_path; ?>/images/hero_crystals.png);
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
    background-image: url(/<?php print $theme_path; ?>/images/hero_edge.png);
    position: absolute;
     background-size: contain;
    background-repeat: no-repeat;
    width: 100%;
    height: 30px;
  }

  @media print{
    * {
      color: #333 !important;
      background-color: white !important;
    }
    .hero--gout {
      background: inherit;
    }
    .container {
      max-width: 650px;
    }
  }
</style>

<section class="hero--gout margin-bottom--xxl">
  <div class="container display--flex flex-wrap--wrap align-items--center padding-y--xl padding-x--md">
    <div class="display--flex width--100 md--width--50 padding-x--md padding-y--xl md--padding-right--lg">
      <div class="display--inline-block center color--white">
        <div class="md--font-size--xxl font-size--xl line-height--120 caps">Thanks for taking time to answer our questions.</div>
        <div class="padding-top--lg font-size--lg">We've compiled personalized information that will help you take control of your gout health</div>
      </div>
    </div>
    <div class="width--100 md--width--50 md--padding-left--lg ">
      <img class="display--block center" src="/<?php print $theme_path; ?>/images/goutheader_throb1.gif">
    </div>
  </div>
</section>
<section>
  <div class="container display--flex flex-wrap--wrap padding-bottom--xl padding-x--md">
    <h2 class="width--100 padding-bottom--xl text-align--center">Personalized Health Information</h2>
    <div class="width--100 md--width--50 md--padding-right--xxxl text-align--center">
      <img src="/<?php print $theme_path; ?>/images/book300x300.png" alt="book with open pages">
    </div>
    <div class="width--100 md--width--50 md--padding-left--lg">
      <p class="text-align--center md--text-align--left ">Explore these topics to better understand your gout health</p>
      <?php print $knowledge_units; ?>
    </div>
  </div>
</section>
<section>
  <div class="container padding-y--xxxl padding-x--md">
    <h3 class="text-align--center md--text-align--left padding-bottom--md">Topics to discuss with your healthcare professional</h3>
    <div class="display--flex flex-wrap--wrap flex-direction--row-rev ">
        <div class="width--100 md--width--50">
          <div class="text-align--center padding-bottom--md">
            <img src="/<?php print $theme_path; ?>/images/doctor300x300.png" alt="an outline drawing of a doctor with a stethoscope">
          </div>
        </div>
        <div class="width--100 md--width--50">
          <ul>
            <li>Your Kidney Score &ndash;2 simple tests: a blood test for kidney function called GFR; and a urine test for kidney damage called ACR.</li>
            <li>Drugs you may need to prevent gout flares and to help kidney disease from getting worse.</li>
            <li>The uric acid level in your blood and what level is good for you.</li>
            <li>The safety of any drugs or supplements your take.</li>
            <li>The right diet to help prevent gout flares and to help kidney disease from getting worse.</li>
            <p class="padding-top--sm padding-bottom--none"><strong>If your uric acide level is high:</strong>
            <br> Ask why you have a high level. You need to know because:</p>
            <li>High uric acide may mean you need to get checked for other health problems.</li>
            <li>A higher uric acid level may be okay for you. Most people with high uric acid don't get gout or kidney stones.</li>
          </ul>
        </div>
    </div>
  </div>
</section>
<section class="bg--gray-1">
  <div class="prose center padding-y--xl padding-x--md text-align--center">
    <h2 class="width--100 padding-bottom--xl ">If you have gout, you should get checked for kidney disease</h2>
    <div class="display--flex md--flex-wrap--no-wrap flex-wrap--wrap padding-y--md  align-items--center ">
      <div class="padding--xs center">
        <div class="circle square--lg padding--lg bg--white border border-color--gray-4 ">
          <img src="/<?php print $theme_path; ?>/images/foot300x300.png" />
        </div>
      </div>
      <div class="md--show font-size--xxxxl padding--md">&rarr;</div>
      <div class="md--hide width--100 font-size--xxxl  padding--md">&darr;</div>
      <div class="padding--xs center">
        <div class="circle square--lg padding--lg bg--white border border-color--gray-4 ">
          <img src="/<?php print $theme_path; ?>/images/list300x300.png" />
        </div>
      </div>
    </div>
    <p>Speak with your healthcare professional about getting your <strong>Kidney Score</strong> - 2 simple tests: a blood test for kidney function called GFR; and a urine test for kidney damage called ACR.</p>
  </div>
</section>
<section>
  <div class="container padding-y--xl padding-x--md">
    <h2 class="width--100 padding-bottom--xl text-align--center">More Resources</h2>
    <div class="center prose">
      <div class="display--flex align-items--flex-start margin-bottom--sm">
        <div class="margin-right--md" style="flex: 0 0 75px;">
          <img src="/<?php print $theme_path; ?>/images/inphographic75x75.png" alt="infographic icon">
        </div>
        <div class="margin-left--md" style="flex: 1;">
          <p><span class="bold">Gout Infographic:</span>
            <br> A visual and accessible infographic available for <a class="bold" href="#">download</a>
          </p>
        </div>
      </div>
        <div class="display--flex align-items--flex-start margin-bottom--sm">
          <div class="margin-right--md" style="flex: 0 0 75px;">
              <img src="/<?php print $theme_path; ?>/images/factsheet75x75.png" alt="factsheet icon">
          </div>
          <div class="margin-left--md" style="flex: 1;">
            <p><span class="bold">Gout Fact sheet:</span>
              <br> A fact sheet about gout and CKD, and why and how you should manage both conditions. <a class="bold" href="#">Download now.</a>
            </p>
          </div>
        </div>
        <div class="display--flex align-items--flex-start margin-bottom--sm">
          <div class="margin-right--md" style="flex: 0 0 75px;">
            <img src="/<?php print $theme_path; ?>/images/checklist75x75.png" alt="checklist icon">
          </div>
          <div class="margin-left--md" style="flex: 1;">
            <p><span class="bold">Gout and Uric Acid tracker</span>
              <br> Track your serum uric acid (sUA) level (amount of uric acid in your blood), estimated glomerular filtration rate (eGFR) and albumin-to-creatine ratio using the online Gout and Uric Acid Tracker by <a class="bold" href="#">clicking here</a>, or by printing out the <a href="" target="PDF" class="bold">PDF version.</a>
            </p>
          </div>
        </div>
        <div class="display--flex align-items--flex-start margin-bottom--sm">
          <div class="margin-right--md" style="flex: 0 0 75px;">
            <img src="/<?php print $theme_path; ?>/images/video75x75.png" alt="video icon">
          </div>
          <div class="margin-left--md" style="flex: 1;">
            <p><span class="bold">Video</span>
              <br>
              <a href="" class="bold">Hear from a patient</a> as he looks back on life with gout and how he has dealt with it medically, physically, and emotionally.
            </p>
          </div>
        </div>
    </div>
  </div>
</section>
<section>
  <div class="bg--gray-2 padding-y--xl padding-x--md">
    <div class="container text-align--center">
      <h2 class="width--100 text-align--center">We want to know what you think.</h2>
      <p>Help us continue to improve this content by answering a short survey</p>
      <div class="margin-bottom--md">

        <a class="button--orange caps padding-y--md padding-x--xl color--white" href="https://www.surveymonkey.com/r/M7FHZ6V" target="_blank">Take survey</a>
        <!--<a class="modal-trigger button--orange caps padding-y--md padding-x--xl color--white" href="#gout-survey">Take survey</a>
        <div class="mfp-hide md--margin--lg margin--sm padding--xxl position--relative bg--white display--flex align-items--center justify-content--center" id="gout-survey">
          <script>(function(t,e,s,n){var o,a,c;t.SMCX=t.SMCX||[],e.getElementById(n)||(o=e.getElementsByTagName(s),a=o[o.length-1],c=e.createElement(s),c.type="text/javascript",c.async=!0,c.id=n,c.src=["https:"===location.protocol?"https://":"http://","widget.surveymonkey.com/collect/website/js/tRaiETqnLgj758hTBazgd25IC9o_2BFTx8Xcdmq8OAAMGL1zxdpeFQaUqrVtAhRmgl.js"].join(""),a.parentNode.insertBefore(c,a))})(window,document,"script","smcx-sdk");</script>
        </div>-->
      </div>
    </div>
  </div>
</section>
