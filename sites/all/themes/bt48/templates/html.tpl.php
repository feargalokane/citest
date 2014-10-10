<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if lte IE 6]><html class="lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="lt-ie9" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <?php endif; ?>
  <meta http-equiv="cleartype" content="on">
  <link rel="apple-touch-icon" sizes="144x144" href="<?php drupal_get_path('theme', 'BT48'); ?>/apple-touch-icon-144x144.png">
  <link rel="apple-touch-icon" sizes="114x114" href="<?php drupal_get_path('theme', 'BT48'); ?>/apple-touch-icon-114x114.png">
  <link rel="apple-touch-icon" sizes="72x72" href="<?php drupal_get_path('theme', 'BT48'); ?>/apple-touch-icon-72x72.png">
  <link rel="apple-touch-icon" href="<?php drupal_get_path('theme', 'BT48'); ?>/apple-touch-icon.png">
  <link rel="apple-touch-startup-image" href="<?php drupal_get_path('theme', 'BT48'); ?>/apple-startup.png">


  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php if ($add_html5_shim and !$add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5.js"></script>
    <![endif]-->
  <?php elseif ($add_html5_shim and $add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5-respond.js"></script>
    <![endif]-->
  <?php elseif ($add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/respond.js"></script>
    <![endif]-->
  <?php endif; ?>
  <!--[if (gte IE 6)&(lte IE 8)]>
    <script type="text/javascript" src="<?php print $base_path; ?>/sites/all/themes/yaa/js/selectivizr-min.js"></script>
    <noscript><link rel="stylesheet" href="[fallback css]" /></noscript>
  <![endif]-->
  
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php if ($skip_link_text && $skip_link_anchor): ?>
    <p id="skip-link">
      <a href="#<?php print $skip_link_anchor; ?>" class="element-invisible element-focusable"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

  <script type="text/javascript">
      (function($) {
  $(document).ready(function() {
    $('.header').waypoint('sticky', {
      offset: -160 // Apply "stuck" when element 30px from top
    });
  });
  }) (jQuery);
  </script>

  <script type="text/javascript">
    (function($) {
      $(document).ready(function() {
        $.slidebars();
      });
    }) (jQuery);
  </script>

  <script src="/sites/all/themes/yaa/js/isotope/isotope.pkgd.min.js"></script>

</body>
</html>
