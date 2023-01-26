#include <vector>
#include <iostream>

   int getIndex(int col, int row);
   
   int getIndex(int col, int row){ 
        return 8 * col + row;
    }

int main(){


    // -1: Empty tile, 1: Rook, 2: Knight, 3: Bishop, 4: Queen, 5: King, 6: Pawn
   int board[64] = {
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    6, 6, 6, 6, 6, 6, 6, 6,
    1, 2, 3, 4, 5, 3, 2, 1
    };

    for (size_t i{0}; i < 64; i++){
        if (i % 8 == 0) {std::cout << "\n";}
        std::cout << board[i] << " ";
    }
    std::cout << "\n";

    return 0;
}