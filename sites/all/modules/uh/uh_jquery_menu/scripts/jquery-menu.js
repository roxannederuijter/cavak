/**
 * Created by nickvanboven on 10-11-14.
 */
(function ($) {
    $(document).on("scroll",function(){
        $("#zone-branding-wrapper").toggleClass("smaller", $(document).scrollTop()>60);
        $("#superfish-1").toggleClass("smaller", $(document).scrollTop()>60);
    });
})(jQuery);
