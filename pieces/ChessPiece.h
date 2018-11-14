#pragma once
#include <string>

using namespace::std;

class ChessPiece
{
public:
	const char* symbol;
	bool blocked;
	ChessPiece(const char*, bool);
	~ChessPiece();
	const char* toString();
};

