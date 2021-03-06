/**
 * Created by nickvanboven on 10-11-14.
 */



(function ($) {
    $(document).ready(function() {
        $('a[href*=#]').on('click', function(event){
            if ($("#block-views-diensten-block").length > 0){
                event.preventDefault();
            }
            $('html,body').animate({scrollTop:$(this.hash).offset().top - 140}, 1000);
        });
    });



})(jQuery);


(function($) {
    var defaults = {
            topSpacing: 0,
            bottomSpacing: 0,
            className: 'is-sticky',
            wrapperClassName: 'sticky-wrapper',
            center: false,
            getWidthFrom: '',
            responsiveWidth: false
        },
        $window = $(window),
        $document = $(document),
        sticked = [],
        windowHeight = $window.height(),
        scroller = function() {
            var scrollTop = $window.scrollTop(),
                documentHeight = $document.height(),
                dwh = documentHeight - windowHeight,
                extra = (scrollTop > dwh) ? dwh - scrollTop : 0;

            for (var i = 0; i < sticked.length; i++) {
                var s = sticked[i],
                    elementTop = s.stickyWrapper.offset().top,
                    etse = elementTop - s.topSpacing - extra;

                if (scrollTop <= etse) {
                    if (s.currentTop !== null) {
                        s.stickyElement
                            .css('position', '')
                            .css('top', '');
                        s.stickyElement.trigger('sticky-end', [s]).parent().removeClass(s.className);
                        s.currentTop = null;
                    }
                }
                else {
                    var newTop = documentHeight - s.stickyElement.outerHeight()
                        - s.topSpacing - s.bottomSpacing - scrollTop - extra;
                    if (newTop < 0) {
                        newTop = newTop + s.topSpacing;
                    } else {
                        newTop = s.topSpacing;
                    }
                    if (s.currentTop != newTop) {
                        s.stickyElement
                            .css('position', 'fixed')
                            .css('top', newTop);

                        if (typeof s.getWidthFrom !== 'undefined') {
                            s.stickyElement.css('width', $(s.getWidthFrom).width());
                        }

                        s.stickyElement.trigger('sticky-start', [s]).parent().addClass(s.className);
                        s.currentTop = newTop;
                    }
                }
            }
        },
        resizer = function() {
            windowHeight = $window.height();

            for (var i = 0; i < sticked.length; i++) {
                var s = sticked[i];
                if (typeof s.getWidthFrom !== 'undefined' && s.responsiveWidth === true) {
                    s.stickyElement.css('width', $(s.getWidthFrom).width());
                }
            }
        },
        methods = {
            init: function(options) {
                var o = $.extend({}, defaults, options);
                return this.each(function() {
                    var stickyElement = $(this);

                    var stickyId = stickyElement.attr('id');
                    var wrapperId = stickyId ? stickyId + '-' + defaults.wrapperClassName : defaults.wrapperClassName
                    var wrapper = $('<div></div>')
                        .attr('id', stickyId + '-sticky-wrapper')
                        .addClass(o.wrapperClassName);
                    stickyElement.wrapAll(wrapper);

                    if (o.center) {
                        stickyElement.parent().css({width:stickyElement.outerWidth(),marginLeft:"auto",marginRight:"auto"});
                    }

                    if (stickyElement.css("float") == "right") {
                        stickyElement.css({"float":"none"}).parent().css({"float":"right"});
                    }

                    var stickyWrapper = stickyElement.parent();
                    stickyWrapper.css('height', stickyElement.outerHeight());
                    sticked.push({
                        topSpacing: o.topSpacing,
                        bottomSpacing: o.bottomSpacing,
                        stickyElement: stickyElement,
                        currentTop: null,
                        stickyWrapper: stickyWrapper,
                        className: o.className,
                        getWidthFrom: o.getWidthFrom,
                        responsiveWidth: o.responsiveWidth
                    });
                });
            },
            update: scroller,
            unstick: function(options) {
                return this.each(function() {
                    var unstickyElement = $(this);

                    var removeIdx = -1;
                    for (var i = 0; i < sticked.length; i++)
                    {
                        if (sticked[i].stickyElement.get(0) == unstickyElement.get(0))
                        {
                            removeIdx = i;
                        }
                    }
                    if(removeIdx != -1)
                    {
                        sticked.splice(removeIdx,1);
                        unstickyElement.unwrap();
                        unstickyElement.removeAttr('style');
                    }
                });
            }
        };

    // should be more efficient than using $window.scroll(scroller) and $window.resize(resizer):
    if (window.addEventListener) {
        window.addEventListener('scroll', scroller, false);
        window.addEventListener('resize', resizer, false);
    } else if (window.attachEvent) {
        window.attachEvent('onscroll', scroller);
        window.attachEvent('onresize', resizer);
    }

    $.fn.sticky = function(method) {
        if (methods[method]) {
            return methods[method].apply(this, Array.prototype.slice.call(arguments, 1));
        } else if (typeof method === 'object' || !method ) {
            return methods.init.apply( this, arguments );
        } else {
            $.error('Method ' + method + ' does not exist on jQuery.sticky');
        }
    };

    $.fn.unstick = function(method) {
        if (methods[method]) {
            return methods[method].apply(this, Array.prototype.slice.call(arguments, 1));
        } else if (typeof method === 'object' || !method ) {
            return methods.unstick.apply( this, arguments );
        } else {
            $.error('Method ' + method + ' does not exist on jQuery.sticky');
        }

    };
    $(function() {
        setTimeout(scroller, 0);
    });
})(jQuery);

