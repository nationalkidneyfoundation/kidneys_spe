<div class="bg--gray-1 padding-x--md">
  <section class="container center padding-top--xxxl">
    <div class="prose">
      <div class="font-size--lg " style="color:#67686B;">
        <span class=""><?php print $period;?></span> of
        <a class="border-bottom " style="color:#67686B;" href="<?php print $course_home; ?>"><?php print $course_title;?></a>
      </div>
      <h1 class="font-size--xxl padding-top--xxs"><?php print $title;?></h1>
      <?php if(!empty($description)): ?>
        <?php print $description;?>
      <?php endif;?>
    </div>
  </section>
  <div class="display--flex flex-wrap--wrap container padding-top--xxxl">
    <section class="sm--width--70">
      <div class="prose  padding-right--lg">
        <div class=" ">
          <h3 class="padding-top--none font-size--xl" style="color:#A34425;">Topics</h3>
          <?php print $knowledge_units;?>
        </div>
        <?php if($has_actions): ?>
          <div class="padding-top--xxl">
            <h3 class="padding-top--none font-size--xl" style="color:#A34425;">Actions/Things to Track</h3>
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
    </section>
    <nav class="sm--width--30">
      <div class="margin-x--md">
        <h3 class="padding-top--none padding-x--xxs" style="color:#67686B;">Sections</h3>
        <?php foreach($section_links as $i => $link): ?>
          <?php print $link;?>
        <?php endforeach;?>
      </div>
    </nav>
  </div>


</div>
