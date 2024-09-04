#include <iostream>

/*
We want to make 12 bitboards to represent each color and piece type 
(white, black) (pawn, bishop, knight, rook, queen, king)
*/
typedef uint64_t U64;
const U64 W_PAWN_START = 0x000000000000ff00;
const U64 W_BISHOP_START = 0x0000000000000024;
const U64 W_KNIGHT_START = 0x000000000000ff00;
const U64 W_ROOK_START = 0x000000000000ff00;
const U64 W_QUEEN_START = 0x000000000000ff00;
const U64 W_KING_START = 0x000000000000ff00;
const U64 B_PAWN_START = 0x000000000000ff00;
const U64 B_BISHOP_START = 0x000000000000ff00;
const U64 B_KNIGHT_START = 0x000000000000ff00;
const U64 B_ROOK_START = 0x000000000000ff00;
const U64 B_QUEEN_START = 0x000000000000ff00;
const U64 B_KING_START = 0x000000000000ff00;


int main()
{
    std::cout << "Hello World!";
    return 0;
}