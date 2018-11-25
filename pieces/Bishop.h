#pragma once
#include "ChessPiece.h"
#include <cstring>


class Bishop :
	public ChessPiece
{
public:
	Bishop(const char*, bool, string);
	virtual void canMove(int, int, ChessBoard*)override;
	~Bishop();
};

