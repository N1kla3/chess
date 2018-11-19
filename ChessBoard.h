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
	ChessPiece* board[8][8];
	void display();
	void block();
	ChessBoard();
	~ChessBoard();
	std::string toString();
};

