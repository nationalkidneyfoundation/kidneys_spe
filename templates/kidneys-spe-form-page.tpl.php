<!--css hack-->
<style>
  .form-required {
    display: none;
  }
</style>
<section class="padding-top--xxxl hero--waves-orange-tn">
  <div class="container padding-x--md">
    <div class="center prose padding-top--xxxl">
      <div class="padding-top--xxxl text-align--center">
        <?php if($version=='gout'):?>
          <h1 class="sm--font-size--xxxl padding--none font-weight--400">
            <?php print $form_header; ?>
          </h1>
           <div class="font-size--lg caps padding-top--sm padding-bottom--none">
             <?php print $form_subheader; ?>
           </div>
         <?php elseif($version=='hyperk'):?>
           <h1 class="sm--font-size--xxxl padding--none font-weight--400">
             High + Potassium = <span class="color--orange bold">HyperK</span>
           </h1>
            <p class="font-size--lg caps padding-top--sm padding-bottom--none">
              Answer a few questions to get some info.
            </p>
         <?php else:?>
           <h1 class="sm--font-size--xxxl padding--none font-weight--400">
            How <span class="color--orange bold">healthy</span> are your kidneys?
          </h1>
           <p class="font-size--lg caps padding-top--sm padding-bottom--none">
             Answer a few questions to find out.
           </p>
         <?php endif;?>
       </div>
     </div>
   </div>
</section>

<section class="container center padding-y--xxl margin-bottom--xxxl">
  <div class="form--lg center width--100 max-width--xxl md--padding-x--none padding-x--md">
    <div class="bg--white padding-x--xxl padding-top--md rounded border-width--sm border-color--gray-4 border-style--solid">
      <?php print $form;?>
    </div>
    <div class="padding-top--sm text-align--center">All fields are required.</div>
  </div>
</section
