<?php

/**
 * @file
 * testerpalfeatures.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function testerpalfeatures_user_default_roles() {
  $roles = array();

  // Exported role: controller.
  $roles['controller'] = array(
    'name' => 'controller',
    'weight' => 6,
  );

  // Exported role: internal developer.
  $roles['internal developer'] = array(
    'name' => 'internal developer',
    'weight' => 3,
  );

  return $roles;
}
