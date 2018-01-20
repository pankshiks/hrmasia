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
	jQuery( "iframe" ).each(function( index ) {
		var str = jQuery(this).attr("src").replace('autoplay=1', 'autoplay=0');
		jQuery( this ).attr("src",str);
	});
    
    jQuery('.view-display-id-block_3 .view-content').cycle({
         fx: 'fade', 
    	 timeout:     3000, 
    	 pager:      '#nav1', 
    	 pagerEvent: 'mouseover', 
    	 fastOnEvent: true 
    });

    jQuery('.view-display-id-block_1 .view-content').cycle({
         fx: 'fade', 
    	 timeout:     3000, 
    	 pager:      '#nav', 
    	 pagerEvent: 'mouseover', 
    	 fastOnEvent: true,
    	 //before: onBefore
    });

    //jQuery('.view-display-id-block_1 .view-content').cycle({
    	jQuery('#s6').cycle({
         fx: 'turnLeft', 
    	 timeout:  13750,
    	 next:   '#next2', 
    	 prev:   '#prev2' 
    	 //pager:      '#nav', 
    	 //pagerEvent: 'mouseover', 
    	 //fastOnEvent: true,
    	 //before: onBefore
    });

    

    /* jQuery('.view-display-id-block_3 .view-content').cycle({
         fx: 'fade', 
    	 timeout:     3000, 
    	 pager:      '#nav1', 
    	 pagerEvent: 'mouseover', 
    	 fastOnEvent: true 
    });*/
    
    //jQuery('.slide4').hide();
    //jQuery('.slide5').hide();
    //jQuery('.slide6').hide();
    //jQuery('.slide7').hide();

    jQuery('.sp').click(function() { 
    	jQuery('.slide0').trigger('mouseover'); 
    	//return false; 
	}); 
 
	jQuery('.sp1').click(function() {  
		jQuery('.slide4').trigger('mouseover'); 
    	//return false;  
	}); 
});

function onBefore(curr, next, opts, fwd) {
  console.log(opts.nextSlide);
  switch(opts.nextSlide){
  	case 4:
        oneset();
        break;
    case 5:
        oneset();
        break;
    case 6:
        oneset();
        break;
    case 7:
        oneset();
        break;
    case 0:
       twoset();
        break;
    case 1:
       twoset();
        break;
    case 2:
       twoset();
        break;
    case 3:
       twoset();
        break;
  }
}

function oneset(){
	jQuery('.slide0').hide();
        jQuery('.slide1').hide();
        jQuery('.slide2').hide();
        jQuery('.slide3').hide();
        jQuery('.slide4').show();
        jQuery('.slide5').show();
        jQuery('.slide6').show();
        jQuery('.slide7').show();
        jQuery('.sp').css("background","#fff");
        jQuery('.sp1').css("background","#bf202f");
        //jQuery('#block-views-f52943f3483a36071c3e690ffdfec8bb').css("z-index","0");
}


function twoset(){
	 jQuery('.slide0').show();
        jQuery('.slide1').show();
        jQuery('.slide2').show();
        jQuery('.slide3').show();
        jQuery('.slide4').hide();
        jQuery('.slide5').hide();
        jQuery('.slide6').hide();
        jQuery('.slide7').hide();
        jQuery('.sp').css("background","#bf202f");
        jQuery('.sp1').css("background","#fff");
}
jQuery(document).ready(function(){
	/*if(jQuery('.view-display-id-block_1 #nav .slide3').hasClass("activeSlide")){
		jQuery('.view-display-id-block_1').hide();
		jQuery('.view-display-id-block_3').show();
	}

	if(jQuery('.view-display-id-block_3 #nav1 .slide3').hasClass("activeSlide")){
		jQuery('.view-display-id-block_3').hide();
		jQuery('.view-display-id-block_1').show();
	}*/
//jQuery('.view-display-id-block_3').hide();
var timer;
setTimeout(function (event) {
	//console.log("test tstst");
		//jQuery('.view-display-id-block_1 .sp1').trigger( "click" );
    }, 15785);

jQuery('.view-display-id-block_1 .sp').click(function () {
    //clearTimeout(timer);
    //jQuery('.view-display-id-block_1').fadeIn();
	//jQuery('.view-display-id-block_3').hide('slow');
	jQuery('#block-views-58866d4851af90ebaf088d6687c7fa1b').css("z-index","100");
	jQuery('#block-views-f52943f3483a36071c3e690ffdfec8bb').css("z-index","0");

    setTimeout(function (event) {
    	//console.log(timer);
		jQuery('.view-display-id-block_1 .sp1').trigger( "click" );
    }, 15785);
});

jQuery('.view-display-id-block_1 .sp1').click(function () {
    //clearTimeout(timer);
    //jQuery('.view-display-id-block_3').fadeIn();
    jQuery('#block-views-f52943f3483a36071c3e690ffdfec8bb').css("z-index","100");
	jQuery('#block-views-58866d4851af90ebaf088d6687c7fa1b').css("z-index","0");

   setTimeout(function (event) {
    	//console.log(timer);
		jQuery('.view-display-id-block_1 .sp').trigger( "click" );
    }, 15785);
});

});


//off the autoplay of video on ajaxstop state
jQuery(document).ajaxStop(function() {
	jQuery( "iframe" ).each(function( index ) {
		var str = jQuery( this ).attr("src").replace('autoplay=1', 'autoplay=0');
		jQuery( this ).attr("src",str);
	});
});
// hide when user not login for menu
jQuery(document).ready(function(){
	jQuery('.not-logged-in .condition-list').parent().remove();
	jQuery('.not-logged-in .user-signup').css('border','0px');
	jQuery('.not-logged-in .user-signup').css('margin-left','0px');
	jQuery('.not-logged-in .user-signup').css('padding-left','0px');
});