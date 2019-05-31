(function ($) {
  var initialized;
  Drupal.behaviors.kidneys_spe = {
    attach: function (context, settings) {

      console.log('spe cookies');
      // Drop cookie for future use.
      if (settings.kidneys_spe && settings.kidneys_spe.assessments && !$.cookie('spe')) {
        $.cookie('spe', JSON.stringify(settings.kidneys_spe.assessments), { path: '/' });
      }
      // We already have a cookie so provide a message.
      if ($.cookie('spe')) {
        if (!initialized) {
          initialized = true;
          console.log('has spe cookie');

          var spe = JSON.parse($.cookie("spe"));

          Object.keys(spe).forEach(function(key,index) {
            if ($( "#spe-return-" + key ).length) {
              var returning = $( "#spe-return-" + key );
              returning.toggleClass('hide');
              $('a', returning).attr('href', '/phi/' + spe[key] + '/' + key);
            }
          });
        }
      }
    }
  }
}(jQuery));
