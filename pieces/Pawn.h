#pragma once
#include "ChessPiece.h"
class Pawn :
	public ChessPiece
{
public:
	Pawn(bool, const string&);
	~Pawn();
};

