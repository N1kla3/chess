#pragma once
#include "ChessPiece.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Pawn.h"



class ChessBoard
{
public:
	ChessPiece* board[8][8];

	ChessBoard();
	~ChessBoard();
	std::string toString();
};

