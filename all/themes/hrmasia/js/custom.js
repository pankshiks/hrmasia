jQuery(window).load(function() { // makes sure the whole site is loaded
  //if (jQuery('.front').length > 0 ) {

    //jQuery('#status').fadeOut(); // will first fade out the loading animation
    //jQuery('#preloader').delay(350).fadeOut('slow'); // will fade out the white DIV that covers the website.
   // jQuery('body').delay(350).css({'overflow':'visible'});
   
  //} else{
     //jQuery('#status').fadeOut(); 
     //jQuery('#preloader').fadeOut('fast'); 
     //jQuery('body').css({'overflow':'visible'});
  //}
  jQuery(window).scroll(function() {   
    var scroll = jQuery(window).scrollTop();
   // alert(scroll);
    if (scroll >= 120) {
        jQuery(".menu-top-wrapper").addClass("menu-top-wrapper-scroll");
    }
    if (scroll < 120) {
        jQuery(".menu-top-wrapper").removeClass("menu-top-wrapper-scroll");
    }
    });
  
  //add this for change alt to href
  jQuery('.logged-in .block-simpleads .simplead-container').each(function(){
    var a = jQuery(this).find('a img').attr('alt');
    //console.log(a);
      if (a.trim()) {
        jQuery(this).find('a').attr("href",a); 
        jQuery(this).find('a').attr("target","_blank"); 
        //console.log("empty");
      }
  });

  jQuery(".add-close").on('click', function(){
        jQuery("#block-simpleads-ad-groups-1051 .simplead-container img").trigger("click");
        jQuery("#block-simpleads-ad-groups-1051").css("display","none");
  })
})

jQuery(document).ready(function () {
	var tvWidth = jQuery('.front .view-hrm-tv.view-display-id-block .views-field-field-video-code').width();
	jQuery('.front .view-hrm-tv.view-display-id-block .views-field-field-video-code iframe').css('width', tvWidth);
	jQuery( window ).resize(function() {
		var tvWidth = jQuery('.front .view-hrm-tv.view-display-id-block .views-field-field-video-code').width();
		jQuery('.front .view-hrm-tv.view-display-id-block .views-field-field-video-code iframe').css('width', tvWidth);
	});
});

//off the autoplay of video on html load ready state
jQuery(document).ready(function () {
	/*jQuery( "iframe" ).each(function( index ) {
		var str = jQuery(this).attr("src").replace('autoplay=1', 'autoplay=0');
		jQuery( this ).attr("src",str);
	});*/
    
    jQuery('.front #highlighted .view-display-id-block_3 .view-content').cycle({
        fx: 'fade', 
    	timeout:     3000, 
    	pager:      '#nav1', 
    	pagerEvent: 'mouseover', 
    	fastOnEvent: true 
    });

    jQuery('.front #highlighted .view-display-id-block_1 .view-content').cycle({
        fx: 'fade', 
    	timeout:     3000, 
    	pager:      '#nav', 
    	pagerEvent: 'mouseover', 
    	fastOnEvent: true,
    	//before: onBefore
    });

  jQuery('.colorbox-inline').click(function(){
    var rlink = jQuery(this).attr('rlink');
    //console.log(rlink);
    jQuery('.url-inbox').val(rlink);
  })
    

	/*jQuery('#s6').cycle({
		fx: 'scrollLeft', 
    	timeout:  13780,
    	next:   '#next2', 
    	prev:   '#prev2',
    	//backwards: true,
    });*/
  jQuery("#cboxClose,#cboxOverlay").click(function(){
    //location.reload(); 
  })
});


//off the autoplay of video on ajaxstop state
jQuery(document).ajaxStop(function() {
	/*jQuery( "iframe" ).each(function( index ) {
		var str = jQuery( this ).attr("src").replace('autoplay=1', 'autoplay=0');
		jQuery( this ).attr("src",str);
	});*/
});
// hide when user not login for menu
jQuery(document).ready(function(){
	jQuery('.not-logged-in .condition-list').parent().remove();
	jQuery('.not-logged-in .user-signup').css('border','0px');
	jQuery('.not-logged-in .user-signup').css('margin-left','0px');
	jQuery('.not-logged-in .user-signup').css('padding-left','0px');
});