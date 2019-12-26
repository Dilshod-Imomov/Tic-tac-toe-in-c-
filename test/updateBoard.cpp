for ( int i = 0; i < 3; i++ ) 
	for ( int j = 0; j < 3; j++ ) {
		int h = i * 106, w = j * 106;
		if ( i ) h -= i * size;
		if ( j ) w -= j * size;
		if ( !board[i][j] ) {
			spriteE.setPosition(w, h);
			window.draw(spriteE);	
		}
		if ( board[i][j] == 1 ) {
			spriteX.setPosition(w, h);
			window.draw(spriteX);
		}
		if ( board[i][j] == 2 ) {
			spriteO.setPosition(w, h);
			window.draw(spriteO);
		}				
	}