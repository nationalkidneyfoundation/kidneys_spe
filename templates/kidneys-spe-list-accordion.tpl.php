
<div class="border border-color--gray-4 border-width--sm rounded <?php print $classes;?>">
  <?php foreach($items as $i => $item): ?>
    <?php if ($i > 0): ?>
      <div class="border-top border-top border-color--gray-3"></div>
    <?php endif; ?>
    <?php print $item ?>
  <?php endforeach; ?>
</div>
