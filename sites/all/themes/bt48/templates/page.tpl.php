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
    <div class="page-details">
      
      <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php print $breadcrumb; ?>
    
      <?php print $messages; ?>
    
      <?php print render($tabs); ?>
    
      <?php print render($page['help']); ?>
    
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
    
      <?php print render($page['preface']); ?>
    </div>

    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      
      
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>
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
