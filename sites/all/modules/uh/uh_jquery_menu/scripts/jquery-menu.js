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

(function ($) {
    $(document).ready(function(){

        $('.view-id-cast_crew').find('.views-row').each(function() {
            var imageContainer = $(this).find('.views-field-field-profielfoto');
            var image = imageContainer.find("img:first");
            var text = $(this).find('.views-field-field-naam');
            var container = $(this);

            image.on("mouseover",function() {

                container.off("mouseout");

                text.fadeIn('fast', function(){

                    container.on("mouseout",function() {
                        text.fadeOut('fast');
                        image.css({'visibility': 'visible'});
                    });

                });

                image.css({'visibility': 'hidden'});
            });

        });
    });
})(jQuery);