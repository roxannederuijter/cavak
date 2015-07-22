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

  return $styles;
}
