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
    board = populate_board(row, col);
    printf("Object with %d row(s) and %d col(s) created", row, col);
}

vector<Box> Board::generate_row(int col){
    vector<Box> row;
    for(int i = 0; i < col; i++){
        row.push_back(Box());
    }
    return row;
}

vector<vector<Box> > Board::populate_board(int row, int col){
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

int Board::amount_rows(){
    return board.size();
}

int Board::amount_cols(){
    return board[0].size();
}
