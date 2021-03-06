 (function($) {
    $(function() {
        var jcarousel = $('.jcarousel');

        jcarousel
            .on('jcarousel:reload jcarousel:create', function () {
                var width = jcarousel.innerWidth();

                if (width > 768) {
                    width = width / 5;
                } 
                else if (width >= 600) {
                    width = width /3;
                }else if (width >= 320) {
                    width = width / 2;
                }

                jcarousel.jcarousel('items').css('width', width + 'px');
            })
            .jcarousel({
                wrap: 'circular'
            });

        $('.jcarousel-control-prev')
            .jcarouselControl({
                target: '-=1'
            });

        $('.jcarousel-control-next')
            .jcarouselControl({
                target: '+=1'
            });

        $('.jcarousel-pagination')
            .on('jcarouselpagination:active', 'a', function() {
                $(this).addClass('active');
            })
            .on('jcarouselpagination:inactive', 'a', function() {
                $(this).removeClass('active');
            })
            .on('click', function(e) {
                e.preventDefault();
            })

    });
})(jQuery);;
/*! jCarousel - v0.3.3 - 2015-04-07
* http://sorgalla.com/jcarousel/
* Copyright (c) 2006-2015 Jan Sorgalla; Licensed MIT */
!function(a){"use strict";var b=a.jCarousel={};b.version="0.3.3";var c=/^([+\-]=)?(.+)$/;b.parseTarget=function(a){var b=!1,d="object"!=typeof a?c.exec(a):null;return d?(a=parseInt(d[2],10)||0,d[1]&&(b=!0,"-="===d[1]&&(a*=-1))):"object"!=typeof a&&(a=parseInt(a,10)||0),{target:a,relative:b}},b.detectCarousel=function(a){for(var b;a.length>0;){if(b=a.filter("[data-jcarousel]"),b.length>0)return b;if(b=a.find("[data-jcarousel]"),b.length>0)return b;a=a.parent()}return null},b.base=function(c){return{version:b.version,_options:{},_element:null,_carousel:null,_init:a.noop,_create:a.noop,_destroy:a.noop,_reload:a.noop,create:function(){return this._element.attr("data-"+c.toLowerCase(),!0).data(c,this),!1===this._trigger("create")?this:(this._create(),this._trigger("createend"),this)},destroy:function(){return!1===this._trigger("destroy")?this:(this._destroy(),this._trigger("destroyend"),this._element.removeData(c).removeAttr("data-"+c.toLowerCase()),this)},reload:function(a){return!1===this._trigger("reload")?this:(a&&this.options(a),this._reload(),this._trigger("reloadend"),this)},element:function(){return this._element},options:function(b,c){if(0===arguments.length)return a.extend({},this._options);if("string"==typeof b){if("undefined"==typeof c)return"undefined"==typeof this._options[b]?null:this._options[b];this._options[b]=c}else this._options=a.extend({},this._options,b);return this},carousel:function(){return this._carousel||(this._carousel=b.detectCarousel(this.options("carousel")||this._element),this._carousel||a.error('Could not detect carousel for plugin "'+c+'"')),this._carousel},_trigger:function(b,d,e){var f,g=!1;return e=[this].concat(e||[]),(d||this._element).each(function(){f=a.Event((c+":"+b).toLowerCase()),a(this).trigger(f,e),f.isDefaultPrevented()&&(g=!0)}),!g}}},b.plugin=function(c,d){var e=a[c]=function(b,c){this._element=a(b),this.options(c),this._init(),this.create()};return e.fn=e.prototype=a.extend({},b.base(c),d),a.fn[c]=function(b){var d=Array.prototype.slice.call(arguments,1),f=this;return this.each("string"==typeof b?function(){var e=a(this).data(c);if(!e)return a.error("Cannot call methods on "+c+' prior to initialization; attempted to call method "'+b+'"');if(!a.isFunction(e[b])||"_"===b.charAt(0))return a.error('No such method "'+b+'" for '+c+" instance");var g=e[b].apply(e,d);return g!==e&&"undefined"!=typeof g?(f=g,!1):void 0}:function(){var d=a(this).data(c);d instanceof e?d.reload(b):new e(this,b)}),f},e}}(jQuery),function(a,b){"use strict";var c=function(a){return parseFloat(a)||0};a.jCarousel.plugin("jcarousel",{animating:!1,tail:0,inTail:!1,resizeTimer:null,lt:null,vertical:!1,rtl:!1,circular:!1,underflow:!1,relative:!1,_options:{list:function(){return this.element().children().eq(0)},items:function(){return this.list().children()},animation:400,transitions:!1,wrap:null,vertical:null,rtl:null,center:!1},_list:null,_items:null,_target:a(),_first:a(),_last:a(),_visible:a(),_fullyvisible:a(),_init:function(){var a=this;return this.onWindowResize=function(){a.resizeTimer&&clearTimeout(a.resizeTimer),a.resizeTimer=setTimeout(function(){a.reload()},100)},this},_create:function(){this._reload(),a(b).on("resize.jcarousel",this.onWindowResize)},_destroy:function(){a(b).off("resize.jcarousel",this.onWindowResize)},_reload:function(){this.vertical=this.options("vertical"),null==this.vertical&&(this.vertical=this.list().height()>this.list().width()),this.rtl=this.options("rtl"),null==this.rtl&&(this.rtl=function(b){if("rtl"===(""+b.attr("dir")).toLowerCase())return!0;var c=!1;return b.parents("[dir]").each(function(){return/rtl/i.test(a(this).attr("dir"))?(c=!0,!1):void 0}),c}(this._element)),this.lt=this.vertical?"top":"left",this.relative="relative"===this.list().css("position"),this._list=null,this._items=null;var b=this.index(this._target)>=0?this._target:this.closest();this.circular="circular"===this.options("wrap"),this.underflow=!1;var c={left:0,top:0};return b.length>0&&(this._prepare(b),this.list().find("[data-jcarousel-clone]").remove(),this._items=null,this.underflow=this._fullyvisible.length>=this.items().length,this.circular=this.circular&&!this.underflow,c[this.lt]=this._position(b)+"px"),this.move(c),this},list:function(){if(null===this._list){var b=this.options("list");this._list=a.isFunction(b)?b.call(this):this._element.find(b)}return this._list},items:function(){if(null===this._items){var b=this.options("items");this._items=(a.isFunction(b)?b.call(this):this.list().find(b)).not("[data-jcarousel-clone]")}return this._items},index:function(a){return this.items().index(a)},closest:function(){var b,d=this,e=this.list().position()[this.lt],f=a(),g=!1,h=this.vertical?"bottom":this.rtl&&!this.relative?"left":"right";return this.rtl&&this.relative&&!this.vertical&&(e+=this.list().width()-this.clipping()),this.items().each(function(){if(f=a(this),g)return!1;var i=d.dimension(f);if(e+=i,e>=0){if(b=i-c(f.css("margin-"+h)),!(Math.abs(e)-i+b/2<=0))return!1;g=!0}}),f},target:function(){return this._target},first:function(){return this._first},last:function(){return this._last},visible:function(){return this._visible},fullyvisible:function(){return this._fullyvisible},hasNext:function(){if(!1===this._trigger("hasnext"))return!0;var a=this.options("wrap"),b=this.items().length-1,c=this.options("center")?this._target:this._last;return b>=0&&!this.underflow&&(a&&"first"!==a||this.index(c)<b||this.tail&&!this.inTail)?!0:!1},hasPrev:function(){if(!1===this._trigger("hasprev"))return!0;var a=this.options("wrap");return this.items().length>0&&!this.underflow&&(a&&"last"!==a||this.index(this._first)>0||this.tail&&this.inTail)?!0:!1},clipping:function(){return this._element["inner"+(this.vertical?"Height":"Width")]()},dimension:function(a){return a["outer"+(this.vertical?"Height":"Width")](!0)},scroll:function(b,c,d){if(this.animating)return this;if(!1===this._trigger("scroll",null,[b,c]))return this;a.isFunction(c)&&(d=c,c=!0);var e=a.jCarousel.parseTarget(b);if(e.relative){var f,g,h,i,j,k,l,m,n=this.items().length-1,o=Math.abs(e.target),p=this.options("wrap");if(e.target>0){var q=this.index(this._last);if(q>=n&&this.tail)this.inTail?"both"===p||"last"===p?this._scroll(0,c,d):a.isFunction(d)&&d.call(this,!1):this._scrollTail(c,d);else if(f=this.index(this._target),this.underflow&&f===n&&("circular"===p||"both"===p||"last"===p)||!this.underflow&&q===n&&("both"===p||"last"===p))this._scroll(0,c,d);else if(h=f+o,this.circular&&h>n){for(m=n,j=this.items().get(-1);m++<h;)j=this.items().eq(0),k=this._visible.index(j)>=0,k&&j.after(j.clone(!0).attr("data-jcarousel-clone",!0)),this.list().append(j),k||(l={},l[this.lt]=this.dimension(j),this.moveBy(l)),this._items=null;this._scroll(j,c,d)}else this._scroll(Math.min(h,n),c,d)}else if(this.inTail)this._scroll(Math.max(this.index(this._first)-o+1,0),c,d);else if(g=this.index(this._first),f=this.index(this._target),i=this.underflow?f:g,h=i-o,0>=i&&(this.underflow&&"circular"===p||"both"===p||"first"===p))this._scroll(n,c,d);else if(this.circular&&0>h){for(m=h,j=this.items().get(0);m++<0;){j=this.items().eq(-1),k=this._visible.index(j)>=0,k&&j.after(j.clone(!0).attr("data-jcarousel-clone",!0)),this.list().prepend(j),this._items=null;var r=this.dimension(j);l={},l[this.lt]=-r,this.moveBy(l)}this._scroll(j,c,d)}else this._scroll(Math.max(h,0),c,d)}else this._scroll(e.target,c,d);return this._trigger("scrollend"),this},moveBy:function(a,b){var d=this.list().position(),e=1,f=0;return this.rtl&&!this.vertical&&(e=-1,this.relative&&(f=this.list().width()-this.clipping())),a.left&&(a.left=d.left+f+c(a.left)*e+"px"),a.top&&(a.top=d.top+f+c(a.top)*e+"px"),this.move(a,b)},move:function(b,c){c=c||{};var d=this.options("transitions"),e=!!d,f=!!d.transforms,g=!!d.transforms3d,h=c.duration||0,i=this.list();if(!e&&h>0)return void i.animate(b,c);var j=c.complete||a.noop,k={};if(e){var l={transitionDuration:i.css("transitionDuration"),transitionTimingFunction:i.css("transitionTimingFunction"),transitionProperty:i.css("transitionProperty")},m=j;j=function(){a(this).css(l),m.call(this)},k={transitionDuration:(h>0?h/1e3:0)+"s",transitionTimingFunction:d.easing||c.easing,transitionProperty:h>0?function(){return f||g?"all":b.left?"left":"top"}():"none",transform:"none"}}g?k.transform="translate3d("+(b.left||0)+","+(b.top||0)+",0)":f?k.transform="translate("+(b.left||0)+","+(b.top||0)+")":a.extend(k,b),e&&h>0&&i.one("transitionend webkitTransitionEnd oTransitionEnd otransitionend MSTransitionEnd",j),i.css(k),0>=h&&i.each(function(){j.call(this)})},_scroll:function(b,c,d){if(this.animating)return a.isFunction(d)&&d.call(this,!1),this;if("object"!=typeof b?b=this.items().eq(b):"undefined"==typeof b.jquery&&(b=a(b)),0===b.length)return a.isFunction(d)&&d.call(this,!1),this;this.inTail=!1,this._prepare(b);var e=this._position(b),f=this.list().position()[this.lt];if(e===f)return a.isFunction(d)&&d.call(this,!1),this;var g={};return g[this.lt]=e+"px",this._animate(g,c,d),this},_scrollTail:function(b,c){if(this.animating||!this.tail)return a.isFunction(c)&&c.call(this,!1),this;var d=this.list().position()[this.lt];this.rtl&&this.relative&&!this.vertical&&(d+=this.list().width()-this.clipping()),this.rtl&&!this.vertical?d+=this.tail:d-=this.tail,this.inTail=!0;var e={};return e[this.lt]=d+"px",this._update({target:this._target.next(),fullyvisible:this._fullyvisible.slice(1).add(this._visible.last())}),this._animate(e,b,c),this},_animate:function(b,c,d){if(d=d||a.noop,!1===this._trigger("animate"))return d.call(this,!1),this;this.animating=!0;var e=this.options("animation"),f=a.proxy(function(){this.animating=!1;var a=this.list().find("[data-jcarousel-clone]");a.length>0&&(a.remove(),this._reload()),this._trigger("animateend"),d.call(this,!0)},this),g="object"==typeof e?a.extend({},e):{duration:e},h=g.complete||a.noop;return c===!1?g.duration=0:"undefined"!=typeof a.fx.speeds[g.duration]&&(g.duration=a.fx.speeds[g.duration]),g.complete=function(){f(),h.call(this)},this.move(b,g),this},_prepare:function(b){var d,e,f,g,h=this.index(b),i=h,j=this.dimension(b),k=this.clipping(),l=this.vertical?"bottom":this.rtl?"left":"right",m=this.options("center"),n={target:b,first:b,last:b,visible:b,fullyvisible:k>=j?b:a()};if(m&&(j/=2,k/=2),k>j)for(;;){if(d=this.items().eq(++i),0===d.length){if(!this.circular)break;if(d=this.items().eq(0),b.get(0)===d.get(0))break;if(e=this._visible.index(d)>=0,e&&d.after(d.clone(!0).attr("data-jcarousel-clone",!0)),this.list().append(d),!e){var o={};o[this.lt]=this.dimension(d),this.moveBy(o)}this._items=null}if(g=this.dimension(d),0===g)break;if(j+=g,n.last=d,n.visible=n.visible.add(d),f=c(d.css("margin-"+l)),k>=j-f&&(n.fullyvisible=n.fullyvisible.add(d)),j>=k)break}if(!this.circular&&!m&&k>j)for(i=h;;){if(--i<0)break;if(d=this.items().eq(i),0===d.length)break;if(g=this.dimension(d),0===g)break;if(j+=g,n.first=d,n.visible=n.visible.add(d),f=c(d.css("margin-"+l)),k>=j-f&&(n.fullyvisible=n.fullyvisible.add(d)),j>=k)break}return this._update(n),this.tail=0,m||"circular"===this.options("wrap")||"custom"===this.options("wrap")||this.index(n.last)!==this.items().length-1||(j-=c(n.last.css("margin-"+l)),j>k&&(this.tail=j-k)),this},_position:function(a){var b=this._first,c=b.position()[this.lt],d=this.options("center"),e=d?this.clipping()/2-this.dimension(b)/2:0;return this.rtl&&!this.vertical?(c-=this.relative?this.list().width()-this.dimension(b):this.clipping()-this.dimension(b),c+=e):c-=e,!d&&(this.index(a)>this.index(b)||this.inTail)&&this.tail?(c=this.rtl&&!this.vertical?c-this.tail:c+this.tail,this.inTail=!0):this.inTail=!1,-c},_update:function(b){var c,d=this,e={target:this._target,first:this._first,last:this._last,visible:this._visible,fullyvisible:this._fullyvisible},f=this.index(b.first||e.first)<this.index(e.first),g=function(c){var g=[],h=[];b[c].each(function(){e[c].index(this)<0&&g.push(this)}),e[c].each(function(){b[c].index(this)<0&&h.push(this)}),f?g=g.reverse():h=h.reverse(),d._trigger(c+"in",a(g)),d._trigger(c+"out",a(h)),d["_"+c]=b[c]};for(c in b)g(c);return this}})}(jQuery,window),function(a){"use strict";a.jcarousel.fn.scrollIntoView=function(b,c,d){var e,f=a.jCarousel.parseTarget(b),g=this.index(this._fullyvisible.first()),h=this.index(this._fullyvisible.last());if(e=f.relative?f.target<0?Math.max(0,g+f.target):h+f.target:"object"!=typeof f.target?f.target:this.index(f.target),g>e)return this.scroll(e,c,d);if(e>=g&&h>=e)return a.isFunction(d)&&d.call(this,!1),this;for(var i,j=this.items(),k=this.clipping(),l=this.vertical?"bottom":this.rtl?"left":"right",m=0;;){if(i=j.eq(e),0===i.length)break;if(m+=this.dimension(i),m>=k){var n=parseFloat(i.css("margin-"+l))||0;m-n!==k&&e++;break}if(0>=e)break;e--}return this.scroll(e,c,d)}}(jQuery),function(a){"use strict";a.jCarousel.plugin("jcarouselControl",{_options:{target:"+=1",event:"click",method:"scroll"},_active:null,_init:function(){this.onDestroy=a.proxy(function(){this._destroy(),this.carousel().one("jcarousel:createend",a.proxy(this._create,this))},this),this.onReload=a.proxy(this._reload,this),this.onEvent=a.proxy(function(b){b.preventDefault();var c=this.options("method");a.isFunction(c)?c.call(this):this.carousel().jcarousel(this.options("method"),this.options("target"))},this)},_create:function(){this.carousel().one("jcarousel:destroy",this.onDestroy).on("jcarousel:reloadend jcarousel:scrollend",this.onReload),this._element.on(this.options("event")+".jcarouselcontrol",this.onEvent),this._reload()},_destroy:function(){this._element.off(".jcarouselcontrol",this.onEvent),this.carousel().off("jcarousel:destroy",this.onDestroy).off("jcarousel:reloadend jcarousel:scrollend",this.onReload)},_reload:function(){var b,c=a.jCarousel.parseTarget(this.options("target")),d=this.carousel();if(c.relative)b=d.jcarousel(c.target>0?"hasNext":"hasPrev");else{var e="object"!=typeof c.target?d.jcarousel("items").eq(c.target):c.target;b=d.jcarousel("target").index(e)>=0}return this._active!==b&&(this._trigger(b?"active":"inactive"),this._active=b),this}})}(jQuery),function(a){"use strict";a.jCarousel.plugin("jcarouselPagination",{_options:{perPage:null,item:function(a){return'<a href="#'+a+'">'+a+"</a>"},event:"click",method:"scroll"},_carouselItems:null,_pages:{},_items:{},_currentPage:null,_init:function(){this.onDestroy=a.proxy(function(){this._destroy(),this.carousel().one("jcarousel:createend",a.proxy(this._create,this))},this),this.onReload=a.proxy(this._reload,this),this.onScroll=a.proxy(this._update,this)},_create:function(){this.carousel().one("jcarousel:destroy",this.onDestroy).on("jcarousel:reloadend",this.onReload).on("jcarousel:scrollend",this.onScroll),this._reload()},_destroy:function(){this._clear(),this.carousel().off("jcarousel:destroy",this.onDestroy).off("jcarousel:reloadend",this.onReload).off("jcarousel:scrollend",this.onScroll),this._carouselItems=null},_reload:function(){var b=this.options("perPage");if(this._pages={},this._items={},a.isFunction(b)&&(b=b.call(this)),null==b)this._pages=this._calculatePages();else for(var c,d=parseInt(b,10)||0,e=this._getCarouselItems(),f=1,g=0;;){if(c=e.eq(g++),0===c.length)break;this._pages[f]=this._pages[f]?this._pages[f].add(c):c,g%d===0&&f++}this._clear();var h=this,i=this.carousel().data("jcarousel"),j=this._element,k=this.options("item"),l=this._getCarouselItems().length;a.each(this._pages,function(b,c){var d=h._items[b]=a(k.call(h,b,c));d.on(h.options("event")+".jcarouselpagination",a.proxy(function(){var a=c.eq(0);if(i.circular){var d=i.index(i.target()),e=i.index(a);parseFloat(b)>parseFloat(h._currentPage)?d>e&&(a="+="+(l-d+e)):e>d&&(a="-="+(d+(l-e)))}i[this.options("method")](a)},h)),j.append(d)}),this._update()},_update:function(){var b,c=this.carousel().jcarousel("target");a.each(this._pages,function(a,d){return d.each(function(){return c.is(this)?(b=a,!1):void 0}),b?!1:void 0}),this._currentPage!==b&&(this._trigger("inactive",this._items[this._currentPage]),this._trigger("active",this._items[b])),this._currentPage=b},items:function(){return this._items},reloadCarouselItems:function(){return this._carouselItems=null,this},_clear:function(){this._element.empty(),this._currentPage=null},_calculatePages:function(){for(var a,b,c=this.carousel().data("jcarousel"),d=this._getCarouselItems(),e=c.clipping(),f=0,g=0,h=1,i={};;){if(a=d.eq(g++),0===a.length)break;b=c.dimension(a),f+b>e&&(h++,f=0),f+=b,i[h]=i[h]?i[h].add(a):a}return i},_getCarouselItems:function(){return this._carouselItems||(this._carouselItems=this.carousel().jcarousel("items")),this._carouselItems}})}(jQuery),function(a,b){"use strict";var c,d,e={hidden:"visibilitychange",mozHidden:"mozvisibilitychange",msHidden:"msvisibilitychange",webkitHidden:"webkitvisibilitychange"};a.each(e,function(a,e){return"undefined"!=typeof b[a]?(c=a,d=e,!1):void 0}),a.jCarousel.plugin("jcarouselAutoscroll",{_options:{target:"+=1",interval:3e3,autostart:!0},_timer:null,_started:!1,_init:function(){this.onDestroy=a.proxy(function(){this._destroy(),this.carousel().one("jcarousel:createend",a.proxy(this._create,this))},this),this.onAnimateEnd=a.proxy(this._start,this),this.onVisibilityChange=a.proxy(function(){b[c]?this._stop():this._start()},this)},_create:function(){this.carousel().one("jcarousel:destroy",this.onDestroy),a(b).on(d,this.onVisibilityChange),this.options("autostart")&&this.start()},_destroy:function(){this._stop(),this.carousel().off("jcarousel:destroy",this.onDestroy),a(b).off(d,this.onVisibilityChange)},_start:function(){return this._stop(),this._started?(this.carousel().one("jcarousel:animateend",this.onAnimateEnd),this._timer=setTimeout(a.proxy(function(){this.carousel().jcarousel("scroll",this.options("target"))},this),this.options("interval")),this):void 0},_stop:function(){return this._timer&&(this._timer=clearTimeout(this._timer)),this.carousel().off("jcarousel:animateend",this.onAnimateEnd),this},start:function(){return this._started=!0,this._start(),this},stop:function(){return this._started=!1,this._stop(),this}})}(jQuery,document);;
eval(function(p,a,c,k,e,r){e=function(c){return(c<a?'':e(parseInt(c/a)))+((c=c%a)>35?String.fromCharCode(c+29):c.toString(36))};if(!''.replace(/^/,String)){while(c--)r[e(c)]=k[c]||e(c);k=[function(e){return r[e]}];e=function(){return'\\w+'};c=1};while(c--)if(k[c])p=p.replace(new RegExp('\\b'+e(c)+'\\b','g'),k[c]);return p}('8={3c:"1.6",1E:"1i.2j,1i.26,1i.2l",1P:"",1Z:11,12:"",2n:11,Z:"",29:\'<N W="$0">$$</N>\',1T:"&#H;",1d:"&#H;&#H;&#H;&#H;",1r:"&#H;<1D/>",2X:5(){9 $(F).2B("1q")[0]},J:{},U:{}};(5($){$(5(){5 27(n,o){5 22(a,b){3 c=(18 b.4=="1f")?b.4:b.4.3q;q.1b({1F:a,4:"("+c+")",C:1+(c.z(/\\\\./g,"%").z(/\\[.*?\\]/g,"%").2W(/\\((?!\\?)/g)||[]).C,Q:(b.Q)?b.Q:8.29})}5 1z(){3 b=0;3 c=D 1y;R(3 i=0;i<q.C;i++){3 d=q[i].4;d=d.z(/\\\\\\\\|\\\\(\\d+)/g,5(m,a){9!a?m:"\\\\"+(b+1+1k(a))});c.1b(d);b+=q[i].C}3 e=c.2q("|");9 D 1o(e,(o.5e)?"2b":"g")}5 2e(a){9 a.z(/&/g,"&4N;").z(/</g,"&4H;")}5 23(b){9 b.z(/ +/g,5(a){9 a.z(/ /g,p)})}5 M(a){a=2e(a);7(p){a=23(a)}9 a}5 2i(c){3 i=0;3 j=1;3 d;X(d=q[i++]){3 e=I;7(e[j]){3 f=/(\\\\\\$)|(?:\\$\\$)|(?:\\$(\\d+))/g;3 g=d.Q.z(f,5(m,a,K){3 b=\'\';7(a){9"$"}A 7(!K){9 M(e[j])}A 7(K=="0"){9 d.1F}A{9 M(e[j+1k(K,10)])}});3 h=I[I.C-2];3 k=I[I.C-1];3 l=k.1S(t,h);t=h+c.C;s+=M(l)+g;9 g}A{j+=d.C}}}3 p=8.1T;3 q=D 1y;R(3 r 1N o.T){22(r,o.T[r])}3 s="";3 t=0;n.z(1z(),2i);3 u=n.1S(t,n.C);s+=M(u);9 s}5 1L(a){7(!8.U[a]){3 b=\'<3f 3e="1j" 3a="37/1K"\'+\' 34="\'+a+\'">\';8.U[a]=19;7($.30.2Y){3 c=G.1O(b);3 d=$(c);$("1B").1V(d)}A{$("1B").1V(b)}}}5 1h(a,b){3 c=a&&a.1g&&a.1g[0]&&a.1g[0].2O;7(!c)c="";c=c.z(/\\r\\n?/g,"\\n");3 d=27(c,b);7(8.1d){d=d.z(/\\t/g,8.1d)}7(8.1r){d=d.z(/\\n/g,8.1r)}$(a).2M(d)}5 16(a,b){3 c={12:8.12,1w:a+".Y",Z:8.Z,1X:a+".1K"};3 d;7(b&&18 b=="1v")d=$.2D(c,b);A d=c;9{B:d.12+d.1w,1j:d.Z+d.1X}}7($.1u)$.1u({2A:"1v.14"});3 v=D 1o("\\\\b"+8.1P+"\\\\b","2b");3 w=[];$(8.1E).1t(5(){3 c=F;3 d=$(c).2r("W");7(!d){9}3 e=$.2p(d.z(v,""));7(\'\'!=e){w.1b(c);3 f=16(e,c.14);7(8.1Z||c.14){7(!8.U[f.B]){1p{8.U[f.B]=19;$.5n(f.B,5(b){b.2k=f.B;8.J[f.B]=b;7(8.2n){1L(f.1j)}$("."+e).1t(5(){3 a=16(e,F.14);7(b.2k==a.B){1h(F,b)}})})}1l(59){55("B 50 R: "+e+\'@\'+4U)}}}A{3 g=8.J[f.B];7(g){1h(c,g)}}}});7(G.1m&&G.1m.28){5 21(a){7(\'\'==a){9""}1n{3 b=(D 4E()).24()}X(a.4x(b)>-1);a=a.z(/\\<1D[^>]*?\\>/4u,b);3 c=G.1O(\'<1q>\');c.4s=a;a=c.4r.z(D 1o(b,"g"),\'\\r\\n\');9 a}3 x="";3 y=1s;$(w).4j().M("1q").V("2h",5(){y=F}).V("2m",5(){7(y==F)x=G.1m.28().4c});$("49").V("48",5(){7(\'\'!=x){2f.41.3X(\'3W\',21(x));3U.3T=11}}).V("2h",5(){x=""}).V("2m",5(){y=1s})}})})(2c);8.J["2j.Y"]={T:{3L:{4:/\\/\\*[^*]*\\*+(?:[^\\/][^*]*\\*+)*\\//},2g:{4:/\\<!--(?:.|\\n)*?--\\>/},1W:{4:/\\/\\/.*/},3H:{4:/3G|3E|3D|3C|3A|3z|3y|3x|3w|3v|3u|3t|3s|3r|3m|z-3k/},3j:{4:/\\/[^\\/\\\\\\n]*(?:\\\\.[^\\/\\\\\\n]*)*\\/[3i]*/},1f:{4:/(?:\\\'[^\\\'\\\\\\n]*(?:\\\\.[^\\\'\\\\\\n]*)*\\\')|(?:\\"[^\\"\\\\\\n]*(?:\\\\.[^\\"\\\\\\n]*)*\\")/},1M:{4:/\\b[+-]?(?:\\d*\\.?\\d+|\\d+\\.?\\d*)(?:[1a][+-]?\\d+)?\\b/},3g:{4:/\\b(I|1C|1J|1l|1H|1I|3d|1n|A|11|R|5|7|1N|3b|D|1s|9|1G|F|19|1p|18|3|39|X|38)\\b/},1e:{4:/\\b(36|24|2f|35|3h|33|G|32|31|1k|3l|2Z|3n|3o|3p|2V|2U|2T)\\b/},1c:{4:/(?:\\<\\w+)|(?:\\>)|(?:\\<\\/\\w+\\>)|(?:\\/\\>)/},1R:{4:/\\s+\\w+(?=\\s*=)/},1Q:{4:/([\\"\\\'])(?:(?:[^\\1\\\\\\r\\n]*?(?:\\1\\1|\\\\.))*[^\\1\\\\\\r\\n]*?)\\1/},1A:{4:/&[\\w#]+?;/},2S:{4:/(\\$|2c)/}}};8.J["26.Y"]={T:{2g:{4:/\\<!--(?:.|\\n)*?--\\>/},1f:{4:/(?:\\\'[^\\\'\\\\\\n]*(?:\\\\.[^\\\'\\\\\\n]*)*\\\')|(?:\\"[^\\"\\\\\\n]*(?:\\\\.[^\\"\\\\\\n]*)*\\")/},1M:{4:/\\b[+-]?(?:\\d*\\.?\\d+|\\d+\\.?\\d*)(?:[1a][+-]?\\d+)?\\b/},1c:{4:/(?:\\<\\w+)|(?:\\>)|(?:\\<\\/\\w+\\>)|(?:\\/\\>)/},1R:{4:/\\s+\\w+(?=\\s*=)/},1Q:{4:/([\\"\\\'])(?:(?:[^\\1\\\\\\r\\n]*?(?:\\1\\1|\\\\.))*[^\\1\\\\\\r\\n]*?)\\1/},1A:{4:/&[\\w#]+?;/}}};8.J["2l.Y"]={T:{2R:{4:/\\/\\*[^*]*\\*+([^\\/][^*]*\\*+)*\\//},1W:{4:/(?:\\/\\/.*)|(?:[^\\\\]\\#.*)/},2Q:{4:/\\\'[^\\\'\\\\]*(?:\\\\.[^\\\'\\\\]*)*\\\'/},2P:{4:/\\"[^\\"\\\\]*(?:\\\\.[^\\"\\\\]*)*\\"/},3B:{4:/\\b(?:[2N][1U][17][17]|[3F][2L][1U][1x]|[2K][2J][17][2I][1x])\\b/},2H:{4:/\\b[+-]?(\\d*\\.?\\d+|\\d+\\.?\\d*)([1a][+-]?\\d+)?\\b/},2G:{4:/\\b(?:3M|2F(?:2E|3O(?:3P(?:15|13)|2C(?:15|13))|15|1Y|2z|2y|2x(?:15|1Y|13)|13)|P(?:2w(?:2v|2u)|3Z(?:2t|2s(?:42|43)|44|E(?:2o|46)|5m(?:5l|5g)|L(?:5b|5a)|O(?:S|52(?:51|4Z|4X))|4T|S(?:4R|4Q|4P)|4M))|4L)\\b/},1e:{4:/(?:\\$4J|\\$4I|\\$4G|\\$4F|\\$4D|\\$4A|\\$4z|\\$4y|\\$4w|\\$4v)\\b/},25:{4:/\\b(?:4t|4B|4C|4q|4p|4o|4n|4m|4l|1C|1J|1l|4k|W|4K|4i|1H|4h|1I|4g|1n|4O|A|4f|4e|4d|4S|4b|4a|4V|4W|47|4Y|45|2a|2a|40|R|3Y|5|1e|7|53|54|3V|56|57|58|D|3S|3R|3Q|3N|5c|5d|3K|5f|3J|9|3I|1G|F|5h|1p|5i|5j|3|X|5k)\\b/},2d:{4:/\\$(\\w+)/,Q:\'<N W="25">$</N><N W="2d">$1</N>\'},1c:{4:/(?:\\<\\?[20][5o][20])|(?:\\<\\?)|(?:\\?\\>)/}}}',62,335,'|||var|exp|function||if|ChiliBook|return||||||||||||||||||||||||||replace|else|recipe|length|new||this|document|160|arguments|recipes|||filter|span|||replacement|for||steps|required|bind|class|while|js|stylesheetFolder||false|recipeFolder|WARNING|chili|ERROR|getPath|Ll|typeof|true|eE|push|tag|replaceTab|global|string|childNodes|makeDish|code|stylesheet|parseInt|catch|selection|do|RegExp|try|pre|replaceNewLine|null|each|metaobjects|object|recipeFile|Ee|Array|knowHow|entity|head|break|br|elementPath|stepName|switch|continue|default|case|css|checkCSS|numbers|in|createElement|elementClass|avalue|aname|substring|replaceSpace|Uu|append|com|stylesheetFile|NOTICE|recipeLoading|Pp|preformatted|prepareStep|replaceSpaces|valueOf|keyword|xml|cook|createRange|defaultReplacement|extends|gi|jQuery|variable|escapeHTML|window|htcom|mousedown|chef|mix|path|php|mouseup|stylesheetLoading|OL|trim|join|attr|CONFIG_FILE_|BINDIR|INSTALL_DIR|EXTENSION_DIR|EAR_|USER_|STRICT|PARSE|selector|next|RE_|extend|ALL|E_|const1|number|Ss|Aa|Ff|Rr|html|Nn|data|string2|string1|mlcom|jquery|Infinity|isNaN|NaN|match|getPRE|msie|setTimeout|browser|unescape|escape|constructor|href|element|toString|text|with|void|type|instanceof|version|delete|rel|link|keywords|prototype|gim|regexp|content|parseFloat|taconite|clearTimeout|setInterval|clearInterval|source|clearFields|clearForm|resetForm|fieldValue|formSerialize|fieldSerialize|ajaxSubmit|ajaxForm|unblock|block|value|onUnblock|unblockUI|blockUI|Tt|silverlight|plugin|static|require_once|public|jscom|DEFAULT_INCLUDE_PATH|print|CO|MPILE_|php_user_filter|or|old_function|returnValue|event|include_once|Text|setData|foreach|HP_|final|clipboardData|PATH|SCAN_DIR|DATADIR|exit|XTENSION_DIR|eval|copy|body|endif|endforeach|htmlText|enddeclare|empty|elseif|die|declare|const|parents|cfunction|as|array|and|abstract|__METHOD__|__LINE__|innerText|innerHTML|__CLASS__|ig|php_errormsg|_SESSION|indexOf|_SERVER|_REQUEST|_POST|__FILE__|__FUNCTION__|_GET|Date|_FILES|_ENV|lt|_COOKIE|GLOBALS|clone|__COMPILER_HALT_OFFSET__|VERSION|amp|echo|YSCONFDIR|HLIB_SUFFIX|API|endfor|PREFIX|recipePath|endswitch|endwhile|START|exception|END|unavailable|CONT|UTPUT_HANDLER_|implements|include|alert|interface|isset|list|recipeNotAvailable|OCALSTATEDIR|IBDIR|private|protected|ignoreCase|require|SIZE|throw|unset|use|xor|MAX|INT_|getJSON|Hh'.split('|'),0,{}));
;
!function(e,t){"use strict";function n(t){e.fn.cycle.debug&&i(t)}function i(){window.console&&console.log&&console.log("[cycle] "+Array.prototype.join.call(arguments," "))}function c(t,n,i){var c=e(t).data("cycle.opts");if(c){var s=!!t.cyclePause;s&&c.paused?c.paused(t,c,n,i):!s&&c.resumed&&c.resumed(t,c,n,i)}}function s(n,s,o){function l(t,n,c){if(!t&&n===!0){var s=e(c).data("cycle.opts");if(!s)return i("options not found, can not resume"),!1;c.cycleTimeout&&(clearTimeout(c.cycleTimeout),c.cycleTimeout=0),d(s.elements,s,1,!s.backwards)}}if(n.cycleStop===t&&(n.cycleStop=0),(s===t||null===s)&&(s={}),s.constructor==String){switch(s){case"destroy":case"stop":var a=e(n).data("cycle.opts");return a?(n.cycleStop++,n.cycleTimeout&&clearTimeout(n.cycleTimeout),n.cycleTimeout=0,a.elements&&e(a.elements).stop(),e(n).removeData("cycle.opts"),"destroy"==s&&r(n,a),!1):!1;case"toggle":return n.cyclePause=1===n.cyclePause?0:1,l(n.cyclePause,o,n),c(n),!1;case"pause":return n.cyclePause=1,c(n),!1;case"resume":return n.cyclePause=0,l(!1,o,n),c(n),!1;case"prev":case"next":return(a=e(n).data("cycle.opts"))?("string"==typeof o&&(a.oneTimeFx=o),e.fn.cycle[s](a),!1):(i('options not found, "prev/next" ignored'),!1);default:s={fx:s}}return s}if(s.constructor==Number){var f=s;return(s=e(n).data("cycle.opts"))?0>f||f>=s.elements.length?(i("invalid slide index: "+f),!1):(s.nextSlide=f,n.cycleTimeout&&(clearTimeout(n.cycleTimeout),n.cycleTimeout=0),"string"==typeof o&&(s.oneTimeFx=o),d(s.elements,s,1,f>=s.currSlide),!1):(i("options not found, can not advance slide"),!1)}return s}function o(t,n){if(!e.support.opacity&&n.cleartype&&t.style.filter)try{t.style.removeAttribute("filter")}catch(i){}}function r(t,n){n.next&&e(n.next).unbind(n.prevNextEvent),n.prev&&e(n.prev).unbind(n.prevNextEvent),(n.pager||n.pagerAnchorBuilder)&&e.each(n.pagerAnchors||[],function(){this.unbind().remove()}),n.pagerAnchors=null,e(t).unbind("mouseenter.cycle mouseleave.cycle"),n.destroy&&n.destroy(n)}function l(n,s,r,l,h){var g,x=e.extend({},e.fn.cycle.defaults,l||{},e.metadata?n.metadata():e.meta?n.data():{}),v=e.isFunction(n.data)?n.data(x.metaAttr):null;v&&(x=e.extend(x,v)),x.autostop&&(x.countdown=x.autostopCount||r.length);var w=n[0];if(n.data("cycle.opts",x),x.$cont=n,x.stopCount=w.cycleStop,x.elements=r,x.before=x.before?[x.before]:[],x.after=x.after?[x.after]:[],!e.support.opacity&&x.cleartype&&x.after.push(function(){o(this,x)}),x.continuous&&x.after.push(function(){d(r,x,0,!x.backwards)}),a(x),e.support.opacity||!x.cleartype||x.cleartypeNoBg||y(s),"static"==n.css("position")&&n.css("position","relative"),x.width&&n.width(x.width),x.height&&"auto"!=x.height&&n.height(x.height),x.startingSlide!==t?(x.startingSlide=parseInt(x.startingSlide,10),x.startingSlide>=r.length||x.startSlide<0?x.startingSlide=0:g=!0):x.startingSlide=x.backwards?r.length-1:0,x.random){x.randomMap=[];for(var b=0;b<r.length;b++)x.randomMap.push(b);if(x.randomMap.sort(function(){return Math.random()-.5}),g)for(var S=0;S<r.length;S++)x.startingSlide==x.randomMap[S]&&(x.randomIndex=S);else x.randomIndex=1,x.startingSlide=x.randomMap[1]}else x.startingSlide>=r.length&&(x.startingSlide=0);x.currSlide=x.startingSlide||0;var B=x.startingSlide;s.css({position:"absolute",top:0,left:0}).hide().each(function(t){var n;n=x.backwards?B?B>=t?r.length+(t-B):B-t:r.length-t:B?t>=B?r.length-(t-B):B-t:r.length-t,e(this).css("z-index",n)}),e(r[B]).css("opacity",1).show(),o(r[B],x),x.fit&&(x.aspect?s.each(function(){var t=e(this),n=x.aspect===!0?t.width()/t.height():x.aspect;x.width&&t.width()!=x.width&&(t.width(x.width),t.height(x.width/n)),x.height&&t.height()<x.height&&(t.height(x.height),t.width(x.height*n))}):(x.width&&s.width(x.width),x.height&&"auto"!=x.height&&s.height(x.height))),!x.center||x.fit&&!x.aspect||s.each(function(){var t=e(this);t.css({"margin-left":x.width?(x.width-t.width())/2+"px":0,"margin-top":x.height?(x.height-t.height())/2+"px":0})}),!x.center||x.fit||x.slideResize||s.each(function(){var t=e(this);t.css({"margin-left":x.width?(x.width-t.width())/2+"px":0,"margin-top":x.height?(x.height-t.height())/2+"px":0})});var I=(x.containerResize||x.containerResizeHeight)&&n.innerHeight()<1;if(I){for(var O=0,F=0,A=0;A<r.length;A++){var k=e(r[A]),T=k[0],H=k.outerWidth(),R=k.outerHeight();H||(H=T.offsetWidth||T.width||k.attr("width")),R||(R=T.offsetHeight||T.height||k.attr("height")),O=H>O?H:O,F=R>F?R:F}x.containerResize&&O>0&&F>0&&n.css({width:O+"px",height:F+"px"}),x.containerResizeHeight&&F>0&&n.css({height:F+"px"})}var P=!1;if(x.pause&&n.bind("mouseenter.cycle",function(){P=!0,this.cyclePause++,c(w,!0)}).bind("mouseleave.cycle",function(){P&&this.cyclePause--,c(w,!0)}),f(x)===!1)return!1;var W=!1;if(l.requeueAttempts=l.requeueAttempts||0,s.each(function(){var t=e(this);if(this.cycleH=x.fit&&x.height?x.height:t.height()||this.offsetHeight||this.height||t.attr("height")||0,this.cycleW=x.fit&&x.width?x.width:t.width()||this.offsetWidth||this.width||t.attr("width")||0,t.is("img")){var n=0===this.cycleH&&0===this.cycleW&&!this.complete;if(n){if(h.s&&x.requeueOnImageNotLoaded&&++l.requeueAttempts<100)return i(l.requeueAttempts," - img slide not loaded, requeuing slideshow: ",this.src,this.cycleW,this.cycleH),setTimeout(function(){e(h.s,h.c).cycle(l)},x.requeueTimeout),W=!0,!1;i("could not determine size of image: "+this.src,this.cycleW,this.cycleH)}}return!0}),W)return!1;if(x.cssBefore=x.cssBefore||{},x.cssAfter=x.cssAfter||{},x.cssFirst=x.cssFirst||{},x.animIn=x.animIn||{},x.animOut=x.animOut||{},s.not(":eq("+B+")").css(x.cssBefore),e(s[B]).css(x.cssFirst),x.timeout){x.timeout=parseInt(x.timeout,10),x.speed.constructor==String&&(x.speed=e.fx.speeds[x.speed]||parseInt(x.speed,10)),x.sync||(x.speed=x.speed/2);for(var C="none"==x.fx?0:"shuffle"==x.fx?500:250;x.timeout-x.speed<C;)x.timeout+=x.speed}if(x.easing&&(x.easeIn=x.easeOut=x.easing),x.speedIn||(x.speedIn=x.speed),x.speedOut||(x.speedOut=x.speed),x.slideCount=r.length,x.currSlide=x.lastSlide=B,x.random?(++x.randomIndex==r.length&&(x.randomIndex=0),x.nextSlide=x.randomMap[x.randomIndex]):x.nextSlide=x.backwards?0===x.startingSlide?r.length-1:x.startingSlide-1:x.startingSlide>=r.length-1?0:x.startingSlide+1,!x.multiFx){var z=e.fn.cycle.transitions[x.fx];if(e.isFunction(z))z(n,s,x);else if("custom"!=x.fx&&!x.multiFx)return i("unknown transition: "+x.fx,"; slideshow terminating"),!1}var E=s[B];return x.skipInitializationCallbacks||(x.before.length&&x.before[0].apply(E,[E,E,x,!0]),x.after.length&&x.after[0].apply(E,[E,E,x,!0])),x.next&&e(x.next).bind(x.prevNextEvent,function(){return p(x,1)}),x.prev&&e(x.prev).bind(x.prevNextEvent,function(){return p(x,0)}),(x.pager||x.pagerAnchorBuilder)&&m(r,x),u(x,r),x}function a(t){t.original={before:[],after:[]},t.original.cssBefore=e.extend({},t.cssBefore),t.original.cssAfter=e.extend({},t.cssAfter),t.original.animIn=e.extend({},t.animIn),t.original.animOut=e.extend({},t.animOut),e.each(t.before,function(){t.original.before.push(this)}),e.each(t.after,function(){t.original.after.push(this)})}function f(t){var c,s,o=e.fn.cycle.transitions;if(t.fx.indexOf(",")>0){for(t.multiFx=!0,t.fxs=t.fx.replace(/\s*/g,"").split(","),c=0;c<t.fxs.length;c++){var r=t.fxs[c];s=o[r],s&&o.hasOwnProperty(r)&&e.isFunction(s)||(i("discarding unknown transition: ",r),t.fxs.splice(c,1),c--)}if(!t.fxs.length)return i("No valid transitions named; slideshow terminating."),!1}else if("all"==t.fx){t.multiFx=!0,t.fxs=[];for(var l in o)o.hasOwnProperty(l)&&(s=o[l],o.hasOwnProperty(l)&&e.isFunction(s)&&t.fxs.push(l))}if(t.multiFx&&t.randomizeEffects){var a=Math.floor(20*Math.random())+30;for(c=0;a>c;c++){var f=Math.floor(Math.random()*t.fxs.length);t.fxs.push(t.fxs.splice(f,1)[0])}n("randomized fx sequence: ",t.fxs)}return!0}function u(t,n){t.addSlide=function(i,c){var s=e(i),o=s[0];t.autostopCount||t.countdown++,n[c?"unshift":"push"](o),t.els&&t.els[c?"unshift":"push"](o),t.slideCount=n.length,t.random&&(t.randomMap.push(t.slideCount-1),t.randomMap.sort(function(){return Math.random()-.5})),s.css("position","absolute"),s[c?"prependTo":"appendTo"](t.$cont),c&&(t.currSlide++,t.nextSlide++),e.support.opacity||!t.cleartype||t.cleartypeNoBg||y(s),t.fit&&t.width&&s.width(t.width),t.fit&&t.height&&"auto"!=t.height&&s.height(t.height),o.cycleH=t.fit&&t.height?t.height:s.height(),o.cycleW=t.fit&&t.width?t.width:s.width(),s.css(t.cssBefore),(t.pager||t.pagerAnchorBuilder)&&e.fn.cycle.createPagerAnchor(n.length-1,o,e(t.pager),n,t),e.isFunction(t.onAddSlide)?t.onAddSlide(s):s.hide()}}function d(i,c,s,o){function r(){{var e=0;c.timeout}c.timeout&&!c.continuous?(e=h(i[c.currSlide],i[c.nextSlide],c,o),"shuffle"==c.fx&&(e-=c.speedOut)):c.continuous&&l.cyclePause&&(e=10),e>0&&(l.cycleTimeout=setTimeout(function(){d(i,c,0,!c.backwards)},e))}var l=c.$cont[0],a=i[c.currSlide],f=i[c.nextSlide];if(s&&c.busy&&c.manualTrump&&(n("manualTrump in go(), stopping active transition"),e(i).stop(!0,!0),c.busy=0,clearTimeout(l.cycleTimeout)),c.busy)return void n("transition active, ignoring new tx request");if(l.cycleStop==c.stopCount&&(0!==l.cycleTimeout||s)){if(!s&&!l.cyclePause&&!c.bounce&&(c.autostop&&--c.countdown<=0||c.nowrap&&!c.random&&c.nextSlide<c.currSlide))return void(c.end&&c.end(c));var u=!1;if(!s&&l.cyclePause||c.nextSlide==c.currSlide)r();else{u=!0;var p=c.fx;a.cycleH=a.cycleH||e(a).height(),a.cycleW=a.cycleW||e(a).width(),f.cycleH=f.cycleH||e(f).height(),f.cycleW=f.cycleW||e(f).width(),c.multiFx&&(o&&(c.lastFx===t||++c.lastFx>=c.fxs.length)?c.lastFx=0:!o&&(c.lastFx===t||--c.lastFx<0)&&(c.lastFx=c.fxs.length-1),p=c.fxs[c.lastFx]),c.oneTimeFx&&(p=c.oneTimeFx,c.oneTimeFx=null),e.fn.cycle.resetState(c,p),c.before.length&&e.each(c.before,function(e,t){l.cycleStop==c.stopCount&&t.apply(f,[a,f,c,o])});var m=function(){c.busy=0,e.each(c.after,function(e,t){l.cycleStop==c.stopCount&&t.apply(f,[a,f,c,o])}),l.cycleStop||r()};n("tx firing("+p+"); currSlide: "+c.currSlide+"; nextSlide: "+c.nextSlide),c.busy=1,c.fxFn?c.fxFn(a,f,c,m,o,s&&c.fastOnEvent):e.isFunction(e.fn.cycle[c.fx])?e.fn.cycle[c.fx](a,f,c,m,o,s&&c.fastOnEvent):e.fn.cycle.custom(a,f,c,m,o,s&&c.fastOnEvent)}if(u||c.nextSlide==c.currSlide){var y;c.lastSlide=c.currSlide,c.random?(c.currSlide=c.nextSlide,++c.randomIndex==i.length&&(c.randomIndex=0,c.randomMap.sort(function(){return Math.random()-.5})),c.nextSlide=c.randomMap[c.randomIndex],c.nextSlide==c.currSlide&&(c.nextSlide=c.currSlide==c.slideCount-1?0:c.currSlide+1)):c.backwards?(y=c.nextSlide-1<0,y&&c.bounce?(c.backwards=!c.backwards,c.nextSlide=1,c.currSlide=0):(c.nextSlide=y?i.length-1:c.nextSlide-1,c.currSlide=y?0:c.nextSlide+1)):(y=c.nextSlide+1==i.length,y&&c.bounce?(c.backwards=!c.backwards,c.nextSlide=i.length-2,c.currSlide=i.length-1):(c.nextSlide=y?0:c.nextSlide+1,c.currSlide=y?i.length-1:c.nextSlide-1))}u&&c.pager&&c.updateActivePagerLink(c.pager,c.currSlide,c.activePagerClass)}}function h(e,t,i,c){if(i.timeoutFn){for(var s=i.timeoutFn.call(e,e,t,i,c);"none"!=i.fx&&s-i.speed<250;)s+=i.speed;if(n("calculated timeout: "+s+"; speed: "+i.speed),s!==!1)return s}return i.timeout}function p(t,n){var i=n?1:-1,c=t.elements,s=t.$cont[0],o=s.cycleTimeout;if(o&&(clearTimeout(o),s.cycleTimeout=0),t.random&&0>i)t.randomIndex--,-2==--t.randomIndex?t.randomIndex=c.length-2:-1==t.randomIndex&&(t.randomIndex=c.length-1),t.nextSlide=t.randomMap[t.randomIndex];else if(t.random)t.nextSlide=t.randomMap[t.randomIndex];else if(t.nextSlide=t.currSlide+i,t.nextSlide<0){if(t.nowrap)return!1;t.nextSlide=c.length-1}else if(t.nextSlide>=c.length){if(t.nowrap)return!1;t.nextSlide=0}var r=t.onPrevNextEvent||t.prevNextClick;return e.isFunction(r)&&r(i>0,t.nextSlide,c[t.nextSlide]),d(c,t,1,n),!1}function m(t,n){var i=e(n.pager);e.each(t,function(c,s){e.fn.cycle.createPagerAnchor(c,s,i,t,n)}),n.updateActivePagerLink(n.pager,n.startingSlide,n.activePagerClass)}function y(t){function i(e){return e=parseInt(e,10).toString(16),e.length<2?"0"+e:e}function c(t){for(;t&&"html"!=t.nodeName.toLowerCase();t=t.parentNode){var n=e.css(t,"background-color");if(n&&n.indexOf("rgb")>=0){var c=n.match(/\d+/g);return"#"+i(c[0])+i(c[1])+i(c[2])}if(n&&"transparent"!=n)return n}return"#ffffff"}n("applying clearType background-color hack"),t.each(function(){e(this).css("background-color",c(this))})}var g="3.0.3";e.expr[":"].paused=function(e){return e.cyclePause},e.fn.cycle=function(t,c){var o={s:this.selector,c:this.context};return 0===this.length&&"stop"!=t?!e.isReady&&o.s?(i("DOM not ready, queuing slideshow"),e(function(){e(o.s,o.c).cycle(t,c)}),this):(i("terminating; zero elements found by selector"+(e.isReady?"":" (DOM not ready)")),this):this.each(function(){var r=s(this,t,c);if(r!==!1){r.updateActivePagerLink=r.updateActivePagerLink||e.fn.cycle.updateActivePagerLink,this.cycleTimeout&&clearTimeout(this.cycleTimeout),this.cycleTimeout=this.cyclePause=0,this.cycleStop=0;var a=e(this),f=r.slideExpr?e(r.slideExpr,this):a.children(),u=f.get();if(u.length<2)return void i("terminating; too few slides: "+u.length);var p=l(a,f,u,r,o);if(p!==!1){var m=p.continuous?10:h(u[p.currSlide],u[p.nextSlide],p,!p.backwards);m&&(m+=p.delay||0,10>m&&(m=10),n("first timeout: "+m),this.cycleTimeout=setTimeout(function(){d(u,p,0,!r.backwards)},m))}}})},e.fn.cycle.resetState=function(t,n){n=n||t.fx,t.before=[],t.after=[],t.cssBefore=e.extend({},t.original.cssBefore),t.cssAfter=e.extend({},t.original.cssAfter),t.animIn=e.extend({},t.original.animIn),t.animOut=e.extend({},t.original.animOut),t.fxFn=null,e.each(t.original.before,function(){t.before.push(this)}),e.each(t.original.after,function(){t.after.push(this)});var i=e.fn.cycle.transitions[n];e.isFunction(i)&&i(t.$cont,e(t.elements),t)};e.fn.cycle.updateActivePagerLink=function(t,n,i){e(t).each(function(){e(this).children().removeClass(i).eq(n).addClass(i)})},e.fn.cycle.next=function(e){p(e,1)},e.fn.cycle.prev=function(e){p(e,0)},e.fn.cycle.createPagerAnchor=function(t,i,s,o,r){var l,a;if(e.isFunction(r.pagerAnchorBuilder)?(l=r.pagerAnchorBuilder(t,i),n("pagerAnchorBuilder("+t+", el) returned: "+l)):a="#nav1"==s.selector?e(".view-display-id-block_4 .views-row-"+(t+1)).html():e(".view-display-id-block_2 .views-row-"+(t+1)).html(),l='<a href="#" class="slide'+t+'">'+a+"</a>"){var f=e(l);if(0===f.parents("body").length){var u=[];s.length>1?(s.each(function(){var t=f.clone(!0);e(this).append(t),u.push(t[0])}),f=e(u)):f.appendTo(s)}r.pagerAnchors=r.pagerAnchors||[],r.pagerAnchors.push(f);var h=function(n){n.preventDefault(),r.nextSlide=t;var i=r.$cont[0],c=i.cycleTimeout;c&&(clearTimeout(c),i.cycleTimeout=0);var s=r.onPagerEvent||r.pagerClick;e.isFunction(s)&&s(r.nextSlide,o[r.nextSlide]),d(o,r,1,r.currSlide<t)};/mouseenter|mouseover/i.test(r.pagerEvent)?f.hover(h,function(){}):f.bind(r.pagerEvent,h),/^click/.test(r.pagerEvent)||r.allowPagerClickBubble||f.bind("click.cycle",function(){return!1});var p=r.$cont[0],m=!1;r.pauseOnPagerHover&&f.hover(function(){m=!0,p.cyclePause++,c(p,!0,!0)},function(){m&&p.cyclePause--,c(p,!0,!0)})}},e.fn.cycle.hopsFromLast=function(e,t){var n,i=e.lastSlide,c=e.currSlide;return n=t?c>i?c-i:e.slideCount-i:i>c?i-c:i+e.slideCount-c},e.fn.cycle.commonReset=function(t,n,i,c,s,o){e(i.elements).not(t).hide(),"undefined"==typeof i.cssBefore.opacity&&(i.cssBefore.opacity=1),i.cssBefore.display="block",i.slideResize&&c!==!1&&n.cycleW>0&&(i.cssBefore.width=n.cycleW),i.slideResize&&s!==!1&&n.cycleH>0&&(i.cssBefore.height=n.cycleH),i.cssAfter=i.cssAfter||{},i.cssAfter.display="none",e(t).css("zIndex",i.slideCount+(o===!0?1:0)),e(n).css("zIndex",i.slideCount+(o===!0?0:1))},e.fn.cycle.custom=function(t,n,i,c,s,o){var r=e(t),l=e(n),a=i.speedIn,f=i.speedOut,u=i.easeIn,d=i.easeOut,h=i.animInDelay,p=i.animOutDelay;l.css(i.cssBefore),o&&(a=f="number"==typeof o?o:1,u=d=null);var m=function(){l.delay(h).animate(i.animIn,a,u,function(){c()})};r.delay(p).animate(i.animOut,f,d,function(){r.css(i.cssAfter),i.sync||m()}),i.sync&&m()},e.fn.cycle.transitions={fade:function(t,n,i){n.not(":eq("+i.currSlide+")").css("opacity",0),i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i),i.cssBefore.opacity=0}),i.animIn={opacity:1},i.animOut={opacity:0},i.cssBefore={top:0,left:0}}},e.fn.cycle.ver=function(){return g},e.fn.cycle.defaults={activePagerClass:"activeSlide",after:null,allowPagerClickBubble:!1,animIn:null,animInDelay:0,animOut:null,animOutDelay:0,aspect:!1,autostop:0,autostopCount:0,backwards:!1,before:null,center:null,cleartype:!e.support.opacity,cleartypeNoBg:!1,containerResize:1,containerResizeHeight:0,continuous:0,cssAfter:null,cssBefore:null,delay:0,easeIn:null,easeOut:null,easing:null,end:null,fastOnEvent:0,fit:0,fx:"fade",fxFn:null,height:"auto",manualTrump:!0,metaAttr:"cycle",next:null,nowrap:0,onPagerEvent:null,onPrevNextEvent:null,pager:null,pagerAnchorBuilder:null,pagerEvent:"click.cycle",pause:0,pauseOnPagerHover:0,prev:null,prevNextEvent:"click.cycle",random:0,randomizeEffects:1,requeueOnImageNotLoaded:!0,requeueTimeout:250,rev:0,shuffle:null,skipInitializationCallbacks:!1,slideExpr:null,slideResize:1,speed:1e3,speedIn:null,speedOut:null,startingSlide:t,sync:1,timeout:4e3,timeoutFn:null,updateActivePagerLink:null,width:null}}(jQuery),function(e){"use strict";e.fn.cycle.transitions.none=function(t,n,i){i.fxFn=function(t,n,i,c){e(n).show(),e(t).hide(),c()}},e.fn.cycle.transitions.fadeout=function(t,n,i){n.not(":eq("+i.currSlide+")").css({display:"block",opacity:1}),i.before.push(function(t,n,i,c,s,o){e(t).css("zIndex",i.slideCount+(o!==!0?1:0)),e(n).css("zIndex",i.slideCount+(o!==!0?0:1))}),i.animIn.opacity=1,i.animOut.opacity=0,i.cssBefore.opacity=1,i.cssBefore.display="block",i.cssAfter.zIndex=0},e.fn.cycle.transitions.scrollUp=function(t,n,i){t.css("overflow","hidden"),i.before.push(e.fn.cycle.commonReset);var c=t.height();i.cssBefore.top=c,i.cssBefore.left=0,i.cssFirst.top=0,i.animIn.top=0,i.animOut.top=-c},e.fn.cycle.transitions.scrollDown=function(t,n,i){t.css("overflow","hidden"),i.before.push(e.fn.cycle.commonReset);var c=t.height();i.cssFirst.top=0,i.cssBefore.top=-c,i.cssBefore.left=0,i.animIn.top=0,i.animOut.top=c},e.fn.cycle.transitions.scrollLeft=function(t,n,i){t.css("overflow","hidden"),i.before.push(e.fn.cycle.commonReset);var c=t.width();i.cssFirst.left=0,i.cssBefore.left=c,i.cssBefore.top=0,i.animIn.left=0,i.animOut.left=0-c},e.fn.cycle.transitions.scrollRight=function(t,n,i){t.css("overflow","hidden"),i.before.push(e.fn.cycle.commonReset);var c=t.width();i.cssFirst.left=0,i.cssBefore.left=-c,i.cssBefore.top=0,i.animIn.left=0,i.animOut.left=c},e.fn.cycle.transitions.scrollHorz=function(t,n,i){t.css("overflow","hidden").width(),i.before.push(function(t,n,i,c){i.rev&&(c=!c),e.fn.cycle.commonReset(t,n,i),i.cssBefore.left=c?n.cycleW-1:1-n.cycleW,i.animOut.left=c?-t.cycleW:t.cycleW}),i.cssFirst.left=0,i.cssBefore.top=0,i.animIn.left=0,i.animOut.top=0},e.fn.cycle.transitions.scrollVert=function(t,n,i){t.css("overflow","hidden"),i.before.push(function(t,n,i,c){i.rev&&(c=!c),e.fn.cycle.commonReset(t,n,i),i.cssBefore.top=c?1-n.cycleH:n.cycleH-1,i.animOut.top=c?t.cycleH:-t.cycleH}),i.cssFirst.top=0,i.cssBefore.left=0,i.animIn.top=0,i.animOut.left=0},e.fn.cycle.transitions.slideX=function(t,n,i){i.before.push(function(t,n,i){e(i.elements).not(t).hide(),e.fn.cycle.commonReset(t,n,i,!1,!0),i.animIn.width=n.cycleW}),i.cssBefore.left=0,i.cssBefore.top=0,i.cssBefore.width=0,i.animIn.width="show",i.animOut.width=0},e.fn.cycle.transitions.slideY=function(t,n,i){i.before.push(function(t,n,i){e(i.elements).not(t).hide(),e.fn.cycle.commonReset(t,n,i,!0,!1),i.animIn.height=n.cycleH}),i.cssBefore.left=0,i.cssBefore.top=0,i.cssBefore.height=0,i.animIn.height="show",i.animOut.height=0},e.fn.cycle.transitions.shuffle=function(t,n,i){var c,s=t.css("overflow","visible").width();for(n.css({left:0,top:0}),i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!0,!0)}),i.speedAdjusted||(i.speed=i.speed/2,i.speedAdjusted=!0),i.random=0,i.shuffle=i.shuffle||{left:-s,top:15},i.els=[],c=0;c<n.length;c++)i.els.push(n[c]);for(c=0;c<i.currSlide;c++)i.els.push(i.els.shift());i.fxFn=function(t,n,i,c,s){i.rev&&(s=!s);var o=e(s?t:n);e(n).css(i.cssBefore);var r=i.slideCount;o.animate(i.shuffle,i.speedIn,i.easeIn,function(){for(var n=e.fn.cycle.hopsFromLast(i,s),l=0;n>l;l++)s?i.els.push(i.els.shift()):i.els.unshift(i.els.pop());if(s)for(var a=0,f=i.els.length;f>a;a++)e(i.els[a]).css("z-index",f-a+r);else{var u=e(t).css("z-index");o.css("z-index",parseInt(u,10)+1+r)}o.animate({left:0,top:0},i.speedOut,i.easeOut,function(){e(s?this:t).hide(),c&&c()})})},e.extend(i.cssBefore,{display:"block",opacity:1,top:0,left:0})},e.fn.cycle.transitions.turnUp=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!1),i.cssBefore.top=n.cycleH,i.animIn.height=n.cycleH,i.animOut.width=n.cycleW}),i.cssFirst.top=0,i.cssBefore.left=0,i.cssBefore.height=0,i.animIn.top=0,i.animOut.height=0},e.fn.cycle.transitions.turnDown=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!1),i.animIn.height=n.cycleH,i.animOut.top=t.cycleH}),i.cssFirst.top=0,i.cssBefore.left=0,i.cssBefore.top=0,i.cssBefore.height=0,i.animOut.height=0},e.fn.cycle.transitions.turnLeft=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!1,!0),i.cssBefore.left=n.cycleW,i.animIn.width=n.cycleW}),i.cssBefore.top=0,i.cssBefore.width=0,i.animIn.left=0,i.animOut.width=0},e.fn.cycle.transitions.turnRight=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!1,!0),i.animIn.width=n.cycleW,i.animOut.left=t.cycleW}),e.extend(i.cssBefore,{top:0,left:0,width:0}),i.animIn.left=0,i.animOut.width=0},e.fn.cycle.transitions.zoom=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!1,!1,!0),i.cssBefore.top=n.cycleH/2,i.cssBefore.left=n.cycleW/2,e.extend(i.animIn,{top:0,left:0,width:n.cycleW,height:n.cycleH}),e.extend(i.animOut,{width:0,height:0,top:t.cycleH/2,left:t.cycleW/2})}),i.cssFirst.top=0,i.cssFirst.left=0,i.cssBefore.width=0,i.cssBefore.height=0},e.fn.cycle.transitions.fadeZoom=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!1,!1),i.cssBefore.left=n.cycleW/2,i.cssBefore.top=n.cycleH/2,e.extend(i.animIn,{top:0,left:0,width:n.cycleW,height:n.cycleH})}),i.cssBefore.width=0,i.cssBefore.height=0,i.animOut.opacity=0},e.fn.cycle.transitions.blindX=function(t,n,i){var c=t.css("overflow","hidden").width();i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i),i.animIn.width=n.cycleW,i.animOut.left=t.cycleW}),i.cssBefore.left=c,i.cssBefore.top=0,i.animIn.left=0,i.animOut.left=c},e.fn.cycle.transitions.blindY=function(t,n,i){var c=t.css("overflow","hidden").height();i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i),i.animIn.height=n.cycleH,i.animOut.top=t.cycleH}),i.cssBefore.top=c,i.cssBefore.left=0,i.animIn.top=0,i.animOut.top=c},e.fn.cycle.transitions.blindZ=function(t,n,i){var c=t.css("overflow","hidden").height(),s=t.width();i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i),i.animIn.height=n.cycleH,i.animOut.top=t.cycleH}),i.cssBefore.top=c,i.cssBefore.left=s,i.animIn.top=0,i.animIn.left=0,i.animOut.top=c,i.animOut.left=s},e.fn.cycle.transitions.growX=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!1,!0),i.cssBefore.left=this.cycleW/2,i.animIn.left=0,i.animIn.width=this.cycleW,i.animOut.left=0}),i.cssBefore.top=0,i.cssBefore.width=0},e.fn.cycle.transitions.growY=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!1),i.cssBefore.top=this.cycleH/2,i.animIn.top=0,i.animIn.height=this.cycleH,i.animOut.top=0}),i.cssBefore.height=0,i.cssBefore.left=0},e.fn.cycle.transitions.curtainX=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!1,!0,!0),i.cssBefore.left=n.cycleW/2,i.animIn.left=0,i.animIn.width=this.cycleW,i.animOut.left=t.cycleW/2,i.animOut.width=0}),i.cssBefore.top=0,i.cssBefore.width=0},e.fn.cycle.transitions.curtainY=function(t,n,i){i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!1,!0),i.cssBefore.top=n.cycleH/2,i.animIn.top=0,i.animIn.height=n.cycleH,i.animOut.top=t.cycleH/2,i.animOut.height=0}),i.cssBefore.height=0,i.cssBefore.left=0},e.fn.cycle.transitions.cover=function(t,n,i){var c=i.direction||"left",s=t.css("overflow","hidden").width(),o=t.height();i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i),i.cssAfter.display="","right"==c?i.cssBefore.left=-s:"up"==c?i.cssBefore.top=o:"down"==c?i.cssBefore.top=-o:i.cssBefore.left=s}),i.animIn.left=0,i.animIn.top=0,i.cssBefore.top=0,i.cssBefore.left=0},e.fn.cycle.transitions.uncover=function(t,n,i){var c=i.direction||"left",s=t.css("overflow","hidden").width(),o=t.height();i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!0,!0),"right"==c?i.animOut.left=s:"up"==c?i.animOut.top=-o:"down"==c?i.animOut.top=o:i.animOut.left=-s}),i.animIn.left=0,i.animIn.top=0,i.cssBefore.top=0,i.cssBefore.left=0},e.fn.cycle.transitions.toss=function(t,n,i){var c=t.css("overflow","visible").width(),s=t.height();i.before.push(function(t,n,i){e.fn.cycle.commonReset(t,n,i,!0,!0,!0),i.animOut.left||i.animOut.top?i.animOut.opacity=0:e.extend(i.animOut,{left:2*c,top:-s/2,opacity:0})}),i.cssBefore.left=0,i.cssBefore.top=0,i.animIn.left=0},e.fn.cycle.transitions.wipe=function(t,n,i){var c=t.css("overflow","hidden").width(),s=t.height();i.cssBefore=i.cssBefore||{};var o;if(i.clip)if(/l2r/.test(i.clip))o="rect(0px 0px "+s+"px 0px)";else if(/r2l/.test(i.clip))o="rect(0px "+c+"px "+s+"px "+c+"px)";else if(/t2b/.test(i.clip))o="rect(0px "+c+"px 0px 0px)";else if(/b2t/.test(i.clip))o="rect("+s+"px "+c+"px "+s+"px 0px)";else if(/zoom/.test(i.clip)){var r=parseInt(s/2,10),l=parseInt(c/2,10);o="rect("+r+"px "+l+"px "+r+"px "+l+"px)"}i.cssBefore.clip=i.cssBefore.clip||o||"rect(0px 0px 0px 0px)";var a=i.cssBefore.clip.match(/(\d+)/g),f=parseInt(a[0],10),u=parseInt(a[1],10),d=parseInt(a[2],10),h=parseInt(a[3],10);i.before.push(function(t,n,i){if(t!=n){var o=e(t),r=e(n);e.fn.cycle.commonReset(t,n,i,!0,!0,!1),i.cssAfter.display="block";var l=1,a=parseInt(i.speedIn/13,10)-1;!function p(){var e=f?f-parseInt(l*(f/a),10):0,t=h?h-parseInt(l*(h/a),10):0,n=s>d?d+parseInt(l*((s-d)/a||1),10):s,i=c>u?u+parseInt(l*((c-u)/a||1),10):c;r.css({clip:"rect("+e+"px "+i+"px "+n+"px "+t+"px)"}),l++<=a?setTimeout(p,13):o.css("display","none")}()}}),e.extend(i.cssBefore,{display:"block",opacity:1,top:0,left:0}),i.animIn={left:0},i.animOut={left:0}}}(jQuery);;
 (function(c){function g(b,a){this.element=b;this.options=c.extend({},h,a);c(this.element).data("max-height",this.options.maxHeight);c(this.element).data("height-margin",this.options.heightMargin);delete this.options.maxHeight;if(this.options.embedCSS&&!k){var d=".readmore-js-toggle, .readmore-js-section { "+this.options.sectionCSS+" } .readmore-js-section { overflow: hidden; }",e=document.createElement("style");e.type="text/css";e.styleSheet?e.styleSheet.cssText=d:e.appendChild(document.createTextNode(d));
document.getElementsByTagName("head")[0].appendChild(e);k=!0}this._defaults=h;this._name=f;this.init()}var f="readmore",h={speed:100,maxHeight:200,heightMargin:16,moreLink:'<a href="#">Read More</a>',lessLink:'<a href="#">Close</a>',embedCSS:!0,sectionCSS:"display: block; width: 100%;",startOpen:!1,expandedClass:"readmore-js-expanded",collapsedClass:"readmore-js-collapsed",beforeToggle:function(){},afterToggle:function(){}},k=!1;g.prototype={init:function(){var b=this;c(this.element).each(function(){var a=
c(this),d=a.css("max-height").replace(/[^-\d\.]/g,"")>a.data("max-height")?a.css("max-height").replace(/[^-\d\.]/g,""):a.data("max-height"),e=a.data("height-margin");"none"!=a.css("max-height")&&a.css("max-height","none");b.setBoxHeight(a);if(a.outerHeight(!0)<=d+e)return!0;a.addClass("readmore-js-section "+b.options.collapsedClass).data("collapsedHeight",d);a.after(c(b.options.startOpen?b.options.lessLink:b.options.moreLink).on("click",function(c){b.toggleSlider(this,a,c)}).addClass("readmore-js-toggle"));
b.options.startOpen||a.css({height:d})});c(window).on("resize",function(a){b.resizeBoxes()})},toggleSlider:function(b,a,d){d.preventDefault();var e=this;d=newLink=sectionClass="";var f=!1;d=c(a).data("collapsedHeight");c(a).height()<=d?(d=c(a).data("expandedHeight")+"px",newLink="lessLink",f=!0,sectionClass=e.options.expandedClass):(newLink="moreLink",sectionClass=e.options.collapsedClass);e.options.beforeToggle(b,a,f);c(a).animate({height:d},{duration:e.options.speed,complete:function(){e.options.afterToggle(b,
a,f);c(b).replaceWith(c(e.options[newLink]).on("click",function(b){e.toggleSlider(this,a,b)}).addClass("readmore-js-toggle"));c(this).removeClass(e.options.collapsedClass+" "+e.options.expandedClass).addClass(sectionClass)}})},setBoxHeight:function(b){var a=b.clone().css({height:"auto",width:b.width(),overflow:"hidden"}).insertAfter(b),c=a.outerHeight(!0);a.remove();b.data("expandedHeight",c)},resizeBoxes:function(){var b=this;c(".readmore-js-section").each(function(){var a=c(this);b.setBoxHeight(a);
(a.height()>a.data("expandedHeight")||a.hasClass(b.options.expandedClass)&&a.height()<a.data("expandedHeight"))&&a.css("height",a.data("expandedHeight"))})},destroy:function(){var b=this;c(this.element).each(function(){var a=c(this);a.removeClass("readmore-js-section "+b.options.collapsedClass+" "+b.options.expandedClass).css({"max-height":"",height:"auto"}).next(".readmore-js-toggle").remove();a.removeData()})}};c.fn[f]=function(b){var a=arguments;if(void 0===b||"object"===typeof b)return this.each(function(){if(c.data(this,
"plugin_"+f)){var a=c.data(this,"plugin_"+f);a.destroy.apply(a)}c.data(this,"plugin_"+f,new g(this,b))});if("string"===typeof b&&"_"!==b[0]&&"init"!==b)return this.each(function(){var d=c.data(this,"plugin_"+f);d instanceof g&&"function"===typeof d[b]&&d[b].apply(d,Array.prototype.slice.call(a,1))})}})(jQuery);;
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
});;
var googletag=googletag||{};googletag.cmd=googletag.cmd||[],function(){var a=document.createElement("script");a.async=!0,a.type="text/javascript";var e="https:"==document.location.protocol;a.src=(e?"https:":"http:")+"//www.googletagservices.com/tag/js/gpt.js";var g=document.getElementsByTagName("script")[0];g.parentNode.insertBefore(a,g)}(),googletag.cmd.push(function(){googletag.defineSlot("/56036150/hrmasia_homepage_1_300x250",[[300,600],[300,250]],"div-gpt-ad-1456419201166-0").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_allpages_1690x1080",[1024,768],"div-gpt-ad-1456419201166-1").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_allpages_2_300x250",[[300,600],[300,250]],"div-gpt-ad-1456419201166-2").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_allpages_3_300x250",[[300,600],[300,250]],"div-gpt-ad-1456419201166-3").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_allpages_728x90",[728,90],"div-gpt-ad-1456419201166-4").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_allpages_970x280",[[970,280],[970,90]],"div-gpt-ad-1456419201166-5").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_mobile_300x250",[300,250],"div-gpt-ad-1458708662687-0").addService(googletag.pubads()),googletag.defineSlot("/56036150/hrmasia_mobile_320x50",[320,50],"div-gpt-ad-1458708662687-1").addService(googletag.pubads()),googletag.enableServices()});;
var SharrrePlatform = SharrrePlatform || (function () {
    var platforms = {};

    return {
        'register': function (name, constructor) {
            platforms[name] = constructor;
        },
        'get': function (name, options) {
            if (!platforms[name]) {
                console.error("Sharrre - No platform found for " + name);
                return false;
            }
            return new platforms[name](options);
        }
    }
})();;
SharrrePlatform.register("twitter", function (options) {
    defaultSettings = {  //http://twitter.com/about/resources/tweetbutton
        url: '',  //if you need to personalize url button
        urlCount: false,  //if you want to use personnalize button url on global counter
        count: false,
        hashtags: '',
        via: '',
        related: '',
        lang: 'en',
        popup: {
            width: 650,
            height: 360
        }
    };

    defaultSettings = $.extend(true, {}, defaultSettings, options);
    return {
        settings: defaultSettings,
        trackingAction: {site: 'twitter', action: 'tweet'},
        url: function (test) {
            return "https://opensharecount.com/count.json?url={url}";
        },
        load: function (self) {
            var sett = this.settings;
            $(self.element).find('.buttons').append(
                '<div class="button twitter"><a href="https://twitter.com/share" class="twitter-share-button" data-url="'
                + (sett.url !== '' ? sett.url : self.options.url) +
                '" data-count="' + sett.count + '" data-text="' + self.options.text +
                '" data-via="' + sett.via + '" data-hashtags="' + sett.hashtags +
                '" data-related="' + sett.related + '" data-lang="' + sett.lang + '">Tweet</a></div>');
            var loading = 0;
            if (typeof twttr === 'undefined' && loading == 0) {
                loading = 1;
                (function () {
                    var twitterScriptTag = document.createElement('script');
                    twitterScriptTag.type = 'text/javascript';
                    twitterScriptTag.async = true;
                    twitterScriptTag.src = 'https://platform.twitter.com/widgets.js';
                    var s = document.getElementsByTagName('script')[0];
                    s.parentNode.insertBefore(twitterScriptTag, s);
                })();
            }
            else {
                $.ajax({url: 'https://platform.twitter.com/widgets.js', dataType: 'script', cache: true}); //http://stackoverflow.com/q/6536108
            }
        },
        tracking: function () {
            tw = window.setInterval(function () {
                if (typeof twttr !== 'undefined') {
                    twttr.events.bind('tweet', function (event) {
                        if (event) {
                            _gaq.push(['_trackSocial', 'twitter', 'tweet']);
                        }
                    });
                    clearInterval(tw);
                }
            }, 1000);
        },
        popup: function (opt) {
            window.open("https://twitter.com/intent/tweet?text=" + encodeURIComponent(opt.text) + "&url="
            + encodeURIComponent((this.settings.url !== '' ? this.setting.url : opt.url))
            + (this.settings.via !== '' ? '&via=' + this.settings.via : ''), "", "toolbar=0, status=0,width=" + this.settings.popup.width + ", height=" + this.settings.popup.height);
        }
    }
});;
SharrrePlatform.register("twitterFollow", function (options) {
    defaultSettings = {  //http://twitter.com/about/resources/tweetbutton
        url: '',  //if you need to personalize url button
        urlCount: false,  //if you want to use personnalize button url on global counter
        count: true,
        display: 'horizontal',
        lang: 'en',
        popup: {
            width: 650,
            height: 360
        },
        user: "",
        size: 'default',
        showCount: 'false'
    };

    defaultSettings = $.extend(true, {}, defaultSettings, options);
    return {
        settings: defaultSettings,
        trackingAction: {site: 'twitter', action: 'follow'},
        url: function (test) {
            return '';
            // Needs an API token
//            return "https://api.twitter.com/1.1/users/show.json?screen_name=" + this.settings.user + "&include_entities=true&callback=?";
        },
        load: function (self) {
            var sett = this.settings;
            $(self.element).find('.buttons').append(
                '<div class="button twitterFollow"><a href="https://twitter.com/' + sett.user + '" class="twitter-follow-button"' +
                '" data-size="' + sett.size +
                '" data-show-count="' + sett.showCount +
                '" data-lang="' + sett.lang +
                '">Follow @' + sett.user + '</a></div>');
            var loading = 0;
            if (typeof twttr === 'undefined' && loading == 0) {
                loading = 1;
                (function () {
                    var twitterScriptTag = document.createElement('script');
                    twitterScriptTag.type = 'text/javascript';
                    twitterScriptTag.async = true;
                    twitterScriptTag.src = 'https://platform.twitter.com/widgets.js';
                    var s = document.getElementsByTagName('script')[0];
                    s.parentNode.insertBefore(twitterScriptTag, s);
                })();
            }
            else {
                $.ajax({url: 'https://platform.twitter.com/widgets.js', dataType: 'script', cache: true}); //http://stackoverflow.com/q/6536108
            }
        },
        tracking: function () {
        },
        popup: function (opt) {
            window.open("https://twitter.com/intent/follow?screen_name=" + encodeURIComponent(this.settings.user), "",
                "toolbar=0, status=0, ,width=" + this.settings.popup.width + ", height=" + this.settings.popup.height);

        }
    }
});;
/*!
 *  Sharrre.com - Make your sharing widget!
 *  Version: 2.0.1
 *  Author: Julien Hany
 *  License: MIT http://en.wikipedia.org/wiki/MIT_License or GPLv2 http://en.wikipedia.org/wiki/GNU_General_Public_License
 */

