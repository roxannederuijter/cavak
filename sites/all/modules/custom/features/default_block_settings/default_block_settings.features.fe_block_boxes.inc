<?php
/**
 * @file
 * default_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function default_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'googlemaps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'googlemaps';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2483.4842889066113!2d3.617485200000004!3d51.50433060000001!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c491212b4fe37f%3A0xd58e972b9b804fc!2sMolenwater+105%2C+4331+SG+Middelburg!5e0!3m2!1sen!2snl!4v1438761964413" style="border:0" width="100%"></iframe></p>
';

  $export['googlemaps'] = $fe_block_boxes;

  return $export;
}
