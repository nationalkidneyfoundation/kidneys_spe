(function ($) {
  var initialized;
  Drupal.behaviors.kidneys_spe = {
    attach: function (context, settings) {
      if (!initialized) {
        initialized = true;
        // Drop cookie for future use.
        if (settings.kidneys_spe && settings.kidneys_spe.assessments) {
          var spe;
          if ($.cookie('spe')) {
            var spe_cookie = JSON.parse($.cookie("spe"));
            spe = Object.assign(spe_cookie, settings.kidneys_spe.assessments);
          } else {
            spe = settings.kidneys_spe.assessments;
          }
          $.cookie('spe', JSON.stringify(spe), { path: '/' });

        }
        if ($.cookie('spe')) {
          // We already have a cookie so provide a message.
          var spe = JSON.parse($.cookie('spe'));
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
