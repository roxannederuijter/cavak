<?php
/**
 * @file
 * content_paragraph_bundels.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function content_paragraph_bundels_paragraphs_info() {
  $items = array(
    '1_kolom_afbeelding' => array(
      'name' => '1 kolom - Afbeelding',
      'bundle' => '1_kolom_afbeelding',
      'locked' => '1',
    ),
    '1_kolom_tekst' => array(
      'name' => '1 kolom - Tekst',
      'bundle' => '1_kolom_tekst',
      'locked' => '1',
    ),
    '2_kolommen_afbeeldingen' => array(
      'name' => '2 kolommen - Afbeeldingen',
      'bundle' => '2_kolommen_afbeeldingen',
      'locked' => '1',
    ),
    '2_kolommen_tekst' => array(
      'name' => '2 kolommen - Tekst',
      'bundle' => '2_kolommen_tekst',
      'locked' => '1',
    ),
    '2_kolommen_tekst_afbeelding_link' => array(
      'name' => '2 kolommen - Tekst + Afbeelding Links',
      'bundle' => '2_kolommen_tekst_afbeelding_link',
      'locked' => '1',
    ),
    '2_kolommen_tekst_afbeelding_rech' => array(
      'name' => '2 kolommen - Tekst + Afbeelding Rechts',
      'bundle' => '2_kolommen_tekst_afbeelding_rech',
      'locked' => '1',
    ),
  );
  return $items;
}
