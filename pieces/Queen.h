#pragma once
#include "ChessPiece.h"
class Queen :
	public ChessPiece
{
public:
	Queen(bool, const string&);
	~Queen();
};

