#include "ChessBoard.hpp"

using namespace Blagama;

int main()
{
    ChessBoard x;
    x.Print();
    x.Move(ChessPieceType::KNIGHT, 'c', 4);
}