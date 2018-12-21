#pragma once
#include "pieces/ChessPiece.h"
#include "pieces/Rook.h"
#include "pieces/Knight.h"
#include "pieces/Bishop.h"
#include "pieces/King.h"
#include "pieces/Queen.h"
#include "pieces/Pawn.h"



class ChessBoard
{
public:
    static const int BOARD_LENGTH = 8;
    static const int BOARD_HEIGHT = 8;
    ChessPiece* board[BOARD_LENGTH][BOARD_HEIGHT];
	void display();
	void block();
	ChessBoard();
	~ChessBoard();
	std::string toString();
};

