<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<div class="page" id="sb-site">
  <?php render($page['content']['metatags']); ?>
  <header class="header" id="header" role="banner">
    <div class="container">  
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
      <?php endif; ?>
      <?php print render($page['header']); ?>
      <!-- Mobile Icons -->
      <ul class="mobile-controls">
        <a class="logo" href="<?php print $front_page; ?>"></a>
        <li id="menu"><a class="nav-toggle nav-toggle-menu icon-menu sb-toggle-left"><span>Menu</span></a></li>
        <li id="search"><a class="search-toggle icon-search sb-toggle-right"><span>Search</span></a></li>
      </ul>
      <div id="navigation">
        <?php print render($page['navigation']); ?>
      </div>
    </div>  
  </header>

  <div id="main">
   
    <a id="main-content"></a>
    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print render($page['preface']); ?>
      <?php print render($page['content_front']); ?>
    </div>
  </div>

  <?php print render($page['footer']); ?>
 
</div>

<div class="sb-slidebar sb-left" id="slidebarmenu">
  <?php print render($page['slidebar_left']); ?>
</div>

<div class="sb-slidebar sb-right" id="slidebarsearch">
  <?php print render($page['slidebar_right']); ?>
</div>


<?php print render($page['bottom']); ?>
