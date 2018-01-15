#include "../include/car_game.h"

using namespace std;

Box::Box(){
    occupied=false;
}
Box::Box(bool occu){
    occupied=occu;
}

Board::Board(){
    list<int> l1;
    l1.push_back(1);
}
Board::Board(int row, int col){
   list<int> l1;
   l1.push_back(row);
   l1.push_back(col);
}

list<Box> Board::generate_row(int col){
    list<Box> l;
    for(int i = 1; i <= col; i++){
        l.push_back(Box());
    }
    return l;
}

//Board::populate_board(int row, int col){
//    list<Box> row = [Box()];
//    list<list<Box>> board = [row];
//    return board;
//}