(function ($, window, document, undefined) {

    /* Defaults*/
    var pluginName = 'sharrre',
        defaults = {
            className: 'sharrre',
            share: {},
            shareTotal: 0,
            template: '',
            title: '',
            url: document.location.href,
            text: document.title,
            urlCurl: 'sharrre.php',  //PHP script for google plus...
            count: {}, //counter by social network
            total: 0,  //total of sharing
            shorterTotal: true, //show total by k or M when number is to big
            enableHover: true, //disable if you want to personalize hover event with callback
            enableCounter: true, //disable if you just want use buttons
            enableTracking: false, //tracking with google analitycs
            defaultUrl: "javascript:void(0);",
            popup: { // Set the popup width and height
                width: 900,
                height: 500
            },
            hover: function () {
            }, //personalize hover event with this callback function
            hide: function () {
            }, //personalize hide event with this callback function
            click: function () {
            }, //personalize click event with this callback function
            render: function () {
            }
        };

    /* Plugin constructor*/
    function Plugin(element, options) {
        this.element = element;
        this.options = $.extend(true, {}, defaults, options);
        this.options.share = options.share; //simple solution to allow order of buttons
        this._defaults = defaults;
        this._name = pluginName;
        this.platforms = {};
        this.init();
    };

    /* Initialization method
     ================================================== */
    Plugin.prototype.init = function () {
        var self = this;

        // Load enabled platforms
        $.each(self.options.share, function (name, val) {
            if (val === true) {
                self.platforms[name] = SharrrePlatform.get(name, self.options.buttons[name]);
            }
        });

        $(this.element).addClass(this.options.className); //add class

        //HTML5 Custom data
        if (typeof $(this.element).data('title') !== 'undefined') {
            this.options.title = $(this.element).attr('data-title');
        }
        if (typeof $(this.element).data('url') !== 'undefined') {
            this.options.url = $(this.element).data('url');
        }
        if (typeof $(this.element).data('text') !== 'undefined') {
            this.options.text = $(this.element).data('text');
        }

        //how many social website have been selected
        $.each(this.options.share, function (name, val) {
            if (val === true) {
                self.options.shareTotal++;
            }
        });

        if (self.options.enableCounter === true) {  //if for some reason you don't need counter
            //get count of social share that have been selected
            $.each(this.options.share, function (name, val) {
                if (val === true) {
                    //self.getSocialJson(name);
                    try {
                        self.getSocialJson(name);
                    } catch (e) {
                    }
                }
            });
        } else if (self.options.template !== '') {
            self.renderer();
            self.options.count[name] = 0;
            self.rendererPerso();
        }

        if (self.options.template !== '') {  //for personalized button (with template)
            this.options.render(this, this.options);
        }
        else { // if you want to use official button like example 3 or 5
            this.loadButtons();
        }

        //add hover event
        $(this.element).on('mouseenter', function () {
            //load social button if enable and 1 time
            if ($(this).find('.buttons').length === 0 && self.options.enableHover === true) {
                self.loadButtons();
            }
            self.options.hover(self, self.options);
        }).on('mouseleave', function () {
            self.options.hide(self, self.options);
        });

        //click event
        $(this.element).click(function (e) {
            e.preventDefault();
            self.options.click(self, self.options);
            return false;
        });
    };

    /* loadButtons methode
     ================================================== */
    Plugin.prototype.loadButtons = function () {
        var self = this;
        $(this.element).append('<div class="buttons"></div>');
        $.each(self.options.share, function (name, val) {

            if (val == true) {
                self.platforms[name].load(self);
                if (self.options.enableTracking === true) { //add tracking
                    self.platforms[name].tracking();
                }
            }
        });
    };

    /* getSocialJson methode
     ================================================== */
    Plugin.prototype.getSocialJson = function (name) {
        var self = this,
            count = 0,
            settings = self.platforms[name].settings,
            buttonUrl = self.platforms[name].url(this.options.urlCurl),
            replaceUrl = encodeURIComponent(this.options.url);
        if (settings.url.length) {
            buttonUrl = settings.url;
        }
        if (settings.urlCount === true && buttonUrl !== '') {
            replaceUrl = buttonUrl;
        }
        if (settings.count === false) {
            buttonUrl = '';
        }
        url = buttonUrl.replace('{url}', replaceUrl);
        if (url != '') {  //urlCurl = '' if you don't want to used PHP script but used social button
            $.getJSON(url, function (json) {
                if (typeof json.count !== "undefined") {  //GooglePlus, Stumbleupon, Twitter, Pinterest and Digg
                    var temp = json.count + '';
                    temp = temp.replace('\u00c2\u00a0', '');  //remove google plus special chars
                    count += parseInt(temp, 10);
                }
                //get the FB total count (shares, likes and more)
                else if (json.data && json.data.length > 0 && typeof json.data[0].total_count !== "undefined") { //Facebook total count
                    count += parseInt(json.data[0].total_count, 10);
                }
                else if (typeof json[0] !== "undefined") {  //Delicious
                    count += parseInt(json[0].total_posts, 10);
                }
                else if (typeof json[0] !== "undefined") {  //Stumbleupon
                }
                self.options.count[name] = count;
                self.options.total += count;
                self.renderer();
                self.rendererPerso();
            })
                .error(function () {
                    self.options.count[name] = 0;
                    self.rendererPerso();
                });
        }
        else {
            self.renderer();
            self.options.count[name] = 0;
            self.rendererPerso();
        }
    };

    /* launch render methode
     ================================================== */
    Plugin.prototype.rendererPerso = function () {
        //check if this is the last social website to launch render
        var shareCount = 0;
        for (e in this.options.count) {
            shareCount++;
        }
        if (shareCount === this.options.shareTotal) {
            this.options.render(this, this.options);
        }
    };

    /* render methode
     ================================================== */
    Plugin.prototype.renderer = function () {
        var total = this.options.total,
            template = this.options.template;
        if (this.options.shorterTotal === true) {  //format number like 1.2k or 5M
            total = this.shorterTotal(total);
        }

        if (template !== '') {  //if there is a template
            template = template.replace('{total}', total);
            $(this.element).html(template);
        }
        else { //template by defaults
            $(this.element).html(
                '<div class="box"><a class="count" href="' + this.options.defaultUrl + '">' + total + '</a>' +
                (this.options.title !== '' ? '<a class="share" href="' + this.options.defaultUrl + '">' + this.options.title + '</a>' : '') +
                '</div>'
            );
        }
    };

    /* format total numbers like 1.2k or 5M
     ================================================== */
    Plugin.prototype.shorterTotal = function (num) {
        if (num >= 1e6) {
            num = (num / 1e6).toFixed(2) + "M"
        } else if (num >= 1e3) {
            num = (num / 1e3).toFixed(1) + "k"
        }
        return num;
    };

    /* Methode for open popup
     ================================================== */
    Plugin.prototype.openPopup = function (site) {
        this.platforms[site].popup(this.options);  //open
        if (this.options.enableTracking === true) { //tracking!
            infos = this.platforms[site].trackingAction;
            _gaq.push(['_trackSocial', infos.site, infos.action]);
        }
    };

    /* Methode for add +1 to a counter
     ================================================== */
    Plugin.prototype.simulateClick = function () {
        var html = $(this.element).html();
        $(this.element).html(html.replace(this.options.total, this.options.total + 1));
    };

    /* Methode for add +1 to a counter
     ================================================== */
    Plugin.prototype.update = function (url, text) {
        if (url !== '') {
            this.options.url = url;
        }
        if (text !== '') {
            this.options.text = text;
        }
    };

    /* A really lightweight plugin wrapper around the constructor, preventing against multiple instantiations
     ================================================== */
    $.fn[pluginName] = function (options) {
        var args = arguments;
        if (options === undefined || typeof options === 'object') {
            return this.each(function () {
                if (!$(this).data('plugin_' + pluginName)) {
                    $(this).data('plugin_' + pluginName, new Plugin(this, options));
                }
            });
        } else if (typeof options === 'string' && options[0] !== '_' && options !== 'init') {
            return this.each(function () {
                var instance = $(this).data('plugin_' + pluginName);
                if (instance instanceof Plugin && typeof instance[options] === 'function') {
                    instance[options].apply(instance, Array.prototype.slice.call(args, 1));
                }
            });
        }
    };
})(window.jQuery || window.Zepto, window, document);
;
