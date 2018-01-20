 /*
 * jQuery FlexSlider v2.2.2
 * Copyright 2012 WooThemes
 * Contributing Author: Tyler Smith
 */
!function(a){a.flexslider=function(b,c){var d=a(b);d.vars=a.extend({},a.flexslider.defaults,c);var j,e=d.vars.namespace,f=window.navigator&&window.navigator.msPointerEnabled&&window.MSGesture,g=("ontouchstart"in window||f||window.DocumentTouch&&document instanceof DocumentTouch)&&d.vars.touch,h="click touchend MSPointerUp",i="",k="vertical"===d.vars.direction,l=d.vars.reverse,m=d.vars.itemWidth>0,n="fade"===d.vars.animation,o=""!==d.vars.asNavFor,p={},q=!0;a.data(b,"flexslider",d),p={init:function(){d.animating=!1,d.currentSlide=parseInt(d.vars.startAt?d.vars.startAt:0,10),isNaN(d.currentSlide)&&(d.currentSlide=0),d.animatingTo=d.currentSlide,d.atEnd=0===d.currentSlide||d.currentSlide===d.last,d.containerSelector=d.vars.selector.substr(0,d.vars.selector.search(" ")),d.slides=a(d.vars.selector,d),d.container=a(d.containerSelector,d),d.count=d.slides.length,d.syncExists=a(d.vars.sync).length>0,"slide"===d.vars.animation&&(d.vars.animation="swing"),d.prop=k?"top":"marginLeft",d.args={},d.manualPause=!1,d.stopped=!1,d.started=!1,d.startTimeout=null,d.transitions=!d.vars.video&&!n&&d.vars.useCSS&&function(){var a=document.createElement("div"),b=["perspectiveProperty","WebkitPerspective","MozPerspective","OPerspective","msPerspective"];for(var c in b)if(void 0!==a.style[b[c]])return d.pfx=b[c].replace("Perspective","").toLowerCase(),d.prop="-"+d.pfx+"-transform",!0;return!1}(),d.ensureAnimationEnd="",""!==d.vars.controlsContainer&&(d.controlsContainer=a(d.vars.controlsContainer).length>0&&a(d.vars.controlsContainer)),""!==d.vars.manualControls&&(d.manualControls=a(d.vars.manualControls).length>0&&a(d.vars.manualControls)),d.vars.randomize&&(d.slides.sort(function(){return Math.round(Math.random())-.5}),d.container.empty().append(d.slides)),d.doMath(),d.setup("init"),d.vars.controlNav&&p.controlNav.setup(),d.vars.directionNav&&p.directionNav.setup(),d.vars.keyboard&&(1===a(d.containerSelector).length||d.vars.multipleKeyboard)&&a(document).bind("keyup",function(a){var b=a.keyCode;if(!d.animating&&(39===b||37===b)){var c=39===b?d.getTarget("next"):37===b?d.getTarget("prev"):!1;d.flexAnimate(c,d.vars.pauseOnAction)}}),d.vars.mousewheel&&d.bind("mousewheel",function(a,b){a.preventDefault();var f=0>b?d.getTarget("next"):d.getTarget("prev");d.flexAnimate(f,d.vars.pauseOnAction)}),d.vars.pausePlay&&p.pausePlay.setup(),d.vars.slideshow&&d.vars.pauseInvisible&&p.pauseInvisible.init(),d.vars.slideshow&&(d.vars.pauseOnHover&&d.hover(function(){d.manualPlay||d.manualPause||d.pause()},function(){d.manualPause||d.manualPlay||d.stopped||d.play()}),d.vars.pauseInvisible&&p.pauseInvisible.isHidden()||(d.vars.initDelay>0?d.startTimeout=setTimeout(d.play,d.vars.initDelay):d.play())),o&&p.asNav.setup(),g&&d.vars.touch&&p.touch(),(!n||n&&d.vars.smoothHeight)&&a(window).bind("resize orientationchange focus",p.resize),d.find("img").attr("draggable","false"),setTimeout(function(){d.vars.start(d)},200)},asNav:{setup:function(){d.asNav=!0,d.animatingTo=Math.floor(d.currentSlide/d.move),d.currentItem=d.currentSlide,d.slides.removeClass(e+"active-slide").eq(d.currentItem).addClass(e+"active-slide"),f?(b._slider=d,d.slides.each(function(){var b=this;b._gesture=new MSGesture,b._gesture.target=b,b.addEventListener("MSPointerDown",function(a){a.preventDefault(),a.currentTarget._gesture&&a.currentTarget._gesture.addPointer(a.pointerId)},!1),b.addEventListener("MSGestureTap",function(b){b.preventDefault();var c=a(this),e=c.index();a(d.vars.asNavFor).data("flexslider").animating||c.hasClass("active")||(d.direction=d.currentItem<e?"next":"prev",d.flexAnimate(e,d.vars.pauseOnAction,!1,!0,!0))})})):d.slides.on(h,function(b){b.preventDefault();var c=a(this),f=c.index(),g=c.offset().left-a(d).scrollLeft();0>=g&&c.hasClass(e+"active-slide")?d.flexAnimate(d.getTarget("prev"),!0):a(d.vars.asNavFor).data("flexslider").animating||c.hasClass(e+"active-slide")||(d.direction=d.currentItem<f?"next":"prev",d.flexAnimate(f,d.vars.pauseOnAction,!1,!0,!0))})}},controlNav:{setup:function(){d.manualControls?p.controlNav.setupManual():p.controlNav.setupPaging()},setupPaging:function(){var f,g,b="thumbnails"===d.vars.controlNav?"control-thumbs":"control-paging",c=1;if(d.controlNavScaffold=a('<ol class="'+e+"control-nav "+e+b+'"></ol>'),d.pagingCount>1)for(var j=0;j<d.pagingCount;j++){if(g=d.slides.eq(j),f="thumbnails"===d.vars.controlNav?'<img src="'+g.attr("data-thumb")+'"/>':"<a>"+c+"</a>","thumbnails"===d.vars.controlNav&&!0===d.vars.thumbCaptions){var k=g.attr("data-thumbcaption");""!=k&&void 0!=k&&(f+='<span class="'+e+'caption">'+k+"</span>")}d.controlNavScaffold.append("<li>"+f+"</li>"),c++}d.controlsContainer?a(d.controlsContainer).append(d.controlNavScaffold):d.append(d.controlNavScaffold),p.controlNav.set(),p.controlNav.active(),d.controlNavScaffold.delegate("a, img",h,function(b){if(b.preventDefault(),""===i||i===b.type){var c=a(this),f=d.controlNav.index(c);c.hasClass(e+"active")||(d.direction=f>d.currentSlide?"next":"prev",d.flexAnimate(f,d.vars.pauseOnAction))}""===i&&(i=b.type),p.setToClearWatchedEvent()})},setupManual:function(){d.controlNav=d.manualControls,p.controlNav.active(),d.controlNav.bind(h,function(b){if(b.preventDefault(),""===i||i===b.type){var c=a(this),f=d.controlNav.index(c);c.hasClass(e+"active")||(d.direction=f>d.currentSlide?"next":"prev",d.flexAnimate(f,d.vars.pauseOnAction))}""===i&&(i=b.type),p.setToClearWatchedEvent()})},set:function(){var b="thumbnails"===d.vars.controlNav?"img":"a";d.controlNav=a("."+e+"control-nav li "+b,d.controlsContainer?d.controlsContainer:d)},active:function(){d.controlNav.removeClass(e+"active").eq(d.animatingTo).addClass(e+"active")},update:function(b,c){d.pagingCount>1&&"add"===b?d.controlNavScaffold.append(a("<li><a>"+d.count+"</a></li>")):1===d.pagingCount?d.controlNavScaffold.find("li").remove():d.controlNav.eq(c).closest("li").remove(),p.controlNav.set(),d.pagingCount>1&&d.pagingCount!==d.controlNav.length?d.update(c,b):p.controlNav.active()}},directionNav:{setup:function(){var b=a('<ul class="'+e+'direction-nav"><li><a class="'+e+'prev" href="#">'+d.vars.prevText+'</a></li><li><a class="'+e+'next" href="#">'+d.vars.nextText+"</a></li></ul>");d.controlsContainer?(a(d.controlsContainer).append(b),d.directionNav=a("."+e+"direction-nav li a",d.controlsContainer)):(d.append(b),d.directionNav=a("."+e+"direction-nav li a",d)),p.directionNav.update(),d.directionNav.bind(h,function(b){b.preventDefault();var c;(""===i||i===b.type)&&(c=a(this).hasClass(e+"next")?d.getTarget("next"):d.getTarget("prev"),d.flexAnimate(c,d.vars.pauseOnAction)),""===i&&(i=b.type),p.setToClearWatchedEvent()})},update:function(){var a=e+"disabled";1===d.pagingCount?d.directionNav.addClass(a).attr("tabindex","-1"):d.vars.animationLoop?d.directionNav.removeClass(a).removeAttr("tabindex"):0===d.animatingTo?d.directionNav.removeClass(a).filter("."+e+"prev").addClass(a).attr("tabindex","-1"):d.animatingTo===d.last?d.directionNav.removeClass(a).filter("."+e+"next").addClass(a).attr("tabindex","-1"):d.directionNav.removeClass(a).removeAttr("tabindex")}},pausePlay:{setup:function(){var b=a('<div class="'+e+'pauseplay"><a></a></div>');d.controlsContainer?(d.controlsContainer.append(b),d.pausePlay=a("."+e+"pauseplay a",d.controlsContainer)):(d.append(b),d.pausePlay=a("."+e+"pauseplay a",d)),p.pausePlay.update(d.vars.slideshow?e+"pause":e+"play"),d.pausePlay.bind(h,function(b){b.preventDefault(),(""===i||i===b.type)&&(a(this).hasClass(e+"pause")?(d.manualPause=!0,d.manualPlay=!1,d.pause()):(d.manualPause=!1,d.manualPlay=!0,d.play())),""===i&&(i=b.type),p.setToClearWatchedEvent()})},update:function(a){"play"===a?d.pausePlay.removeClass(e+"pause").addClass(e+"play").html(d.vars.playText):d.pausePlay.removeClass(e+"play").addClass(e+"pause").html(d.vars.pauseText)}},touch:function(){function r(f){d.animating?f.preventDefault():(window.navigator.msPointerEnabled||1===f.touches.length)&&(d.pause(),g=k?d.h:d.w,i=Number(new Date),o=f.touches[0].pageX,p=f.touches[0].pageY,e=m&&l&&d.animatingTo===d.last?0:m&&l?d.limit-(d.itemW+d.vars.itemMargin)*d.move*d.animatingTo:m&&d.currentSlide===d.last?d.limit:m?(d.itemW+d.vars.itemMargin)*d.move*d.currentSlide:l?(d.last-d.currentSlide+d.cloneOffset)*g:(d.currentSlide+d.cloneOffset)*g,a=k?p:o,c=k?o:p,b.addEventListener("touchmove",s,!1),b.addEventListener("touchend",t,!1))}function s(b){o=b.touches[0].pageX,p=b.touches[0].pageY,h=k?a-p:a-o,j=k?Math.abs(h)<Math.abs(o-c):Math.abs(h)<Math.abs(p-c);var f=500;(!j||Number(new Date)-i>f)&&(b.preventDefault(),!n&&d.transitions&&(d.vars.animationLoop||(h/=0===d.currentSlide&&0>h||d.currentSlide===d.last&&h>0?Math.abs(h)/g+2:1),d.setProps(e+h,"setTouch")))}function t(){if(b.removeEventListener("touchmove",s,!1),d.animatingTo===d.currentSlide&&!j&&null!==h){var k=l?-h:h,m=k>0?d.getTarget("next"):d.getTarget("prev");d.canAdvance(m)&&(Number(new Date)-i<550&&Math.abs(k)>50||Math.abs(k)>g/2)?d.flexAnimate(m,d.vars.pauseOnAction):n||d.flexAnimate(d.currentSlide,d.vars.pauseOnAction,!0)}b.removeEventListener("touchend",t,!1),a=null,c=null,h=null,e=null}function u(a){a.stopPropagation(),d.animating?a.preventDefault():(d.pause(),b._gesture.addPointer(a.pointerId),q=0,g=k?d.h:d.w,i=Number(new Date),e=m&&l&&d.animatingTo===d.last?0:m&&l?d.limit-(d.itemW+d.vars.itemMargin)*d.move*d.animatingTo:m&&d.currentSlide===d.last?d.limit:m?(d.itemW+d.vars.itemMargin)*d.move*d.currentSlide:l?(d.last-d.currentSlide+d.cloneOffset)*g:(d.currentSlide+d.cloneOffset)*g)}function v(a){a.stopPropagation();var c=a.target._slider;if(c){var d=-a.translationX,f=-a.translationY;return q+=k?f:d,h=q,j=k?Math.abs(q)<Math.abs(-d):Math.abs(q)<Math.abs(-f),a.detail===a.MSGESTURE_FLAG_INERTIA?(setImmediate(function(){b._gesture.stop()}),void 0):((!j||Number(new Date)-i>500)&&(a.preventDefault(),!n&&c.transitions&&(c.vars.animationLoop||(h=q/(0===c.currentSlide&&0>q||c.currentSlide===c.last&&q>0?Math.abs(q)/g+2:1)),c.setProps(e+h,"setTouch"))),void 0)}}function w(b){b.stopPropagation();var d=b.target._slider;if(d){if(d.animatingTo===d.currentSlide&&!j&&null!==h){var f=l?-h:h,k=f>0?d.getTarget("next"):d.getTarget("prev");d.canAdvance(k)&&(Number(new Date)-i<550&&Math.abs(f)>50||Math.abs(f)>g/2)?d.flexAnimate(k,d.vars.pauseOnAction):n||d.flexAnimate(d.currentSlide,d.vars.pauseOnAction,!0)}a=null,c=null,h=null,e=null,q=0}}var a,c,e,g,h,i,j=!1,o=0,p=0,q=0;f?(b.style.msTouchAction="none",b._gesture=new MSGesture,b._gesture.target=b,b.addEventListener("MSPointerDown",u,!1),b._slider=d,b.addEventListener("MSGestureChange",v,!1),b.addEventListener("MSGestureEnd",w,!1)):b.addEventListener("touchstart",r,!1)},resize:function(){!d.animating&&d.is(":visible")&&(m||d.doMath(),n?p.smoothHeight():m?(d.slides.width(d.computedW),d.update(d.pagingCount),d.setProps()):k?(d.viewport.height(d.h),d.setProps(d.h,"setTotal")):(d.vars.smoothHeight&&p.smoothHeight(),d.newSlides.width(d.computedW),d.setProps(d.computedW,"setTotal")))},smoothHeight:function(a){if(!k||n){var b=n?d:d.viewport;a?b.animate({height:d.slides.eq(d.animatingTo).height()},a):b.height(d.slides.eq(d.animatingTo).height())}},sync:function(b){var c=a(d.vars.sync).data("flexslider"),e=d.animatingTo;switch(b){case"animate":c.flexAnimate(e,d.vars.pauseOnAction,!1,!0);break;case"play":c.playing||c.asNav||c.play();break;case"pause":c.pause()}},uniqueID:function(b){return b.find("[id]").each(function(){var b=a(this);b.attr("id",b.attr("id")+"_clone")}),b},pauseInvisible:{visProp:null,init:function(){var a=["webkit","moz","ms","o"];if("hidden"in document)return"hidden";for(var b=0;b<a.length;b++)a[b]+"Hidden"in document&&(p.pauseInvisible.visProp=a[b]+"Hidden");if(p.pauseInvisible.visProp){var c=p.pauseInvisible.visProp.replace(/[H|h]idden/,"")+"visibilitychange";document.addEventListener(c,function(){p.pauseInvisible.isHidden()?d.startTimeout?clearTimeout(d.startTimeout):d.pause():d.started?d.play():d.vars.initDelay>0?setTimeout(d.play,d.vars.initDelay):d.play()})}},isHidden:function(){return document[p.pauseInvisible.visProp]||!1}},setToClearWatchedEvent:function(){clearTimeout(j),j=setTimeout(function(){i=""},3e3)}},d.flexAnimate=function(b,c,f,h,i){if(d.vars.animationLoop||b===d.currentSlide||(d.direction=b>d.currentSlide?"next":"prev"),o&&1===d.pagingCount&&(d.direction=d.currentItem<b?"next":"prev"),!d.animating&&(d.canAdvance(b,i)||f)&&d.is(":visible")){if(o&&h){var j=a(d.vars.asNavFor).data("flexslider");if(d.atEnd=0===b||b===d.count-1,j.flexAnimate(b,!0,!1,!0,i),d.direction=d.currentItem<b?"next":"prev",j.direction=d.direction,Math.ceil((b+1)/d.visible)-1===d.currentSlide||0===b)return d.currentItem=b,d.slides.removeClass(e+"active-slide").eq(b).addClass(e+"active-slide"),!1;d.currentItem=b,d.slides.removeClass(e+"active-slide").eq(b).addClass(e+"active-slide"),b=Math.floor(b/d.visible)}if(d.animating=!0,d.animatingTo=b,c&&d.pause(),d.vars.before(d),d.syncExists&&!i&&p.sync("animate"),d.vars.controlNav&&p.controlNav.active(),m||d.slides.removeClass(e+"active-slide").eq(b).addClass(e+"active-slide"),d.atEnd=0===b||b===d.last,d.vars.directionNav&&p.directionNav.update(),b===d.last&&(d.vars.end(d),d.vars.animationLoop||d.pause()),n)g?(d.slides.eq(d.currentSlide).css({opacity:0,zIndex:1}),d.slides.eq(b).css({opacity:1,zIndex:2}),d.wrapup(q)):(d.slides.eq(d.currentSlide).css({zIndex:1}).animate({opacity:0},d.vars.animationSpeed,d.vars.easing),d.slides.eq(b).css({zIndex:2}).animate({opacity:1},d.vars.animationSpeed,d.vars.easing,d.wrapup));else{var r,s,t,q=k?d.slides.filter(":first").height():d.computedW;m?(r=d.vars.itemMargin,t=(d.itemW+r)*d.move*d.animatingTo,s=t>d.limit&&1!==d.visible?d.limit:t):s=0===d.currentSlide&&b===d.count-1&&d.vars.animationLoop&&"next"!==d.direction?l?(d.count+d.cloneOffset)*q:0:d.currentSlide===d.last&&0===b&&d.vars.animationLoop&&"prev"!==d.direction?l?0:(d.count+1)*q:l?(d.count-1-b+d.cloneOffset)*q:(b+d.cloneOffset)*q,d.setProps(s,"",d.vars.animationSpeed),d.transitions?(d.vars.animationLoop&&d.atEnd||(d.animating=!1,d.currentSlide=d.animatingTo),d.container.unbind("webkitTransitionEnd transitionend"),d.container.bind("webkitTransitionEnd transitionend",function(){clearTimeout(d.ensureAnimationEnd),d.wrapup(q)}),clearTimeout(d.ensureAnimationEnd),d.ensureAnimationEnd=setTimeout(function(){d.wrapup(q)},d.vars.animationSpeed+100)):d.container.animate(d.args,d.vars.animationSpeed,d.vars.easing,function(){d.wrapup(q)})}d.vars.smoothHeight&&p.smoothHeight(d.vars.animationSpeed)}},d.wrapup=function(a){n||m||(0===d.currentSlide&&d.animatingTo===d.last&&d.vars.animationLoop?d.setProps(a,"jumpEnd"):d.currentSlide===d.last&&0===d.animatingTo&&d.vars.animationLoop&&d.setProps(a,"jumpStart")),d.animating=!1,d.currentSlide=d.animatingTo,d.vars.after(d)},d.animateSlides=function(){!d.animating&&q&&d.flexAnimate(d.getTarget("next"))},d.pause=function(){clearInterval(d.animatedSlides),d.animatedSlides=null,d.playing=!1,d.vars.pausePlay&&p.pausePlay.update("play"),d.syncExists&&p.sync("pause")},d.play=function(){d.playing&&clearInterval(d.animatedSlides),d.animatedSlides=d.animatedSlides||setInterval(d.animateSlides,d.vars.slideshowSpeed),d.started=d.playing=!0,d.vars.pausePlay&&p.pausePlay.update("pause"),d.syncExists&&p.sync("play")},d.stop=function(){d.pause(),d.stopped=!0},d.canAdvance=function(a,b){var c=o?d.pagingCount-1:d.last;return b?!0:o&&d.currentItem===d.count-1&&0===a&&"prev"===d.direction?!0:o&&0===d.currentItem&&a===d.pagingCount-1&&"next"!==d.direction?!1:a!==d.currentSlide||o?d.vars.animationLoop?!0:d.atEnd&&0===d.currentSlide&&a===c&&"next"!==d.direction?!1:d.atEnd&&d.currentSlide===c&&0===a&&"next"===d.direction?!1:!0:!1},d.getTarget=function(a){return d.direction=a,"next"===a?d.currentSlide===d.last?0:d.currentSlide+1:0===d.currentSlide?d.last:d.currentSlide-1},d.setProps=function(a,b,c){var e=function(){var c=a?a:(d.itemW+d.vars.itemMargin)*d.move*d.animatingTo,e=function(){if(m)return"setTouch"===b?a:l&&d.animatingTo===d.last?0:l?d.limit-(d.itemW+d.vars.itemMargin)*d.move*d.animatingTo:d.animatingTo===d.last?d.limit:c;switch(b){case"setTotal":return l?(d.count-1-d.currentSlide+d.cloneOffset)*a:(d.currentSlide+d.cloneOffset)*a;case"setTouch":return l?a:a;case"jumpEnd":return l?a:d.count*a;case"jumpStart":return l?d.count*a:a;default:return a}}();return-1*e+"px"}();d.transitions&&(e=k?"translate3d(0,"+e+",0)":"translate3d("+e+",0,0)",c=void 0!==c?c/1e3+"s":"0s",d.container.css("-"+d.pfx+"-transition-duration",c),d.container.css("transition-duration",c)),d.args[d.prop]=e,(d.transitions||void 0===c)&&d.container.css(d.args),d.container.css("transform",e)},d.setup=function(b){if(n)d.slides.css({width:"100%","float":"left",marginRight:"-100%",position:"relative"}),"init"===b&&(g?d.slides.css({opacity:0,display:"block",webkitTransition:"opacity "+d.vars.animationSpeed/1e3+"s ease",zIndex:1}).eq(d.currentSlide).css({opacity:1,zIndex:2}):d.slides.css({opacity:0,display:"block",zIndex:1}).eq(d.currentSlide).css({zIndex:2}).animate({opacity:1},d.vars.animationSpeed,d.vars.easing)),d.vars.smoothHeight&&p.smoothHeight();else{var c,f;"init"===b&&(d.viewport=a('<div class="'+e+'viewport"></div>').css({overflow:"hidden",position:"relative"}).appendTo(d).append(d.container),d.cloneCount=0,d.cloneOffset=0,l&&(f=a.makeArray(d.slides).reverse(),d.slides=a(f),d.container.empty().append(d.slides))),d.vars.animationLoop&&!m&&(d.cloneCount=2,d.cloneOffset=1,"init"!==b&&d.container.find(".clone").remove(),p.uniqueID(d.slides.first().clone().addClass("clone").attr("aria-hidden","true")).appendTo(d.container),p.uniqueID(d.slides.last().clone().addClass("clone").attr("aria-hidden","true")).prependTo(d.container)),d.newSlides=a(d.vars.selector,d),c=l?d.count-1-d.currentSlide+d.cloneOffset:d.currentSlide+d.cloneOffset,k&&!m?(d.container.height(200*(d.count+d.cloneCount)+"%").css("position","absolute").width("100%"),setTimeout(function(){d.newSlides.css({display:"block"}),d.doMath(),d.viewport.height(d.h),d.setProps(c*d.h,"init")},"init"===b?100:0)):(d.container.width(200*(d.count+d.cloneCount)+"%"),d.setProps(c*d.computedW,"init"),setTimeout(function(){d.doMath(),d.newSlides.css({width:d.computedW,"float":"left",display:"block"}),d.vars.smoothHeight&&p.smoothHeight()},"init"===b?100:0))}m||d.slides.removeClass(e+"active-slide").eq(d.currentSlide).addClass(e+"active-slide"),d.vars.init(d)},d.doMath=function(){var a=d.slides.first(),b=d.vars.itemMargin,c=d.vars.minItems,e=d.vars.maxItems;d.w=void 0===d.viewport?d.width():d.viewport.width(),d.h=a.height(),d.boxPadding=a.outerWidth()-a.width(),m?(d.itemT=d.vars.itemWidth+b,d.minW=c?c*d.itemT:d.w,d.maxW=e?e*d.itemT-b:d.w,d.itemW=d.minW>d.w?(d.w-b*(c-1))/c:d.maxW<d.w?(d.w-b*(e-1))/e:d.vars.itemWidth>d.w?d.w:d.vars.itemWidth,d.visible=Math.floor(d.w/d.itemW),d.move=d.vars.move>0&&d.vars.move<d.visible?d.vars.move:d.visible,d.pagingCount=Math.ceil((d.count-d.visible)/d.move+1),d.last=d.pagingCount-1,d.limit=1===d.pagingCount?0:d.vars.itemWidth>d.w?d.itemW*(d.count-1)+b*(d.count-1):(d.itemW+b)*d.count-d.w-b):(d.itemW=d.w,d.pagingCount=d.count,d.last=d.count-1),d.computedW=d.itemW-d.boxPadding},d.update=function(a,b){d.doMath(),m||(a<d.currentSlide?d.currentSlide+=1:a<=d.currentSlide&&0!==a&&(d.currentSlide-=1),d.animatingTo=d.currentSlide),d.vars.controlNav&&!d.manualControls&&("add"===b&&!m||d.pagingCount>d.controlNav.length?p.controlNav.update("add"):("remove"===b&&!m||d.pagingCount<d.controlNav.length)&&(m&&d.currentSlide>d.last&&(d.currentSlide-=1,d.animatingTo-=1),p.controlNav.update("remove",d.last))),d.vars.directionNav&&p.directionNav.update()},d.addSlide=function(b,c){var e=a(b);d.count+=1,d.last=d.count-1,k&&l?void 0!==c?d.slides.eq(d.count-c).after(e):d.container.prepend(e):void 0!==c?d.slides.eq(c).before(e):d.container.append(e),d.update(c,"add"),d.slides=a(d.vars.selector+":not(.clone)",d),d.setup(),d.vars.added(d)},d.removeSlide=function(b){var c=isNaN(b)?d.slides.index(a(b)):b;d.count-=1,d.last=d.count-1,isNaN(b)?a(b,d.slides).remove():k&&l?d.slides.eq(d.last).remove():d.slides.eq(b).remove(),d.doMath(),d.update(c,"remove"),d.slides=a(d.vars.selector+":not(.clone)",d),d.setup(),d.vars.removed(d)},p.init()},a(window).blur(function(){focused=!1}).focus(function(){focused=!0}),a.flexslider.defaults={namespace:"flex-",selector:".slides > li",animation:"fade",easing:"swing",direction:"horizontal",reverse:!1,animationLoop:!0,smoothHeight:!1,startAt:0,slideshow:!0,slideshowSpeed:7e3,animationSpeed:600,initDelay:0,randomize:!1,thumbCaptions:!1,pauseOnAction:!0,pauseOnHover:!1,pauseInvisible:!0,useCSS:!0,touch:!0,video:!1,controlNav:!0,directionNav:!0,prevText:"Previous",nextText:"Next",keyboard:!0,multipleKeyboard:!1,mousewheel:!1,pausePlay:!1,pauseText:"Pause",playText:"Play",controlsContainer:"",manualControls:"",sync:"",asNavFor:"",itemWidth:0,itemMargin:0,minItems:1,maxItems:0,move:0,allowOneSlide:!0,start:function(){},before:function(){},after:function(){},end:function(){},added:function(){},removed:function(){},init:function(){}},a.fn.flexslider=function(b){if(void 0===b&&(b={}),"object"==typeof b)return this.each(function(){var c=a(this),d=b.selector?b.selector:".slides > li",e=c.find(d);1===e.length&&b.allowOneSlide===!0||0===e.length?(e.fadeIn(400),b.start&&b.start(c)):void 0===c.data("flexslider")&&new a.flexslider(this,b)});var c=a(this).data("flexslider");switch(b){case"play":c.play();break;case"pause":c.pause();break;case"stop":c.stop();break;case"next":c.flexAnimate(c.getTarget("next"),!0);break;case"prev":case"previous":c.flexAnimate(c.getTarget("prev"),!0);break;default:"number"==typeof b&&c.flexAnimate(b,!0)}}}(jQuery);
(function ($) {
  // @todo convert to use Drupal.behaviors
  // @todo add configuration options

  // Register callback to save references to flexslider instances. Allows
  // Views Slideshow controls to affect the slider
  function flexslider_views_slideshow_register(fullId, slider) {
    Drupal.flexsliderViewsSlideshow.active = Drupal.flexsliderViewsSlideshow.active || {};
    Drupal.flexsliderViewsSlideshow.active[fullId] = slider;
  }

  Drupal.behaviors.flexsliderViewsSlideshow = {
    attach: function (context) {
      $('.flexslider_views_slideshow_main:not(.flexslider_views_slideshow-processed)', context).addClass('flexslider_views_slideshow-processed').each(function() {
        // Get the ID of the slideshow
        var fullId = '#' + $(this).attr('id');

        // Create settings container
        var settings = Drupal.settings.flexslider_views_slideshow[fullId];

        //console.log(settings);

        // @todo map the settings from the form to their javascript equivalents
        settings.targetId = fullId;
        
        settings.loaded = false;

        // Assign default settings
		// @todo update the list of options to match the new set
        settings.opts = {
          // v2.x options
          namespace:settings.namespace,
          selector:settings.selector,
          easing:settings.easing,
          direction:settings.direction,
          reverse:settings.reverse,
          smoothHeight:settings.smoothHeight,
          startAt:settings.startAt,
          animationSpeed:settings.animationSpeed,
          initDelay:settings.initDelay,
          useCSS:settings.useCSS,
          touch:settings.touch,
          video:settings.video,
          keyboard:settings.keyboard,
          multipleKeyboard:settings.multipleKeyboard,
          mousewheel:settings.mousewheel,
          controlsContainer:settings.controlsContainer,
          sync:settings.sync,
          asNavFor:settings.asNavFor,
          itemWidth:settings.itemWidth,
          itemMargin:settings.itemMargin,
          minItems:settings.minItems,
          maxItems:settings.maxItems,
          move:settings.move,
          // v1.x options
          animation:settings.animation,
          slideshow:settings.slideshow,
          slideshowSpeed:settings.slideshowSpeed,
          directionNav:settings.directionNav,
          controlNav:settings.controlNav,
          prevText:settings.prevText,
          nextText:settings.nextText,
          pausePlay:settings.pausePlay,
          pauseText:settings.pauseText,
          playText:settings.playText,
          randomize:settings.randomize,
          animationLoop:settings.animationLoop,
          pauseOnAction:settings.pauseOnAction,
          pauseOnHover:settings.pauseOnHover,
          manualControls:settings.manualControls,
          start: function(slider) {
            flexslider_views_slideshow_register(fullId, slider);
          }
          // @todo register other callbacks
        };

        Drupal.flexsliderViewsSlideshow.load(fullId);
      });
    }
  };


  // Initialize the flexslider object
  Drupal.flexsliderViewsSlideshow = Drupal.flexsliderViewsSlideshow || {};

  // Load mapping from Views Slideshow to FlexSlider
  Drupal.flexsliderViewsSlideshow.load = function(fullId) {
    var settings = Drupal.settings.flexslider_views_slideshow[fullId];

    // Ensure the slider isn't already loaded
    if (!settings.loaded) {
      $(settings.targetId + " .flexslider").flexslider(settings.opts);
      settings.loaded = true;
    }
  }

  // Pause mapping from Views Slideshow to FlexSlider
  Drupal.flexsliderViewsSlideshow.pause = function (options) {
    Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].pause();
    Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].manualPause = true;
  }

  // Play mapping from Views Slideshow to FlexSlider
  Drupal.flexsliderViewsSlideshow.play = function (options) {
    console.log(Drupal.flexsliderViewsSlideshow);
    Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].resume();
    Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].manualPause = false;
  }
  
  Drupal.flexsliderViewsSlideshow.nextSlide = function (options) {
    var target = Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].getTarget('next');

    if (Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].canAdvance(target)) {
      Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].flexAnimate(target, Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].vars.pauseOnAction);
    }
  }
  Drupal.flexsliderViewsSlideshow.previousSlide = function (options) {
    var target = Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].getTarget('prev');

    if (Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].canAdvance(target)) {
      Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].flexAnimate(target, Drupal.flexsliderViewsSlideshow.active['#flexslider_views_slideshow_main_' + options.slideshowID].vars.pauseOnAction);
    }
  }
  // @todo add support for jquery mobile page init
})(jQuery);;
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

