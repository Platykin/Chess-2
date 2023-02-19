#include <vector>
#include <iostream>

#include "board.h"

void Board::display() const {
    std::cout << "Display called" << std::endl;
    for (int i{0}; i < lines; i++){
        for (int j{0}; j < columns; j++){
            std::cout << " " << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}