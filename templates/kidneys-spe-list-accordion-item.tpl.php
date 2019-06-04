<div id="<?php print $iid;?>" class="padding--md">
  <a href="#" class="display--flex align-items--baseline color--gray-4"
     data-track="event"
     data-category="<?php print $category; ?>"
     data-action="open"
     data-label="accordion"
     data-value="<?php print $value; ?>"
     data-sent
     data-toggle="class"
     data-target="#<?php print $iid;?> i|#<?php print $iid;?> .desc"
     data-class="hide|hide">
    <div class="cursor--pointer font-size--sm print--hide padding-right--sm">
      <i class="<?php print ($first) ? 'hide' : ''; ?> icon-right-open color--gray-4"></i>
      <i class="<?php print ($first) ? '' : 'hide'; ?>  icon-down-open color--orange"></i>
    </div>
    <div class="bold ">
      <?php print $title; ?>
    </div>
  </a>
  <div class="linkHighlight desc <?php print ($first) ? '' : 'hide'; ?> print--show sm--margin-left--md padding-top--xxs sm--padding-left--sm">
    <?php print $description; ?>
  </div>
</div>
