#pragma once
#include "ChessPiece.h"
#include <cstring>
#include <vector>

enum Direction { RIGHT_DOWN, LEFT_DOWN, LEFT_UP, RIGHT_UP } ;

class Bishop :
	public ChessPiece
{
public:
	Bishop(bool);
	vector<int>* canMove(int, int, ChessBoard*)override;
private:
    vector<int> vec;
    void oneDirection(int, int, Direction, ChessBoard*);
	~Bishop();
};

