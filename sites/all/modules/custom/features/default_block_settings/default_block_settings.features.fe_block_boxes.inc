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
  $fe_block_boxes->info = 'events';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'events';
  $fe_block_boxes->body = '<div class="orange">
<h2>FilmfestivalZ</h2>
</div>

<div class="blue">
<h2>Evenementen</h2>
</div>
';

  $export['events'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'filmfestival';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'filmfestival';
  $fe_block_boxes->body = '<h2>FILMFESTIVALZ</h2>

<p>Heb je een korte film gemaakt en wil je deze ook aan zoveel mogelijk mensen laten zien? zie hieronder de kalender van de belangrijkste korte filmfestivals in Europa. Let op: De festivals staan op volgorde van deadline van insturen van je film.</p>
';

  $export['filmfestival'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'filmrecruitzcast';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'filmrecruitzcast';
  $fe_block_boxes->body = '<div class="orange">
<h2>Filmrecruitz</h2>
</div>

<div class="blue">
<h2>Cast</h2>
</div>
';

  $export['filmrecruitzcast'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'filmrecruitzcrew';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'filmrecruitzcrew';
  $fe_block_boxes->body = '<div class="orange">
<h2>Filmrecruitz</h2>
</div>

<div class="blue">
<h2>Crew</h2>
</div>
';

  $export['filmrecruitzcrew'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'filmrecruitzzoekopdracht';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'filmrecruitzzoekopdracht';
  $fe_block_boxes->body = '<div class="orange">
<h2>Filmrecruitz</h2>
</div>

<div class="blue">
<h2>Zoekopdracht</h2>
</div>
';

  $export['filmrecruitzzoekopdracht'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'flimrecruitzinschrijven';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'flimrecruitzinschrijven';
  $fe_block_boxes->body = '<div class="orange">
<h2>Filmrecruitz</h2>
</div>

<div class="blue">
<h2>Inschrijven</h2>
</div>
';

  $export['flimrecruitzinschrijven'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'googlemaps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'googlemaps';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2483.4842889066113!2d3.617485200000004!3d51.50433060000001!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c491212b4fe37f%3A0xd58e972b9b804fc!2sMolenwater+105%2C+4331+SG+Middelburg!5e0!3m2!1sen!2snl!4v1438761964413" style="pointer-events: none;" width="100%"></iframe></p>
';

  $export['googlemaps'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'headerlinks';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'headerlinks';
  $fe_block_boxes->body = '<p><a class="mail" href="mailto:info@cavak.nl">mail</a> <a class="home" href="cavak.nl">home</a></p>
';

  $export['headerlinks'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'online';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'online';
  $fe_block_boxes->body = '<div class="orange">
<h2>FilmfestivalZ</h2>
</div>

<div class="blue">
<h2>online</h2>
</div>
';

  $export['online'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'tips';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'tips';
  $fe_block_boxes->body = '<div class="tips">
<div class="orange">
<h2>FilmfestivalZ</h2>
</div>

<div class="blue">
<h2>Tips en ervaringen</h2>
</div>
</div>
';

  $export['tips'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'zinema';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'zinema';
  $fe_block_boxes->body = '<h2>zinema</h2>
';

  $export['zinema'] = $fe_block_boxes;

  return $export;
}
