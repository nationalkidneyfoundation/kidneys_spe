<?php
/**
  *
  */
?>
<div class="<?php print $classes; ?> border-radius--md bg--gray-1 width--100 height--100 padding-y--md position--relative">
  <?php if (isset($path)):?>
  <a href="<?php print $path ?>" class="card-animate display--block zoom-image">
  <?php endif;?>
    <?php if(isset($badge)): ?>
      <div class="position--relative margin-top--xxxl- margin-left--xl display--flex align-items--center z-index--400 ">
        <?php print $badge; ?>
      </div>
    <?php endif;?>
    <div class="padding-x--xl padding-y--md">
      <?php if(isset($image)):?>
        <div class="padding-bottom--lg">
          <div class="width--100 overflow--hidden">
            <?php print nkf_base_style_image($image, 'resize', 400, 250, 'width--100 height--auto display--block');?>
          </div>
        </div>
      <?php endif; ?>
      <div class="color--gray-4 width-100 ">
        <?php if (!empty($title_prefix)): ?>
          <div class="font-size--sm caps margin-bottom--xxs">
            <?php print $title_prefix ?>
          </div>
        <?php endif;?>
        <div class="color--gray-4 font-size--lg bold padding-bottom--xs">
          <?php print $title ?>
        </div>
        <?php if (!empty($teaser)): ?>
          <div class="color--gray-4 ">
            <?php print $teaser ?>
          </div>
        <?php endif;?>
      </div>
      <?php if (isset($path)):?>
      <div class="hide display--flex align-items--center padding-top--sm padding-bottom--md position--absolute bottom width--100">
        <div class="linkHighlight margin-right--sm">
          <a href="<?php print $path ?>"> Learn More </a>
        </div>
      </div>
      <?php endif;?>
    </div>
  <?php if (isset($path)):?>
  </a>
  <?php endif;?>
</div>
