/**
 * Created by nickvanboven on 10-11-14.
 */

(function ($) {

    Drupal.behaviors.fancy_side_menu = {

        attach: function (context, settings) {
            $('#fancy-menu').hover(
                function () {
                    {
                        $(this).addClass("expanded");
                    }
                },
                function () {
                    $(this).removeClass("expanded");
                });

            $('#fancy-menu').click(
                function () {
                    if ($('#fancy-menu').hasClass("expanded")) {
                        $(this).removeClass("expanded");
                    }
                    else {
                        $(this).addClass("expanded");
                    }
                }
            );


        }}
})(jQuery);