/**
 * @file: Popup dialog interfaces for the media project.
 *
 * Drupal.media.popups.mediaBrowser
 *   Launches the media browser which allows users to pick a piece of media.
 *
 * Drupal.media.popups.mediaStyleSelector
 *  Launches the style selection form where the user can choose what
 *  format/style they want their media in.
 */

(function ($) {
namespace('Drupal.media.popups');

/**
 * Media browser popup. Creates a media browser dialog.
 *
 * @param {function}
 *   onSelect Callback for when dialog is closed, received (Array media, Object
 *   extra);
 * @param {Object}
 *   globalOptions Global options that will get passed upon initialization of
 *   the browser. @see Drupal.media.popups.mediaBrowser.getDefaults();
 * @param {Object}
 *   pluginOptions Options for specific plugins. These are passed to the plugin
 *   upon initialization.  If a function is passed here as a callback, it is
 *   obviously not passed, but is accessible to the plugin in
 *   Drupal.settings.variables. Example:
 *   pluginOptions = {library: {url_include_patterns:'/foo/bar'}};
 * @param {Object}
 *   widgetOptions Options controlling the appearance and behavior of the modal
 *   dialog. @see Drupal.media.popups.mediaBrowser.getDefaults();
 */
Drupal.media.popups.mediaBrowser = function (onSelect, globalOptions, pluginOptions, widgetOptions) {
  // Get default dialog options.
  var options = Drupal.media.popups.mediaBrowser.getDefaults();

  // Add global, plugin and widget options.
  options.global = $.extend({}, options.global, globalOptions);
  options.plugins = pluginOptions;
  options.widget = $.extend({}, options.widget, widgetOptions);

  // Find the URL of the modal iFrame.
  var browserSrc = options.widget.src;

  if ($.isArray(browserSrc) && browserSrc.length) {
    browserSrc = browserSrc[browserSrc.length - 1];
  }

  // Create an array of parameters to send along to the iFrame.
  var params = {};

  // Add global field widget settings and plugin information.
  $.extend(params, options.global);
  params.plugins = options.plugins;

  // Append the list of parameters to the iFrame URL as query parameters.
  browserSrc += '&' + $.param(params);

  // Create an iFrame with the iFrame URL.
  var mediaIframe = Drupal.media.popups.getPopupIframe(browserSrc, 'mediaBrowser');

  // Attach an onLoad event.
  mediaIframe.bind('load', options, options.widget.onLoad);

  // Create an array of Dialog options.
  var dialogOptions = options.dialog;

  // Setup the dialog buttons.
  var ok = Drupal.t('OK');
  var notSelected = Drupal.t('You have not selected anything!');

  dialogOptions.buttons[ok] = function () {
    // Find the current file selection.
    var selected = this.contentWindow.Drupal.media.browser.selectedMedia;

    // Alert the user if a selection has yet to be made.
    if (selected.length < 1) {
      alert(notSelected);

      return;
    }

    // Select the file.
    onSelect(selected);

    // Close the dialog.
    $(this).dialog('close');
  };

  // Create a jQuery UI dialog with the given options.
  var dialog = mediaIframe.dialog(dialogOptions);

  // Allow the dialog to react to re-sizing, scrolling, etc.
  Drupal.media.popups.sizeDialog(dialog);
  Drupal.media.popups.resizeDialog(dialog);
  Drupal.media.popups.scrollDialog(dialog);
  Drupal.media.popups.overlayDisplace(dialog.parents(".ui-dialog"));

  return mediaIframe;
};

/**
 * Retrieves a list of default settings for the media browser.
 *
 * @return
 *   An array of default settings.
 */
Drupal.media.popups.mediaBrowser.getDefaults = function () {
  return {
    global: {
      types: [], // Types to allow, defaults to all.
      activePlugins: [] // If provided, a list of plugins which should be enabled.
    },
    widget: { // Settings for the actual iFrame which is launched.
      src: Drupal.settings.media.browserUrl, // Src of the media browser (if you want to totally override it)
      onLoad: Drupal.media.popups.mediaBrowser.mediaBrowserOnLoad // Onload function when iFrame loads.
    },
    dialog: Drupal.media.popups.getDialogOptions()
  };
};

/**
 * Sets up the iFrame buttons.
 */
Drupal.media.popups.mediaBrowser.mediaBrowserOnLoad = function (e) {
  var options = e.data;

  // Ensure that the iFrame is defined.
  if (this.contentWindow.Drupal.media == undefined) {
    return;
  }

  // Check if a selection has been made and press the 'ok' button.
  if (this.contentWindow.Drupal.media.browser.selectedMedia.length > 0) {
    var ok = Drupal.t('OK');
    var ok_func = $(this).dialog('option', 'buttons')[ok];

    ok_func.call(this);

    return;
  }
};

/**
 * Finalizes the selection of a file.
 *
 * Alerts the user if a selection has yet to be made, triggers the file
 * selection and closes the modal dialog.
 */
Drupal.media.popups.mediaBrowser.finalizeSelection = function () {
  // Find the current file selection.
  var selected = this.contentWindow.Drupal.media.browser.selectedMedia;

  // Alert the user if a selection has yet to be made.
  if (selected.length < 1) {
    alert(notSelected);

    return;
  }

  // Select the file.
  onSelect(selected);

  // Close the dialog.
  $(this).dialog('close');
};

/**
 * Style chooser Popup. Creates a dialog for a user to choose a media style.
 *
 * @param mediaFile
 *   The mediaFile you are requesting this formatting form for.
 *   @todo: should this be fid? That's actually all we need now.
 *
 * @param Function
 *   onSubmit Function to be called when the user chooses a media style. Takes
 *   one parameter (Object formattedMedia).
 *
 * @param Object
 *   options Options for the mediaStyleChooser dialog.
 */
Drupal.media.popups.mediaStyleSelector = function (mediaFile, onSelect, options) {
  var defaults = Drupal.media.popups.mediaStyleSelector.getDefaults();

  // @todo: remove this awful hack :(
  if (typeof defaults.src === 'string' ) {
    defaults.src = defaults.src.replace('-media_id-', mediaFile.fid) + '&fields=' + encodeURIComponent(JSON.stringify(mediaFile.fields));
  }
  else {
    var src = defaults.src.shift();

    defaults.src.unshift(src);
    defaults.src = src.replace('-media_id-', mediaFile.fid) + '&fields=' + encodeURIComponent(JSON.stringify(mediaFile.fields));
  }

  options = $.extend({}, defaults, options);

  // Create an iFrame with the iFrame URL.
  var mediaIframe = Drupal.media.popups.getPopupIframe(options.src, 'mediaStyleSelector');

  // Attach an onLoad event.
  mediaIframe.bind('load', options, options.onLoad);

  // Create an array of Dialog options.
  var dialogOptions = Drupal.media.popups.getDialogOptions();

  // Setup the dialog buttons.
  var ok = Drupal.t('OK');
  var notSelected = Drupal.t('Very sorry, there was an unknown error embedding media.');

  dialogOptions.buttons[ok] = function () {
    // Find the current file selection.
    var formattedMedia = this.contentWindow.Drupal.media.formatForm.getFormattedMedia();

    // Alert the user if a selection has yet to be made.
    if (!formattedMedia) {
      alert(notSelected);

      return;
    }

    // Select the file.
    onSelect(formattedMedia);

    // Close the dialog.
    $(this).dialog('close');
  };

  // Create a jQuery UI dialog with the given options.
  var dialog = mediaIframe.dialog(dialogOptions);

  // Allow the dialog to react to re-sizing, scrolling, etc.
  Drupal.media.popups.sizeDialog(dialog);
  Drupal.media.popups.resizeDialog(dialog);
  Drupal.media.popups.scrollDialog(dialog);
  Drupal.media.popups.overlayDisplace(dialog.parents(".ui-dialog"));

  return mediaIframe;
};

Drupal.media.popups.mediaStyleSelector.mediaBrowserOnLoad = function (e) {
};

Drupal.media.popups.mediaStyleSelector.getDefaults = function () {
  return {
    src: Drupal.settings.media.styleSelectorUrl,
    onLoad: Drupal.media.popups.mediaStyleSelector.mediaBrowserOnLoad
  };
};

/**
 * Style chooser Popup. Creates a dialog for a user to choose a media style.
 *
 * @param mediaFile
 *   The mediaFile you are requesting this formatting form for.
 *   @todo: should this be fid? That's actually all we need now.
 *
 * @param Function
 *   onSubmit Function to be called when the user chooses a media style. Takes
 *   one parameter (Object formattedMedia).
 *
 * @param Object
 *   options Options for the mediaStyleChooser dialog.
 */
Drupal.media.popups.mediaFieldEditor = function (fid, onSelect, options) {
  var defaults = Drupal.media.popups.mediaFieldEditor.getDefaults();

  // @todo: remove this awful hack :(
  defaults.src = defaults.src.replace('-media_id-', fid);
  options = $.extend({}, defaults, options);

  // Create an iFrame with the iFrame URL.
  var mediaIframe = Drupal.media.popups.getPopupIframe(options.src, 'mediaFieldEditor');

  // Attach an onLoad event.
  mediaIframe.bind('load', options, options.onLoad);

  // Create an array of Dialog options.
  var dialogOptions = Drupal.media.popups.getDialogOptions();

  // Setup the dialog buttons.
  var ok = Drupal.t('OK');
  var notSelected = Drupal.t('Very sorry, there was an unknown error embedding media.');

  dialogOptions.buttons[ok] = function () {
    // Find the current file selection.
    var formattedMedia = this.contentWindow.Drupal.media.formatForm.getFormattedMedia();

    // Alert the user if a selection has yet to be made.
    if (!formattedMedia) {
      alert(notSelected);

      return;
    }

    // Select the file.
    onSelect(formattedMedia);

    // Close the dialog.
    $(this).dialog('close');
  };

  // Create a jQuery UI dialog with the given options.
  var dialog = mediaIframe.dialog(dialogOptions);

  // Allow the dialog to react to re-sizing, scrolling, etc.
  Drupal.media.popups.sizeDialog(dialog);
  Drupal.media.popups.resizeDialog(dialog);
  Drupal.media.popups.scrollDialog(dialog);
  Drupal.media.popups.overlayDisplace(dialog);

  return mediaIframe;
};

Drupal.media.popups.mediaFieldEditor.mediaBrowserOnLoad = function (e) {

};

Drupal.media.popups.mediaFieldEditor.getDefaults = function () {
  return {
    // @todo: do this for real
    src: '/media/-media_id-/edit?render=media-popup',
    onLoad: Drupal.media.popups.mediaFieldEditor.mediaBrowserOnLoad
  };
};

/**
 * Generic functions to both the media-browser and style selector.
 */

/**
 * Returns the commonly used options for the dialog.
 */
Drupal.media.popups.getDialogOptions = function () {
  return {
    title: Drupal.t('Media browser'),
    buttons: {},
    dialogClass: Drupal.settings.media.dialogOptions.dialogclass,
    modal: Drupal.settings.media.dialogOptions.modal,
    draggable: Drupal.settings.media.dialogOptions.draggable,
    resizable: Drupal.settings.media.dialogOptions.resizable,
    minWidth: Drupal.settings.media.dialogOptions.minwidth,
    width: Drupal.settings.media.dialogOptions.width,
    height: Drupal.settings.media.dialogOptions.height,
    position: Drupal.settings.media.dialogOptions.position,
    overlay: {
      backgroundColor: Drupal.settings.media.dialogOptions.overlay.backgroundcolor,
      opacity: Drupal.settings.media.dialogOptions.overlay.opacity
    },
    zIndex: Drupal.settings.media.dialogOptions.zindex,
    close: function (event, ui) {
      var elem = $(event.target);
      var id = elem.attr('id');
      if(id == 'mediaStyleSelector') {
        $(this).dialog("destroy");
        $('#mediaStyleSelector').remove();
      }
      else {
        $(this).dialog("destroy");
        $('#mediaBrowser').remove();
      }
    }
  };
};

/**
 * Get an iframe to serve as the dialog's contents. Common to both plugins.
 */
Drupal.media.popups.getPopupIframe = function (src, id, options) {
  var defaults = {width: '100%', scrolling: 'auto'};
  var options = $.extend({}, defaults, options);

  return $('<iframe class="media-modal-frame"/>')
  .attr('src', src)
  .attr('width', options.width)
  .attr('id', id)
  .attr('scrolling', options.scrolling);
};

Drupal.media.popups.overlayDisplace = function (dialog) {
  if (parent.window.Drupal.overlay && jQuery.isFunction(parent.window.Drupal.overlay.getDisplacement)) {
    var overlayDisplace = parent.window.Drupal.overlay.getDisplacement('top');

    if (dialog.offset().top < overlayDisplace) {
      dialog.css('top', overlayDisplace);
    }
  }
}

/**
 * Size the dialog when it is first loaded and keep it centered when scrolling.
 *
 * @param jQuery dialogElement
 *  The element which has .dialog() attached to it.
 */
Drupal.media.popups.sizeDialog = function (dialogElement) {
  if (!dialogElement.is(':visible')) {
    return;
  }

  var windowWidth = $(window).width();
  var dialogWidth = windowWidth * 0.8;
  var windowHeight = $(window).height();
  var dialogHeight = windowHeight * 0.8;

  dialogElement.dialog("option", "width", dialogWidth);
  dialogElement.dialog("option", "height", dialogHeight);
  dialogElement.dialog("option", "position", 'center');

  $('.media-modal-frame').width('100%');
}

/**
 * Resize the dialog when the window changes.
 *
 * @param jQuery dialogElement
 *  The element which has .dialog() attached to it.
 */
Drupal.media.popups.resizeDialog = function (dialogElement) {
  $(window).resize(function() {
    Drupal.media.popups.sizeDialog(dialogElement);
  });
}

/**
 * Keeps the dialog centered when the window is scrolled.
 *
 * @param jQuery dialogElement
 *  The element which has .dialog() attached to it.
 */
Drupal.media.popups.scrollDialog = function (dialogElement) {
  // Keep the dialog window centered when scrolling.
  $(window).scroll(function() {
    if (!dialogElement.is(':visible')) {
      return;
    }

    dialogElement.dialog("option", "position", 'center');
  });
}

})(jQuery);
;
(function ($) {

/**
 * Automatically display the guidelines of the selected text format.
 */
Drupal.behaviors.filterGuidelines = {
  attach: function (context) {
    $('.filter-guidelines', context).once('filter-guidelines')
      .find(':header').hide()
      .closest('.filter-wrapper').find('select.filter-list')
      .bind('change', function () {
        $(this).closest('.filter-wrapper')
          .find('.filter-guidelines-item').hide()
          .siblings('.filter-guidelines-' + this.value).show();
      })
      .change();
  }
};

})(jQuery);
;
/**
 *  @file
 *  File with utilities to handle media in html editing.
 */
