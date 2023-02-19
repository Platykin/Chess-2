#include <vector>
#include <iostream>

#include "board.h"

int main(){
    char press;
    Board board;
    std::cout << "Object 'board' created" << std::endl;


    while (press != 'q'){
        board.display();
        std::cin >> press;
    }

    return 0;
}