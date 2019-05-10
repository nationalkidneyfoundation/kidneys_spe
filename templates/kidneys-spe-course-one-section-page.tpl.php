<section class="print--hide bg--gray-1 ">
  <?php print $header;?>
</section>
<section class="print--bg--white padding-y--xl ">
  <div class="container">
    <a name="course-sections"></a>
    <h3 class="padding-x--md center prose font-size--xl ">Course Content</h3>
    <div class="center prose padding-x--md padding-y--md">
      <?php print $knowledge_units;?>
    </div>
  </div>
</section>
<section class="padding-y--xl border-top">
  <div class="prose center">
    <a name="course-desc"></a>
    <h3 class="padding-x--md center prose font-size--xl ">Course Description</h3>
    <div class="padding-x--md  padding-y--md display--flex flex-wrap--wrap">
      <?php print $course_description;?>
    </div>
  </div>
</section>
