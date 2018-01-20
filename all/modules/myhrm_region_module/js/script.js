 (function($) {
  $.fn.ajax_link = function() {
    //$('#ajax-link').hide();
    setTimeout(function() {
      $('#ajax-display').fadeOut(2000).html("").show();
      $('#ajax-link').fadeIn();
    }, 200000)
  }
})(jQuery);