#ifndef _BOARD_
#define _BOARD_

#include <vector>

class Board {

private:
    int lines{8}, columns{8};
    
    std::vector <std::vector <int>> board;

public:    
    Board() : board(lines, std::vector <int> (columns, 0)){}

    void display() const;
};





#endif