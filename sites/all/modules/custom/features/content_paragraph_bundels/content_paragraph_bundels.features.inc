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
    '1_kolom_tekst_33_3_breed' => array(
      'name' => '1 Kolom tekst - 33.3% breed',
      'bundle' => '1_kolom_tekst_33_3_breed',
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
    '2_kolommen_tekst_30_afbeelding_7' => array(
      'name' => '2 kolommen tekst 30% - afbeelding 70%',
      'bundle' => '2_kolommen_tekst_30_afbeelding_7',
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
    '2_kolommen_tekst_video' => array(
      'name' => '2 kolommen tekst - video',
      'bundle' => '2_kolommen_tekst_video',
      'locked' => '1',
    ),
    '3_kolommen_tekst' => array(
      'name' => '3 kolommen - Tekst',
      'bundle' => '3_kolommen_tekst',
      'locked' => '1',
    ),
    '3_kolommen_tekst_video_tekst' => array(
      'name' => '3 kolommen - tekst - video - tekst',
      'bundle' => '3_kolommen_tekst_video_tekst',
      'locked' => '1',
    ),
    '3_kolommen_video_s' => array(
      'name' => '3 kolommen - videos',
      'bundle' => '3_kolommen_video_s',
      'locked' => '1',
    ),
    'afbeelding_tekst_link_33_3_' => array(
      'name' => 'afbeelding-tekst-link-33.3%',
      'bundle' => 'afbeelding_tekst_link_33_3_',
      'locked' => '1',
    ),
    'event' => array(
      'name' => 'event',
      'bundle' => 'event',
      'locked' => '1',
    ),
    'jury' => array(
      'name' => 'Jury',
      'bundle' => 'jury',
      'locked' => '1',
    ),
    'links_titels_rechts_quote' => array(
      'name' => 'links-Titels_rechts-Quote',
      'bundle' => 'links_titels_rechts_quote',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
