<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function custom_theme_preprocess(&$vars) {
  // This is where you do the function
  $myvariable = helloworld_hello_page();
  $vars['myvari'] = $myvariable;
  // After this $myvar will be available in html.tpl.php
}
