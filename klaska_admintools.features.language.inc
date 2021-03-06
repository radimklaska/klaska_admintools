<?php
/**
 * @file
 * klaska_admintools.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function klaska_admintools_locale_default_languages() {
  $languages = array();

  // Exported language: cs.
  $languages['cs'] = array(
    'language' => 'cs',
    'name' => 'Czech',
    'native' => 'Čeština',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '3',
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'cs',
    'weight' => '0',
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '0',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
  );
  return $languages;
}