(function ($) {
    $(document).ready(function(){
        $("#zone-menu-wrapper").sticky({topSpacing:-1});
    });
})(jQuery);

//(function ($) {
//    $(document).ready(function(){
//
//        $('.view-id-cast_crew').find('.views-row .views-field-title').each(function() {
//            var imageContainer = $(this).parent().find('.views-field-field-profielfoto');
//            var image = imageContainer.find("img:first");
//            var text = $(this).parent().find('.views-field-field-naam');
//            var container = $(this).parent();
//            var speed = 400; // speed in ms
//
//            container.css('cursor', 'pointer').on('click', function(){
//                location.href = image.parent().attr("href");
//            });
//
//            container.on("mouseenter",function() {
//                text.fadeIn(speed);
//                image.animate({opacity: '0.3'}, speed);
//                //image.css({'visibility': 'hidden'});
//            });
//            container.on("mouseout",function() {
//                text.fadeOut(speed);
//                image.animate({opacity: '1'}, speed);
//                //image.css({'visibility': 'visible'});
//            });
//        });
//
//        //
//        //var foo = $('input.form-radio');
//        //
//        //if ( foo.is(':checked') ) {
//        //    foo.parent().addClass('active');
//        //}
//
//        $('input.form-radio').each(function(){
//            if($(this).prop('checked')){
//                $(this).parent().addClass("active");
//            }
//        });
//
//    });
//})(jQuery);


(function ($) {
    $(document).ready(function(){
// Disable scroll zooming and bind back the click event
var onMapMouseleaveHandler = function (event) {
    var that = $(this);

    that.on('click', onMapClickHandler);
    that.off('mouseleave', onMapMouseleaveHandler);
    that.find('iframe').css("pointer-events", "none");
}

var onMapClickHandler = function (event) {
    var that = $(this);

    // Disable the click handler until the user leaves the map area
    that.off('click', onMapClickHandler);

    // Enable scrolling zoom
    that.find('iframe').css("pointer-events", "auto");

    // Handle the mouse leave event
    that.on('mouseleave', onMapMouseleaveHandler);
}

// Enable map zooming with mouse scroll when the user clicks the map
$('.maps.embed-container').on('click', onMapClickHandler);
    });
})(jQuery);