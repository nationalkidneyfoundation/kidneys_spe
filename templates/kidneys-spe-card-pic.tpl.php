<?php
/**
  *
  */
?>
<div class="card max-width--lg border-radius--md overflow--hidden bg--gray-1
            margin-right--md margin-bottom--md position--relative padding-bottom--xxl">
  <?php if (isset($path)):?>
  <a href="<?php print $path ?>" class="card-animate display--block zoom-image">
  <?php endif;?>
    <?php if(isset($image)):?>
    <div class="padding-bottom--lg">
      <div class="width--100 overflow--hidden">
          <?php print nkf_base_style_image($image, 'resize', 400, 250, 'width--100 height--auto display--block');?>
      </div>
    </div>
    <?php endif; ?>
    <div class="color--gray-4 width-100 padding-x--md padding-top--xs padding-bottom--lg">
      <?php if (!empty($title_prefix)): ?>
        <div class="padding-top--xs font-size--sm caps">
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
    <div class="display--flex align-items--center padding-x--md padding-top--sm padding-bottom--md position--absolute bottom width--100">
      <div class="linkHighlight margin-right--sm">
        <a href="<?php print $path ?>"> Learn More </a>
      </div>
    </div>
    <?php endif;?>
  <?php if (isset($path)):?>
  </a>
  <?php endif;?>
</div>
