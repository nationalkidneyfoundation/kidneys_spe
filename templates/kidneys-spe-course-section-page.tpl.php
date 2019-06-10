<?php
//
?>
<section class="hero--health edge--ragged--bottom margin-bottom--xxxl min-height--lg print--hide">
  <div class="container display--flex flex-wrap--wrap align-items--center padding-y--xl padding-x--md">
    <div class="display--flex width--100 md--width--50 padding-x--md padding-y--xl md--padding-right--lg">
        <div class="hide font-size--xl line-height--120 caps">Thanks for taking time to answer our questions.</div>
        <div class="padding-top--lg font-size--xl">
          <a class="color--white caps" href="<?php print $course_home; ?>"><?php print $course_title;?></a>
        </div>
    </div>
  </div>
</section>
<div class="padding-x--md container">
  <div class="display--flex flex-wrap--wrap">
    <section class="max-width--md center md--width--10 width--100 margin-bottom--sm md--padding-right--md">
      <?php print $icon;?>
    </section>
    <section class="md--width--60 width--100 margin-bottom--xl ">

      <div class="prose margin-bottom--xl ">
        <div class="font-size--md caps bold color--gray-3">
          <?php print $period;?>
        </div>
        <h1 class="font-size--xl padding-top--xxs"><?php print $title;?></h1>
        <?php if(!empty($description)): ?>
          <?php print $description;?>
        <?php endif;?>
      </div>

      <div class="">
        <div class="prose">
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
    <nav class="md--width--30 width--100 margin-top--xxl  md--padding-left--xl">
      <div class="margin-x--md">
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
