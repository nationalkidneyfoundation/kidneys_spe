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
    background-image: url(/<?php print $theme_path; ?>/images/bg_crystals_v1.png);
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
    <div class="display--flex width--100 print--width--100 md--width--50 padding-top--none padding-bottom--xl md--padding-right--lg">
      <h1 class="display--inline-block center caps color--white">
        <div class="font-size--xxxxxl">Gout</div>
        <div class="font-size--xl font-weight--400">and your health</div>
      </h1>
    </div>
    <div class="print--hide width--100 md--width--50 md--padding-left--lg ">
      <img class="display--block center" src="/<?php print $theme_path; ?>/images/goutheader_throb1.gif">
    </div>
  </div>
</section>
<section>
  <div class="container display--flex flex-wrap--wrap padding-y--xxl padding-x--md">
    <div class="width--100 print--width--100 md--width--50 md--padding-right--xxxl margin-bottom--xl">
      <h2>What is Gout?</h2>
      <p class="prose">Gout is a condition where uric acid in your body turns into crystals that settle in joints. This can lead to pain and swelling that limits how you move.</p>
      <div class="width--md margin-y--xl padding-top--xxs bg--orange"></div>
      <h3>Take control of your gout health.</h3>
      <p  class="prose">Answer a few questions and we’ll provide you with personalized information about gout and your health.</p>
    </div>
    <div class="width--100 print--width--100 md--width--50 margin-y--xl md--padding-left--lg">
      <div class="padding-x--xxl padding-top--md form border border-color--gray-4 border-width--sm rounded">
        <?php print $form;?>
      </div>
    </div>
  </div>
</section>
<section class="bg--gray-1 bg--crystals--v2 border-bottom edge--ragged--top">
  <div class="container display--flex flex-wrap--wrap padding-y--xxxl padding-x--md">
    <h2 class="width--100 text-align--center">Gout and Kidney disease</h2>
    <div class="width--100 md--width--33 padding--md lg--padding--xl">
      <div class="height--100 padding--md bg--white border border-color--gray-4 border-radius--xl border-width--sm text-align--center">
        <img src="/<?php print $theme_path; ?>/images/1in3american200x200.png"/>
        <p class="padding--none"><strong>1 in 3 American adults</strong>
        <br>is at risk for kidney disease.</p>
      </div>
    </div>
    <div class="width--100 md--width--33 padding--md lg--padding--xl">
      <div class="height--100 padding--md bg--white border border-color--gray-4 border-radius--xl border-width--sm text-align--center">
        <img src="/<?php print $theme_path; ?>/images/kidney200x200.png"/>
        <p class="padding--none"><strong>30 million American adults have kidney disease,</strong>
        <br>and most don’t know it.</p>
      </div>
    </div>
    <div class="width--100 md--width--33 padding--md lg--padding--xl">
      <div class="height--100 padding--md bg--white border border-color--gray-4 border-radius--xl border-width--sm text-align--center">
        <img src="/<?php print $theme_path; ?>/images/foot200x200.png"/>
        <p class="padding--none"><strong>8.3 million American adults have gout.</strong></p>
      </div>
    </div>
  </div>
</section>
