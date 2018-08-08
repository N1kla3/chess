#pragma once
#include "ChessPiece.h"
#include "Rook.h"


class ChessBoard
{
public:
	ChessPiece* board[8][8];

	ChessBoard();
	~ChessBoard();
	std::string toString();
};

