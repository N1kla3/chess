#include "ChessPiece.h"
#include <iostream>


ChessPiece::ChessPiece(const string& side)
{
	symbol = " ";
    this->side = &side;

}


ChessPiece::~ChessPiece()
{
}

const char* ChessPiece::toString()
{
	return this->symbol;
}
