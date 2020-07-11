<?php

/**
 * @file
 * testerpalfeatures.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function testerpalfeatures_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-erpal-menu.
  $menus['menu-erpal-menu'] = array(
    'menu_name' => 'menu-erpal-menu',
    'title' => 'ERPAL Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ERPAL Menu');
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
