#include <vector>
#include <iostream>

#include "board.h"

void Board::display() const {
    for (int i{0}; i < lines; i++){
        for (int j(0); j < columns; j++){
            std::cout << " " << j << " ";
        }
        std::cout << std::endl;
    }
}