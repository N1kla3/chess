#pragma once
#include "ChessPiece.h"
class Knight :
	public ChessPiece
{
public:
	Knight(bool);
    vector<int> vec;
	vector<int>* canMove(int, int, ChessBoard*)override;
	~Knight();
};

