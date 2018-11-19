#include "ChessBoard.h"
#include <iostream>
#include <algorithm>

using namespace::std;

int main()
{
	ChessBoard*  board = new ChessBoard();
	board->display();
/*	swap(board->board[1][5], board->board[3][5]);
	board->display();
	board->board[6][5]->blocked = true;
	board->block();
*/
    return 0;
}

