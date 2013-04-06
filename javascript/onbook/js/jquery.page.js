(function(window, undefined) {
  var Page	= (function() {
    var $container	= $( '#hs-container' ),
      $scroller	= $container.find( 'div.hs-content-scroller' ),
      $menu		= $container.find( 'aside' ),
      $links	= $menu.find( 'nav > a' ),
      $articles	= $container.find( 'aside' ),
      $toTop	= $container.find( 'a.hs-totop-link' )
	
  })();
  Page.init();
	
})(window);
