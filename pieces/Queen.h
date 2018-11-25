#pragma once
#include "ChessPiece.h"
class Queen :
	public ChessPiece
{
public:
	Queen(const char*, bool, string);
	~Queen();
};

