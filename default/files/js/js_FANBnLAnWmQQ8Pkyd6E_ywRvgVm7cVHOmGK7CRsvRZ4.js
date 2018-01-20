/**
 * @file
 * Helper functions for memcache_admin module.
 */

// Global Killswitch
if (Drupal.jsEnabled) {
  $(document).ready(function() {
    $("body").append($("#memcache-devel"));
  });
}
;
/**
 * Cookie plugin
 *
 * Copyright (c) 2006 Klaus Hartl (stilbuero.de)
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 */
jQuery.cookie=function(name,value,options){if(typeof value!='undefined'){options=options||{};if(value===null){value='';options.expires=-1;}
var expires='';if(options.expires&&(typeof options.expires=='number'||options.expires.toUTCString)){var date;if(typeof options.expires=='number'){date=new Date();date.setTime(date.getTime()+(options.expires*24*60*60*1000));}else{date=options.expires;}
expires='; expires='+date.toUTCString();}
var path=options.path?'; path='+(options.path):'';var domain=options.domain?'; domain='+(options.domain):'';var secure=options.secure?'; secure':'';document.cookie=[name,'=',encodeURIComponent(value),expires,path,domain,secure].join('');}else{var cookieValue=null;if(document.cookie&&document.cookie!=''){var cookies=document.cookie.split(';');for(var i=0;i<cookies.length;i++){var cookie=jQuery.trim(cookies[i]);if(cookie.substring(0,name.length+1)==(name+'=')){cookieValue=decodeURIComponent(cookie.substring(name.length+1));break;}}}
return cookieValue;}};;
(function($){Drupal.behaviors.pollanonHandleVoteView={attach:function(a){if(typeof PollAnon=='undefined'||!PollAnon.nid){return}cookieName='pa-'+PollAnon.nid;$('form.pollanon').fadeIn('fast');if($.cookie(cookieName)){$hiddenResults=$('.pollanon-poll-results.hidden');if($hiddenResults.length>0){$poll_form=$('form.pollanon .vote-form');$('.form-radios, .form-submit',$poll_form).hide();$hiddenResults.hide();$hiddenResults.removeClass('hidden');$hiddenResults.fadeIn('fast')}}else{ua=navigator.userAgent;uaI=Math.floor(ua.length/2);pollanonKey=ua?ua.substring(uaI,uaI+2)+ua.length:'';pollanonKey+='-'+new Date().getTime();$.cookie('pa-submit',pollanonKey,{path:'/'});$('form.pollanon input[name="pollanonkey"]',a).attr('value',pollanonKey)}msg=$.cookie('pa-messages');if(msg){msg=unescape(msg.replace(/\+/g," "));$('form.pollanon').before('<div class="messages status">'+msg+'</div>');$.cookie('pa-messages',null,{path:'/'})}}}})(jQuery);;
(function ($) {

/**
 * Attaches double-click behavior to toggle full path of Krumo elements.
 */
Drupal.behaviors.devel = {
  attach: function (context, settings) {

    // Add hint to footnote
    $('.krumo-footnote .krumo-call').once().before('<img style="vertical-align: middle;" title="Click to expand. Double-click to show path." src="' + settings.basePath + 'misc/help.png"/>');

    var krumo_name = [];
    var krumo_type = [];

    function krumo_traverse(el) {
      krumo_name.push($(el).html());
      krumo_type.push($(el).siblings('em').html().match(/\w*/)[0]);

      if ($(el).closest('.krumo-nest').length > 0) {
        krumo_traverse($(el).closest('.krumo-nest').prev().find('.krumo-name'));
      }
    }

    $('.krumo-child > div:first-child', context).dblclick(
      function(e) {
        if ($(this).find('> .krumo-php-path').length > 0) {
          // Remove path if shown.
          $(this).find('> .krumo-php-path').remove();
        }
        else {
          // Get elements.
          krumo_traverse($(this).find('> a.krumo-name'));

          // Create path.
          var krumo_path_string = '';
          for (var i = krumo_name.length - 1; i >= 0; --i) {
            // Start element.
            if ((krumo_name.length - 1) == i)
              krumo_path_string += '$' + krumo_name[i];

            if (typeof krumo_name[(i-1)] !== 'undefined') {
              if (krumo_type[i] == 'Array') {
                krumo_path_string += "[";
                if (!/^\d*$/.test(krumo_name[(i-1)]))
                  krumo_path_string += "'";
                krumo_path_string += krumo_name[(i-1)];
                if (!/^\d*$/.test(krumo_name[(i-1)]))
                  krumo_path_string += "'";
                krumo_path_string += "]";
              }
              if (krumo_type[i] == 'Object')
                krumo_path_string += '->' + krumo_name[(i-1)];
            }
          }
          $(this).append('<div class="krumo-php-path" style="font-family: Courier, monospace; font-weight: bold;">' + krumo_path_string + '</div>');

          // Reset arrays.
          krumo_name = [];
          krumo_type = [];
        }
      }
    );
  }
};

})(jQuery);
;
(function($) {
  Drupal.behaviors.custom_search = {
    attach: function(context) {

      if (!Drupal.settings.custom_search.solr) {
        // Check if the search box is not empty on submit
        $('form.search-form', context).submit(function(){
          var $this = $(this);
          var box = $this.find('input.custom-search-box');
          if (box.val() != undefined && box.val() == '') {
            $this.find('input.custom-search-box').addClass('error');
            return false;
          }
          // If basic search is hidden, copy or value to the keys
          if ($this.find('#edit-keys').parents('div.element-invisible').attr('class') == 'element-invisible') {
            $this.find('#edit-keys').val($this.find('#edit-or').val());
            $this.find('#edit-or').val('');
          }
          return true;
        });
      }

      // Search from target
      $('form.search-form').attr('target', Drupal.settings.custom_search.form_target);

      // Displays Popup.
      $('form.search-form input.custom-search-box', context).bind('click focus', function(e){
        var $parentForm = $(this).parents('form');
        // check if there's something in the popup and displays it
        var popup = $parentForm.find('fieldset.custom_search-popup');
        if (popup.find('input,select').length && !popup.hasClass('opened')) {
          popup.fadeIn().addClass('opened');
        }
        e.stopPropagation();
      });
      $(document).bind('click focus', function(){
        $('fieldset.custom_search-popup').hide().removeClass('opened');
      });

      // Handle checkboxes
      $('.custom-search-selector input:checkbox', context).each(function(){
        var el = $(this);
        if (el.val() == 'c-all') {
          el.change(function(){
            $(this).parents('.custom-search-selector').find('input:checkbox[value!=c-all]').attr('checked', false);
          });
        }
        else {
          if (el.val().substr(0,2) == 'c-') {
            el.change(function(){
              $('.custom-search-selector input:checkbox').each(function(){
                if ($(this).val().substr(0,2) == 'o-') {
                  $(this).attr('checked', false);
                }
              });
              $(this).parents('.custom-search-selector').find('input:checkbox[value=c-all]').attr('checked', false);
            });
          } else {
            el.change(function(){
              $(this).parents('.custom-search-selector').find('input:checkbox[value!=' + el.val() + ']').attr('checked', false);
            });
          }
        }
      });

      // Reselect types and terms in advanced search
      var edit_keys = $('#edit-keys').val();
      if(edit_keys) {
        // types
        var pos = edit_keys.indexOf('type:');
        if (pos != -1) {
          var pos2 = edit_keys.indexOf(' ', pos);
          if (pos2 == -1) {
            pos2 = edit_keys.length;
          }
          var types = edit_keys.substring(pos + 5,pos2);
          types = types.split(',');
          for (var i = 0; i < types.length; i++) {
            $('.search-form input:checkbox[value=' + types[i] + ']').attr('checked', true);
          }
        }
        // terms
        var pos = edit_keys.indexOf('term:');
        if (pos != -1) {
          var pos2 = edit_keys.indexOf(' ', pos);
          if (pos2 == -1) {
            pos2 = edit_keys.length;
          }
          var terms = edit_keys.substring(pos + 5, pos2);
          terms = terms.split(',');
          for (var i = 0; i < terms.length; i++) {
            $('#edit-term option[value=' + terms[i] + ']').attr('selected', true);
          }
        }
        // languages
        var pos = edit_keys.indexOf('language:');
        if (pos != 1) {
          var pos2 = edit_keys.indexOf(' ', pos);
          if (pos2 == -1) {
            pos2 = edit_keys.length;
          }
          var languages = edit_keys.substring(pos + 9,pos2);
          languages = languages.split(',');
          for (var i = 0; i < languages.length; i++) {
            $('.search-advanced #edit-language-' + languages[i]).attr('checked', true);
          }
        }
      }

      var popup = $('fieldset.custom_search-popup:not(.custom_search-processed)', context).addClass("custom_search-processed");
      popup.click(function(e){
        e.stopPropagation();
      })
      popup.append('<a class="custom_search-popup-close" href="#">' + Drupal.t('Close') + '</a>');
      $('a.custom_search-popup-close').click(function(e){
        $('fieldset.custom_search-popup.opened').hide().removeClass('opened');
        e.preventDefault();
      });

    }
  }
})(jQuery);
;
(function ($) {

Drupal.behaviors.textarea = {
  attach: function (context, settings) {
    $('.form-textarea-wrapper.resizable', context).once('textarea', function () {
      var staticOffset = null;
      var textarea = $(this).addClass('resizable-textarea').find('textarea');
      var grippie = $('<div class="grippie"></div>').mousedown(startDrag);

      grippie.insertAfter(textarea);

      function startDrag(e) {
        staticOffset = textarea.height() - e.pageY;
        textarea.css('opacity', 0.25);
        $(document).mousemove(performDrag).mouseup(endDrag);
        return false;
      }

      function performDrag(e) {
        textarea.height(Math.max(32, staticOffset + e.pageY) + 'px');
        return false;
      }

      function endDrag(e) {
        $(document).unbind('mousemove', performDrag).unbind('mouseup', endDrag);
        textarea.css('opacity', 1);
      }
    });
  }
};

})(jQuery);
;
(function ($) {

/**
 * Toggle the visibility of a fieldset using smooth animations.
 */
Drupal.toggleFieldset = function (fieldset) {
  var $fieldset = $(fieldset);
  if ($fieldset.is('.collapsed')) {
    var $content = $('> .fieldset-wrapper', fieldset).hide();
    $fieldset
      .removeClass('collapsed')
      .trigger({ type: 'collapsed', value: false })
      .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Hide'));
    $content.slideDown({
      duration: 'fast',
      easing: 'linear',
      complete: function () {
        Drupal.collapseScrollIntoView(fieldset);
        fieldset.animating = false;
      },
      step: function () {
        // Scroll the fieldset into view.
        Drupal.collapseScrollIntoView(fieldset);
      }
    });
  }
  else {
    $fieldset.trigger({ type: 'collapsed', value: true });
    $('> .fieldset-wrapper', fieldset).slideUp('fast', function () {
      $fieldset
        .addClass('collapsed')
        .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Show'));
      fieldset.animating = false;
    });
  }
};

/**
 * Scroll a given fieldset into view as much as possible.
 */
Drupal.collapseScrollIntoView = function (node) {
  var h = document.documentElement.clientHeight || document.body.clientHeight || 0;
  var offset = document.documentElement.scrollTop || document.body.scrollTop || 0;
  var posY = $(node).offset().top;
  var fudge = 55;
  if (posY + node.offsetHeight + fudge > h + offset) {
    if (node.offsetHeight > h) {
      window.scrollTo(0, posY);
    }
    else {
      window.scrollTo(0, posY + node.offsetHeight - h + fudge);
    }
  }
};

Drupal.behaviors.collapse = {
  attach: function (context, settings) {
    $('fieldset.collapsible', context).once('collapse', function () {
      var $fieldset = $(this);
      // Expand fieldset if there are errors inside, or if it contains an
      // element that is targeted by the URI fragment identifier.
      var anchor = location.hash && location.hash != '#' ? ', ' + location.hash : '';
      if ($fieldset.find('.error' + anchor).length) {
        $fieldset.removeClass('collapsed');
      }

      var summary = $('<span class="summary"></span>');
      $fieldset.
        bind('summaryUpdated', function () {
          var text = $.trim($fieldset.drupalGetSummary());
          summary.html(text ? ' (' + text + ')' : '');
        })
        .trigger('summaryUpdated');

      // Turn the legend into a clickable link, but retain span.fieldset-legend
      // for CSS positioning.
      var $legend = $('> legend .fieldset-legend', this);

      $('<span class="fieldset-legend-prefix element-invisible"></span>')
        .append($fieldset.hasClass('collapsed') ? Drupal.t('Show') : Drupal.t('Hide'))
        .prependTo($legend)
        .after(' ');

      // .wrapInner() does not retain bound events.
      var $link = $('<a class="fieldset-title" href="#"></a>')
        .prepend($legend.contents())
        .appendTo($legend)
        .click(function () {
          var fieldset = $fieldset.get(0);
          // Don't animate multiple times.
          if (!fieldset.animating) {
            fieldset.animating = true;
            Drupal.toggleFieldset(fieldset);
          }
          return false;
        });

      $legend.append(summary);
    });
  }
};

})(jQuery);
;
(function ($) {

/**
 * Provide the summary information for the block settings vertical tabs.
 */
Drupal.behaviors.blockSettingsSummary = {
  attach: function (context) {
    // The drupalSetSummary method required for this behavior is not available
    // on the Blocks administration page, so we need to make sure this
    // behavior is processed only if drupalSetSummary is defined.
    if (typeof jQuery.fn.drupalSetSummary == 'undefined') {
      return;
    }

    $('fieldset#edit-path', context).drupalSetSummary(function (context) {
      if (!$('textarea[name="pages"]', context).val()) {
        return Drupal.t('Not restricted');
      }
      else {
        return Drupal.t('Restricted to certain pages');
      }
    });

    $('fieldset#edit-node-type', context).drupalSetSummary(function (context) {
      var vals = [];
      $('input[type="checkbox"]:checked', context).each(function () {
        vals.push($.trim($(this).next('label').html()));
      });
      if (!vals.length) {
        vals.push(Drupal.t('Not restricted'));
      }
      return vals.join(', ');
    });

    $('fieldset#edit-role', context).drupalSetSummary(function (context) {
      var vals = [];
      $('input[type="checkbox"]:checked', context).each(function () {
        vals.push($.trim($(this).next('label').html()));
      });
      if (!vals.length) {
        vals.push(Drupal.t('Not restricted'));
      }
      return vals.join(', ');
    });

    $('fieldset#edit-user', context).drupalSetSummary(function (context) {
      var $radio = $('input[name="custom"]:checked', context);
      if ($radio.val() == 0) {
        return Drupal.t('Not customizable');
      }
      else {
        return $radio.next('label').html();
      }
    });
  }
};

/**
 * Move a block in the blocks table from one region to another via select list.
 *
 * This behavior is dependent on the tableDrag behavior, since it uses the
 * objects initialized in that behavior to update the row.
 */
Drupal.behaviors.blockDrag = {
  attach: function (context, settings) {
    // tableDrag is required and we should be on the blocks admin page.
    if (typeof Drupal.tableDrag == 'undefined' || typeof Drupal.tableDrag.blocks == 'undefined') {
      return;
    }

    var table = $('table#blocks');
    var tableDrag = Drupal.tableDrag.blocks; // Get the blocks tableDrag object.

    // Add a handler for when a row is swapped, update empty regions.
    tableDrag.row.prototype.onSwap = function (swappedRow) {
      checkEmptyRegions(table, this);
    };

    // A custom message for the blocks page specifically.
    Drupal.theme.tableDragChangedWarning = function () {
      return '<div class="messages warning">' + Drupal.theme('tableDragChangedMarker') + ' ' + Drupal.t('The changes to these blocks will not be saved until the <em>Save blocks</em> button is clicked.') + '</div>';
    };

    // Add a handler so when a row is dropped, update fields dropped into new regions.
    tableDrag.onDrop = function () {
      dragObject = this;
      // Use "region-message" row instead of "region" row because
      // "region-{region_name}-message" is less prone to regexp match errors.
      var regionRow = $(dragObject.rowObject.element).prevAll('tr.region-message').get(0);
      var regionName = regionRow.className.replace(/([^ ]+[ ]+)*region-([^ ]+)-message([ ]+[^ ]+)*/, '$2');
      var regionField = $('select.block-region-select', dragObject.rowObject.element);
      // Check whether the newly picked region is available for this block.
      if ($('option[value=' + regionName + ']', regionField).length == 0) {
        // If not, alert the user and keep the block in its old region setting.
        alert(Drupal.t('The block cannot be placed in this region.'));
        // Simulate that there was a selected element change, so the row is put
        // back to from where the user tried to drag it.
        regionField.change();
      }
      else if ($(dragObject.rowObject.element).prev('tr').is('.region-message')) {
        var weightField = $('select.block-weight', dragObject.rowObject.element);
        var oldRegionName = weightField[0].className.replace(/([^ ]+[ ]+)*block-weight-([^ ]+)([ ]+[^ ]+)*/, '$2');

        if (!regionField.is('.block-region-' + regionName)) {
          regionField.removeClass('block-region-' + oldRegionName).addClass('block-region-' + regionName);
          weightField.removeClass('block-weight-' + oldRegionName).addClass('block-weight-' + regionName);
          regionField.val(regionName);
        }
      }
    };

    // Add the behavior to each region select list.
    $('select.block-region-select', context).once('block-region-select', function () {
      $(this).change(function (event) {
        // Make our new row and select field.
        var row = $(this).closest('tr');
        var select = $(this);
        tableDrag.rowObject = new tableDrag.row(row);

        // Find the correct region and insert the row as the last in the region.
        table.find('.region-' + select[0].value + '-message').nextUntil('.region-message').last().before(row);

        // Modify empty regions with added or removed fields.
        checkEmptyRegions(table, row);
        // Remove focus from selectbox.
        select.get(0).blur();
      });
    });

    var checkEmptyRegions = function (table, rowObject) {
      $('tr.region-message', table).each(function () {
        // If the dragged row is in this region, but above the message row, swap it down one space.
        if ($(this).prev('tr').get(0) == rowObject.element) {
          // Prevent a recursion problem when using the keyboard to move rows up.
          if ((rowObject.method != 'keyboard' || rowObject.direction == 'down')) {
            rowObject.swap('after', this);
          }
        }
        // This region has become empty.
        if ($(this).next('tr').is(':not(.draggable)') || $(this).next('tr').length == 0) {
          $(this).removeClass('region-populated').addClass('region-empty');
        }
        // This region has become populated.
        else if ($(this).is('.region-empty')) {
          $(this).removeClass('region-empty').addClass('region-populated');
        }
      });
    };
  }
};

})(jQuery);
;
