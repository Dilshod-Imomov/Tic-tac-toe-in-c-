if ( board[0][0] == board[0][1] && board[0][2] == board[0][1] && board[0][0] != 0 ) { //first row
	int x = board[0][0];
	# include "clearBoard.cpp"
	board[0][0] = board[0][1] = board[0][2] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[1][0] == board[1][1] && board[1][2] == board[1][1] && board[1][0] != 0 ) { //second row
	int x = board[1][0];
	# include "clearBoard.cpp"
	board[1][0] = board[1][1] = board[1][2] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[2][0] == board[2][1] && board[2][2] == board[2][1] && board[2][0] != 0 ) { //third row
	int x = board[2][0];
	# include "clearBoard.cpp"
	board[2][0] = board[2][1] = board[2][2] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[0][0] == board[1][0] && board[2][0] == board[1][0] && board[0][0] != 0 ) { //first column
	int x = board[0][0];
	# include "clearBoard.cpp"
	board[0][0] = board[1][0] = board[2][0] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[0][1] == board[1][1] && board[2][1] == board[1][1] && board[0][1] != 0 ) { //second column
	int x = board[0][1];
	# include "clearBoard.cpp"
	board[0][1] = board[1][1] = board[2][1] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[0][2] == board[1][2] && board[2][2] == board[1][2] && board[0][2] != 0 ) { //third column
	int x = board[0][0];
	# include "clearBoard.cpp"
	board[0][2] = board[1][2] = board[2][2] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != 0 ) { //left diagonal
	int x = board[0][0];
	# include "clearBoard.cpp"
	board[0][0] = board[1][1] = board[2][2] = x;
	winner = 1;
	# include "updateBoard.cpp"
}
if ( board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[2][0] != 0 ) { //right diagonal
	int x = board[2][0];
	# include "clearBoard.cpp"
	board[0][2] = board[1][1] = board[2][0] = x;
	winner = 1;
	# include "updateBoard.cpp"
}

