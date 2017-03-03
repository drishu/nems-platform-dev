<?php
/**
 * @file
 * nems_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in nems_news_categories'.
  $permissions['add terms in nems_news_categories'] = array(
    'name' => 'add terms in nems_news_categories',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_news content'.
  $permissions['create nems_news content'] = array(
    'name' => 'create nems_news content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_news content'.
  $permissions['delete any nems_news content'] = array(
    'name' => 'delete any nems_news content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_news content'.
  $permissions['delete own nems_news content'] = array(
    'name' => 'delete own nems_news content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_news_categories'.
  $permissions['delete terms in nems_news_categories'] = array(
    'name' => 'delete terms in nems_news_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nems_news content'.
  $permissions['edit any nems_news content'] = array(
    'name' => 'edit any nems_news content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_news content'.
  $permissions['edit own nems_news content'] = array(
    'name' => 'edit own nems_news content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_news_categories'.
  $permissions['edit terms in nems_news_categories'] = array(
    'name' => 'edit terms in nems_news_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}