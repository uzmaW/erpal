<?php

/**
 * @file
 * testerpalfeatures.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function testerpalfeatures_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_administration:admin.
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_pages:admin/structure/pages.
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels.
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_token-authentication:admin/config/services/tokenauth.
  $menu_links['management_token-authentication:admin/config/services/tokenauth'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/tokenauth',
    'router_path' => 'admin/config/services/tokenauth',
    'link_title' => 'Token authentication',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure token behavior to allow users to authenticate per page-load via URL.',
      ),
      'identifier' => 'management_token-authentication:admin/config/services/tokenauth',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: menu-erpal-menu_activities:activities.
  $menu_links['menu-erpal-menu_activities:activities'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'activities',
    'router_path' => 'activities',
    'link_title' => 'Activities',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_activities',
        'class' => 'activities',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_activities:activities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-erpal-menu_calendar:calendar/own.
  $menu_links['menu-erpal-menu_calendar:calendar/own'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'calendar/own',
    'router_path' => 'calendar/%',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_calendar',
        'class' => 'calendar',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_calendar:calendar/own',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-erpal-menu_contacts:contacts.
  $menu_links['menu-erpal-menu_contacts:contacts'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'contacts',
    'router_path' => 'contacts',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_contacts',
        'class' => 'contacts',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_contacts:contacts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-erpal-menu_contracts:contracts.
  $menu_links['menu-erpal-menu_contracts:contracts'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'contracts',
    'router_path' => 'contracts',
    'link_title' => 'Contracts',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_contracts',
        'class' => 'contracts',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_contracts:contracts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
  );
  // Exported menu link: menu-erpal-menu_documents:books/books.
  $menu_links['menu-erpal-menu_documents:books/books'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'books/books',
    'router_path' => 'books/%',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_documents',
        'class' => 'documents',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_documents:books/books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-erpal-menu_files:files/files.
  $menu_links['menu-erpal-menu_files:files/files'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'files/files',
    'router_path' => 'files',
    'link_title' => 'Files',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_files',
        'class' => 'files',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_files:files/files',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-erpal-menu_heartbeat:heartbeat/all.
  $menu_links['menu-erpal-menu_heartbeat:heartbeat/all'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'heartbeat/all',
    'router_path' => 'heartbeat/all',
    'link_title' => 'Heartbeat',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_heartbeat',
        'class' => 'heartbeat',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_heartbeat:heartbeat/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 0,
  );
  // Exported menu link: menu-erpal-menu_invoices:invoice/invoices.
  $menu_links['menu-erpal-menu_invoices:invoice/invoices'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'invoice/invoices',
    'router_path' => 'invoice/invoices',
    'link_title' => 'Invoices',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_invoices',
        'class' => 'invoices',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_invoices:invoice/invoices',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-erpal-menu_projects:projects/projects.
  $menu_links['menu-erpal-menu_projects:projects/projects'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'projects/projects',
    'router_path' => 'projects/projects',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_projects',
        'class' => 'projects',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_projects:projects/projects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-erpal-menu_reporting:reports/dashboard.
  $menu_links['menu-erpal-menu_reporting:reports/dashboard'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'reports/dashboard',
    'router_path' => 'reports/%',
    'link_title' => 'Reporting',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_reports',
        'class' => 'reports',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_reporting:reports/dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-erpal-menu_timekeeping:timekeeping.
  $menu_links['menu-erpal-menu_timekeeping:timekeeping'] = array(
    'menu_name' => 'menu-erpal-menu',
    'link_path' => 'timekeeping',
    'router_path' => 'timekeeping',
    'link_title' => 'Timekeeping',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'erpal_menu_timekeeping',
        'class' => 'timekeeping',
        'style' => '',
      ),
      'identifier' => 'menu-erpal-menu_timekeeping:timekeeping',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Administration');
  t('Calendar');
  t('Contacts');
  t('Contracts');
  t('Documents');
  t('Files');
  t('Heartbeat');
  t('Invoices');
  t('Pages');
  t('Panels');
  t('Projects');
  t('Reporting');
  t('Timekeeping');
  t('Token authentication');

  return $menu_links;
}
