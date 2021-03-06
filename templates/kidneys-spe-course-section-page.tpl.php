<?php
//
?>
<section class="hero--health edge--ragged--bottom margin-bottom--xxxl min-height--lg print--hide">
  <div class="container display--flex flex-wrap--wrap align-items--center padding-y--xl padding-x--md">
    <div class="display--flex flex-wrap--wrap width--100 md--width--50 padding-x--md padding-y--xl md--padding-right--lg">
      <div class="width--100 padding-bottom--xxl text-align--center md--text-align--left ">
        <a class="color--white " href="<?php print $course_home; ?>">
          <i class="icon-left-open"></i>
          Back to Kidney Pathways</a>
      </div>
      <div class="max-width--md center md--width--25 width--100 margin-bottom--sm md--padding-right--md">
        <?php print $icon;?>
      </div>
      <div class="md--width--75 width--100 prose margin-bottom--xl ">
        <div class="font-size--md caps bold color--gray-3">
          <?php print $period;?>
        </div>
        <h1 class="font-size--xl padding-top--xxs color--white"><?php print $title;?></h1>
        <?php if(!empty($description)): ?>
          <?php print $description;?>
        <?php endif;?>
      </div>
    </div>
    <div class="print--hide md--show  md--width--50 md--padding-left--lg ">
      <img class="display--block center" style="max-width:280px" src="/<?php print $module_path; ?>/images/KH_hero.png">
    </div>
  </div>
</section>
<section class="print--show hide">
  <h1 class="prose center font-size--xl padding-top--xxs"><?php print $title;?></h1>
</section>
<div class="padding-x--md container">
  <div class="display--flex flex-wrap--wrap">

    <section class="print--width--100 md--width--60 width--100 margin-bottom--xl ">
      <div class="">
        <div class="prose center">
            <h3>Topics</h3>
            <?php print $knowledge_units;?>
          <?php if($has_actions): ?>
            <div class="padding-top--xxl">
              <h3 class="padding-top--none font-size--xl" >Actions/Things to Track</h3>
              <?php print $actions_track;?>
            </div>
          <?php endif; ?>
          <div class="padding-top--xxxl print--hide display--flex justify-content--space-between padding-bottom--xxxl linkHighlight">
            <div class="">
              <?php if($previous_section):?>
                <i class="icon-left-open color--gray-4"></i> <?php print $previous_section;?>
              <?php endif;?>
              </div>
            <div class="">
              <?php if($next_section):?>
                <?php print $next_section;?><i class="icon-right-open color--gray-4"></i>
              <?php endif;?>
            </div>
          </div>
        </div>
      </div>


    </section>
    <nav class="print--width--100 md--width--30 width--100 margin-top--xxl  md--padding-left--xl">
      <div class="padding-x--md prose center">
        <h3 class="padding-top--none padding-x--xxs">Sections</h3>
        <ol class="bold">
          <?php foreach($section_links as $i => $link): ?>
            <li><?php print $link;?></li>
          <?php endforeach;?>
        </ol>
      </div>
    </nav>
  </div>

</div>
<section class="print--hide border-bottom">
  <div class="container padding-y--xxl padding-x--md">
    <div class="print--hide text-align--center">
      <a data-track="event" data-category="cta" data-action="print" data-label="spe-health-results" href="#" class="hide sm--display--inline font-size--sm caps button--gray-1 js--print-link margin--xxs"><i class="icon-print"></i> <span class="sm--display--inline">Print</span></a>
      <a data-track="event" data-category="cta" data-action="email" data-label="spe-health-results" href="mailto:?subject=Shared%20from%20National%20Kidney%20Foundation&amp;body=<?php print rawurldecode("Here is content from the National Kidney Foundation you might be interested in: $path");?>" class="font-size--sm caps button--gray-1 margin--xxs"><i class="icon-mail-alt"></i> <span class=" sm--display--inline">Email</span></a>
      <a data-track="event" data-category="cta" data-action="bookmark" data-label="spe-health-results" href="#" class="font-size--sm caps button--gray-1 js--bookmark-link margin--xxs"><i class="icon-bookmark"></i> <span class="sm--display--inline">Bookmark</span></a>
    </div>
  </div>
</section>
<section class="">
  <div class="padding-y--xl padding-x--md">
    <div class="container prose text-align--center">
      <div  class="print--hide">
        <h3 class="width--100 text-align--center">We want to know what you think.</h3>
        <p>Help us continue to improve this content by answering a short survey.</p>
        <div class="margin-bottom--md">

          <a class="button--orange caps padding-y--md padding-x--xl color--white" href="https://www.surveymonkey.com/r/CZ5YBTX?section=<?php print $title;?>&sid=<?php print $sid?>" target="_blank">Take survey</a>
        </div>
      </div>
    </div>
  </div>
</section>
