(function(window, undefined) {
  var Page	= (function() {
    var $container	= $( '#hs-container' ),
      $scroller		= $container.find( 'div.hs-content-scroller' ),
      $menu			= $container.find( 'aside' ),
      $links		= $menu.find( 'nav > a' ),
      $articles		= $container.find( 'aside' ),
      $toTop		= $container.find( 'a.hs-totop-link' )
      History		= window.History,
      animation		= { speed : 800, easing : 'easeInOutExpo ' },
      scrollOptions	= { verticalGutter : 0, hideFocus : true },
      
      init			= function() {
		    _initCustomScroll();
		    _initEvents();
		    _layout();
		    _goto();
		  },
      _initCustomScroll = function(){
		    if( $(window).width() > 715 ) {
				  $articles.jScrollPane( scrollOptions );
				}
				$menu.children( 'nav' ).jScrollPane( scrollOptions );
		  }
	
  })();
  Page.init();
	
})(window);
