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
		  },
	  _initWindowEvents = function(){
		    'smartresize' : function( event ) {
				  _layout();
				  
				  $('article.hs-content').each( function() {
					    var $article 	= $(this)
					        aJSP		= $article.data( 'jsp' );
					    
					    if( $(window).width() > 715 ) {
							  ( aJSP === undefined ) ? $article.jScrollPane( scrollOptions ) : aJSP.reinitialise();
							  _initArticleEvents();
							}
						else {
							// destroy article's custom scroll if screen size <= 715
							  if ( aJSP !== undefined )
							       aJSP.destroy();
							       
							  $container.off( 'click', 'article.hs-content' );
							}
					   
					  });
					  var nJSP = $menu.children( 'nav' ).data( 'jsp' );
					  nJSP.reinitialise();
					  
					  _goto();
					  
				},
				'statechange' : function( event ) {
					_goto();
				}
		  
		};
	_initMenuEvents	= function() {
		$links.on( 'click', function( event ) {
			  var href 		= $(this).attr('href'),
			      chapter	= ( href.search(/part/) !== -1) ? href.substring(8) : 0;
			  _saveState( part );
			  return false;
			});
			
	}
	
	}();
  Page.init();
	
})(window);
