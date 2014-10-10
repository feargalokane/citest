(function ($) {

  // Disable checkboxes when the user clicks on one of them. (prevent
  // multi-clic
  Drupal.behaviors.bt48 = {
    attach:function (context,settings) {
     var moduleLangPath = Drupal.settings.mycustomjs.moduleLangPath; 
     outdatedBrowser({
       bgColor: '#f25648',
       color: '#ffffff',
       lowerThan: 'transform',
       languagePath: moduleLangPath
      })
    }
  }
})(jQuery);
