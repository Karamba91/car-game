#include "../include/car_game.h"
#include <stdio.h>

using namespace std;

Box::Box(){
    occupied=false;
}
Box::Box(bool occu){
    occupied=occu;
}

Board::Board(){
// Defualt size if not defined is 2-by-2
    board = populate_board(2,2);
}
Board::Board(int row, int col){
    board = populate_board(row,col);
}

list<Box> Board::generate_row(int col){
    list<Box> l;
    for(int i = 1; i <= col; i++){
        l.push_back(Box());
    }
    return l;
}

list< list<Box> >Board::populate_board(int row, int col){
    list<list <Box> > board;
    //Just to ignore warning
    //printf("The board is set to be %d-by-%d",row,col);
    // Ignore command ends here
    for (int i = 0; i < row; i++){
        board.push_back(Board::generate_row(col));
    }
    return board;
}

void Board::print_board(){
    printf("Will print a graphical layout of the board when implemented\n");
}
