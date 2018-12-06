
#include "Pawn.h"


Pawn::Pawn(bool blocked, string side):ChessPiece(blocked, side)
{
    symbol = "P";
}


Pawn::~Pawn()
{
}
