<?php
/**
 * @file
 * default_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: 300_x_300_.
  $styles['300_x_300_'] = array(
    'label' => '300 x 300 ',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_2560_x_660.
  $styles['banner_2560_x_660'] = array(
    'label' => 'Banner 2560 x 660',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2560,
          'height' => 900,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_205-104.
  $styles['slideshow_205-104'] = array(
    'label' => 'slideshow 205x104',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 104,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