(function ($) {

  Drupal.media = Drupal.media || {};
  /**
   * Utility to deal with media tokens / placeholders.
   */
  Drupal.media.filter = {
    /**
     * Replaces media tokens with the placeholders for html editing.
     * @param content
     */
    replaceTokenWithPlaceholder: function(content) {
      Drupal.media.filter.ensure_tagmap();
      var matches = content.match(/\[\[.*?\]\]/g);

      if (matches) {
        for (var i = 0; i < matches.length; i++) {
          var match = matches[i];
          if (match.indexOf('"type":"media"') == -1) {
            continue;
          }

          // Check if the macro exists in the tagmap. This ensures backwards
          // compatibility with existing media and is moderately more efficient
          // than re-building the element.
          var media = Drupal.settings.tagmap[match];
          var media_json = match.replace('[[', '').replace(']]', '');

          // Ensure that the media JSON is valid.
          try {
            var media_definition = JSON.parse(media_json);
          }
          catch (err) {
            // @todo: error logging.
            // Content should be returned to prevent an empty editor.
            return content;
          }

          // Re-build the media if the macro has changed from the tagmap.
          if (!media && media_definition.fid) {
            Drupal.media.filter.ensureSourceMap();
            var source;
            if (source = Drupal.settings.mediaSourceMap[media_definition.fid]) {
              media = document.createElement(source.tagName);
              media.src = source.src;
              media.innerHTML = source.innerHTML;
            }
            else {
              // If the media element can't be found, leave it in to be resolved
              // by the user later.
              continue;
            }
          }

          // Apply attributes.
          var element = Drupal.media.filter.create_element(media, media_definition);
          var markup  = Drupal.media.filter.outerHTML(element);

          // Use split and join to replace all instances of macro with markup.
          content = content.split(match).join(markup);
        }
      }

      return content;
    },

    /**
     * Returns alt and title field attribute data from the corresponding fields.
     *
     * Specifically looks for file_entity module's file_image_alt_text and
     * file_image_title_text fields as those are by default used to store
     * override values for image alt and title attributes.
     *
     * @param options (array)
     *   Options passed through a popup form submission.
     * @param includeFieldID (bool)
     *   If set, the returned object will have extra keys with the IDs of the
     *   found fields.
     *
     * If the alt or title fields were not found, their keys will be excluded
     * from the returned array.
     *
     * @return
     *   An object with the following keys:
     *   - alt: The value of the alt field.
     *   - altField: The id of the alt field.
     *   - title: The value of the title field.
     *   - titleField: The id of the title field.
     */
    parseAttributeFields: function(options, includeFieldID) {
      var attributes = {};

      for (var field in options) {
        // If the field is set to false, use an empty string for output.
        options[field] = options[field] === false ? '' : options[field];
        //if (field.match(/^field_file_image_alt_text/)) {
        if (field.match(new RegExp('^' + Drupal.settings.media.img_alt_field))) {
          attributes.alt = options[field];
          if (includeFieldID) {
            attributes.altField = field;
          }
        }

        //if (field.match(/^field_file_image_title_text/)) {
        if (field.match(new RegExp('^' + Drupal.settings.media.img_title_field))) {
          attributes.title = options[field];
          if (includeFieldID) {
            attributes.titleField = field;
          }
        }
      }

      return attributes;
    },

    /**
     * Ensures changes made to fielded attributes are done on the fields too.
     *
     * This should be called when creating a macro tag from a placeholder.
     *
     * Changed made to attributes represented by fields are synced back to the
     * corresponding fields, if they exist. The alt/title attribute
     * values encoded in the macro will override the alt/title field values (set
     * in the Media dialog) during rendering of both WYSIWYG placeholders and
     * the final file entity on the server. Syncing makes changes applied to a
     * placeholder's alt/title attribute using native WYSIWYG tools visible in
     * the fields shown in the Media dialog.
     *
     * The reverse should be done when creating a placeholder from a macro tag
     * so changes made in the Media dialog are reflected in the placeholder's
     * alt and title attributes or the values there become stale and the change
     * appears uneffective.
     *
     * @param file_info (object)
     *   A JSON decoded object of the file being inserted/updated.
     */
    syncAttributesToFields: function(file_info) {
      if (!file_info) {
        file_info = {};
      }
      if (!file_info.attributes) {
        file_info.attributes = {};
      }
      if (!file_info.fields) {
        file_info.fields = {};
      }
      var fields = Drupal.media.filter.parseAttributeFields(file_info.fields, true);

      // If the title attribute has changed, ensure the title field is updated.
      var titleAttr = file_info.attributes.title || false;
      if (fields.titleField && (titleAttr !== fields.title)) {
        file_info.fields[fields.titleField] = titleAttr;
      }

      // If the alt attribute has changed, ensure the alt field is updated.
      var altAttr = file_info.attributes.alt || false;
      if (fields.altField && (altAttr !== fields.alt)) {
        file_info.fields[fields.altField] = altAttr;
      }

      return file_info;
    },

    /**
     * Replaces media elements with tokens.
     *
     * @param content (string)
     *   The markup within the wysiwyg instance.
     */
    replacePlaceholderWithToken: function(content) {
      Drupal.media.filter.ensure_tagmap();

      // Locate and process all the media placeholders in the WYSIWYG content.
      var contentElements = $('<div/>').html(content);  // TODO: once baseline jQuery is 1.8+, switch to using $.parseHTML(content)
      var mediaElements = contentElements.find('.media-element');
      if (mediaElements) {
        $(mediaElements).each(function (i) {
          // Attempt to derive a JSON macro representation of the media placeholder.
          // Note: Drupal 7 ships with JQuery 1.4.4, which allows $(this).attr('outerHTML') to retrieve the eement's HTML,
          // but many sites use JQuery update to increate this to 1.6+, which insists on $(this).prop('outerHTML). 
          // Until the minimum jQuery is >= 1.6, we need to do this the old-school way. 
          // See http://stackoverflow.com/questions/2419749/get-selected-elements-outer-html
          var markup = $(this).get(0).outerHTML;
          if (markup === undefined) {
            // Browser does not support outerHTML DOM property.  Use the more expensive clone method instead.
            markup = $(this).clone().wrap('<div>').parent().html();
          }
          var macro = Drupal.media.filter.create_macro($(markup));
          if (macro) {
            // Replace the placeholder with the macro in the parsed content.
            // (Can't just replace the string section, because the outerHTML may be subtly different,
            // depending on the browser. Parsing tends to convert <img/> to <img>, for instance.)
            Drupal.settings.tagmap[macro] = markup;
            $(this).replaceWith(macro);
          }
        });
        content = $(contentElements).html();
      }

      return content;
    },

    /**
     * Serializes file information as a url-encoded JSON object and stores it
     * as a data attribute on the html element.
     *
     * @param html (string)
     *    A html element to be used to represent the inserted media element.
     * @param info (object)
     *    A object containing the media file information (fid, view_mode, etc).
     */
    create_element: function (html, info) {
      if ($('<div>').append(html).text().length === html.length) {
        // Element is not an html tag. Surround it in a span element so we can
        // pass the file attributes.
        html = '<span>' + html + '</span>';
      }
      var element = $(html);

      // Parse out link wrappers. They will be re-applied when the image is
      // rendered on the front-end.
      if (element.is('a') && element.find('img').length) {
        element = element.children();
      }

      // Extract attributes represented by fields and use those values to keep
      // them in sync, usually alt and title.
      var attributes = Drupal.media.filter.parseAttributeFields(info.fields);
      info.attributes = $.extend(info.attributes, attributes);

      // Move attributes from the file info array to the placeholder element.
      if (info.attributes) {
        $.each(Drupal.settings.media.wysiwyg_allowed_attributes, function(i, a) {
          if (info.attributes[a]) {
            element.attr(a, info.attributes[a]);
          }
        });
        delete(info.attributes);

        // Store information to rebuild the element later, if necessary.
        Drupal.media.filter.ensureSourceMap();
        Drupal.settings.mediaSourceMap[info.fid] = {
          tagName: element[0].tagName,
          src: element[0].src,
          innerHTML: element[0].innerHTML
        }
      }

      info.type = info.type || "media";

      // Store the data in the data map.
      Drupal.media.filter.ensureDataMap();

      // Generate a "delta" to allow for multiple embeddings of the same file.
      var delta = Drupal.media.filter.fileEmbedDelta(info.fid, element);
      if (Drupal.settings.mediaDataMap[info.fid]) {
        info.field_deltas = Drupal.settings.mediaDataMap[info.fid].field_deltas || {};
      }
      else {
        info.field_deltas = {};
      }
      info.field_deltas[delta] = info.fields;
      element.attr('data-delta', delta);

      Drupal.settings.mediaDataMap[info.fid] = info;

      // Store the fid in the DOM to retrieve the data from the info map.
      element.attr('data-fid', info.fid);

      // Add data-media-element attribute so we can find the markup element later.
      element.attr('data-media-element', '1')

      var classes = ['media-element'];
      if (info.view_mode) {
        // Remove any existing view mode classes.
        element.removeClass (function (index, css) {
          return (css.match (/\bfile-\S+/g) || []).join(' ');
        });
        classes.push('file-' + info.view_mode.replace(/_/g, '-'));
      }
      element.addClass(classes.join(' '));

      // Apply link_text if present.
      if (info.link_text) {
        $('a', element).html(info.link_text);
      }

      return element;
    },

    /**
     * Create a macro representation of the inserted media element.
     *
     * @param element (jQuery object)
     *    A media element with attached serialized file info.
     */
    create_macro: function (element) {
      var file_info = Drupal.media.filter.extract_file_info(element);
      if (file_info) {
        if (typeof file_info.link_text == 'string') {
          // Make sure the link_text-html-tags are properly escaped.
          file_info.link_text = file_info.link_text.replace(/</g, '&lt;').replace(/>/g, '&gt;');
        }
        return '[[' + JSON.stringify(file_info) + ']]';
      }
      return false;
    },

    /**
     * Extract the file info from a WYSIWYG placeholder element as JSON.
     *
     * @param element (jQuery object)
     *    A media element with associated file info via a file id (fid).
     */
    extract_file_info: function (element) {
      var fid, file_info, value, delta;

      if (fid = element.data('fid')) {
        Drupal.media.filter.ensureDataMap();

        if (file_info = Drupal.settings.mediaDataMap[fid]) {
          file_info.attributes = {};

          $.each(Drupal.settings.media.wysiwyg_allowed_attributes, function(i, a) {
            if (value = element.attr(a)) {
              // Replace &quot; by \" to avoid error with JSON format.
              if (typeof value == 'string') {
                value = value.replace('&quot;', '\\"');
              }
              file_info.attributes[a] = value;
            }
          });

          // Extract the link text, if there is any.
          file_info.link_text = (Drupal.settings.mediaDoLinkText) ? element.find('a').html() : false;

          // When a file is embedded, its fields can be overridden. To allow for
          // the edge case where the same file is embedded multiple times with
          // different field overrides, we look for a data-delta attribute on
          // the element, and use that to decide which set of data in the
          // "field_deltas" property to use.
          if (delta = element.data('delta')) {
            if (file_info.field_deltas && file_info.field_deltas[delta]) {
              file_info.fields = file_info.field_deltas[delta];

              // Also look for an overridden view mode, aka "format".
              // Check for existance of fields to make it backward compatible.
              if (file_info.fields && file_info.fields.format && file_info.view_mode) {
                file_info.view_mode = file_info.fields.format;
              }
            }
          }
        }
      }

      return Drupal.media.filter.syncAttributesToFields(file_info);
    },

    /**
     * Gets the HTML content of an element.
     *
     * @param element (jQuery object)
     */
    outerHTML: function (element) {
      return element[0].outerHTML || $('<div>').append(element.eq(0).clone()).html();
    },

    /**
     * Gets the wrapped HTML content of an element to insert into the wysiwyg.
     *
     * It also registers the element in the tag map so that the token
     * replacement works.
     *
     * @param element (jQuery object) The element to insert.
     *
     * @see Drupal.media.filter.replacePlaceholderWithToken()
     */
    getWysiwygHTML: function (element) {
      // Create the markup and the macro.
      var markup = Drupal.media.filter.outerHTML(element),
        macro = Drupal.media.filter.create_macro(element);

      // Store macro/markup in the tagmap.
      Drupal.media.filter.ensure_tagmap();
      Drupal.settings.tagmap[macro] = markup;

      // Return the html code to insert in an editor and use it with
      // replacePlaceholderWithToken()
      return markup;
    },

    /**
     * Ensures the src tracking has been initialized and returns it.
     */
    ensureSourceMap: function() {
      Drupal.settings.mediaSourceMap = Drupal.settings.mediaSourceMap || {};
      return Drupal.settings.mediaSourceMap;
    },

    /**
     * Ensures the data tracking has been initialized and returns it.
     */
    ensureDataMap: function() {
      Drupal.settings.mediaDataMap = Drupal.settings.mediaDataMap || {};
      return Drupal.settings.mediaDataMap;
    },

    /**
     * Ensures the tag map has been initialized and returns it.
     */
    ensure_tagmap: function () {
      Drupal.settings.tagmap = Drupal.settings.tagmap || {};
      return Drupal.settings.tagmap;
    },

    /**
     * Generates a unique "delta" for each embedding of a particular file.
     */
    fileEmbedDelta: function(fid, element) {
      // Ensure we have an object to track our deltas.
      Drupal.settings.mediaDeltas = Drupal.settings.mediaDeltas || {};

      // Check to see if the element already has one.
      if (element && element.data('delta')) {
        var existingDelta = element.data('delta');
        // If so, make sure that it is being tracked in mediaDeltas.
        if (!Drupal.settings.mediaDeltas[fid]) {
          Drupal.settings.mediaDeltas[fid] = existingDelta;
        }
        return existingDelta;
      }
      // Otherwise, generate a new one. Arbitrarily start with 1.
      var delta = 1;
      if (Drupal.settings.mediaDeltas[fid]) {
        delta = Drupal.settings.mediaDeltas[fid] + 1;
      }
      Drupal.settings.mediaDeltas[fid] = delta;
      return delta;
    }
  }

})(jQuery);
;
