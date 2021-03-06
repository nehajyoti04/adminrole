<?php

/**
 * @file
 * Drush integration functions for the adminrole module.
 */

/**
 * Implements hook_drush_command().
 */
function adminrole_drush_command() {
  $items['adminrole-update'] = [
    'description' => 'Update the administrator role permissions.',
    'callback' => 'drush_adminrole_update',
    'drupal dependencies' => ['adminrole'],
  ];
  return $items;
}

/**
 * Drush callback; update the admin role with all current available permissions.
 */
function drush_adminrole_update() {
  adminrole_update_permissions();
  drush_print('Administrator role permissions updated.');
}
