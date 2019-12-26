#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

const int sq = 106;
const int size = 10;
int H = sq * 3 - size * 2, W = sq * 3 - size * 2, board[3][3], turn;
int Rect1, Rect2, Rect3, Rect4, Rect5, Rect6, Rect7, Rect8, Rect9, winner; 

int main()
{
	RenderWindow window(VideoMode(W, H), "Tic-tac-toe");
	Texture X, O, E;
	X.loadFromFile("images/X.png");
	O.loadFromFile("images/O.png");
	E.loadFromFile("images/empty.png");
	Sprite spriteX(X), spriteO(O), spriteE(E);
	# include "clearBoard.cpp"
	# include "updateBoard.cpp"
	window.display();
	while ( window.isOpen() ) {
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)      
                window.close();
            if ( winner ) continue;
            # include "findWinner.cpp"
            if ( winner ) {
            	window.display();
            }
            if (e.type == Event::MouseButtonReleased) {
            	int x = Mouse::getPosition(window).x, y = Mouse::getPosition(window).y;
            	Rect1 = Rect2 = Rect3 = Rect4 = Rect5 = Rect6 = Rect7 = Rect8 = Rect9 = 0;
            	if ( x >= 4 && y >= 4 && x <= 96 && y <= 96  ) Rect1 = 1;
            	if ( x >= 100 && y >= 4 && x <= 192 && y <= 96  ) Rect2 = 1;
            	if ( x >= 196 && y >= 4 && x <= 295 && y <= 96  ) Rect3 = 1;
            	if ( x >= 4 && y >= 100 && x <= 96 && y <= 192  ) Rect4 = 1;
            	if ( x >= 100 && y >= 100 && x <= 192 && y <= 192  ) Rect5 = 1;
            	if ( x >= 196 && y >= 100 && x <= 295 && y <= 192  ) Rect6 = 1;
            	if ( x >= 4 && y >= 196 && x <= 96 && y <= 295  ) Rect7 = 1;
            	if ( x >= 100 && y >= 196 && x <= 192 && y <= 295  ) Rect8 = 1;
            	if ( x >= 196 && y >= 196 && x <= 295 && y <= 295  ) Rect9 = 1;
		        if ( Rect1 ) {
		        	if ( board[0][0] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[0][0] = 1;
		        	}
		        	else board[0][0] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect2 ) {
		        	if ( board[0][1] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[0][1] = 1;
		        	}
		        	else board[0][1] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect3 ) {
		        	if ( board[0][2] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[0][2] = 1;
		        	}
		        	else board[0][2] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect4 ) {
		        	if ( board[1][0] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[1][0] = 1;
		        	}
		        	else board[1][0] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect5 ) {
		        	if ( board[1][1] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[1][1] = 1;
		        	}
		        	else board[1][1] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect6 ) {
		        	if ( board[1][2] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[1][2] = 1;
		        	}
		        	else board[1][2] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect7 ) {
		        	if ( board[2][0] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[2][0] = 1;
		        	}
		        	else board[2][0] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect8 ) {
		        	if ( board[2][1] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[2][1] = 1;
		        	}
		        	else board[2][1] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        if ( Rect9 ) {
		        	if ( board[2][2] != 0 ) continue;
		        	if ( turn % 2 == 0 ) {
		        		board[2][2] = 1;
		        	}
		        	else board[2][2] = 2;
		        	turn++;
		        	# include "updateBoard.cpp"
		        }
		        window.display();
            }
        }
	}
}