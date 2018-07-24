#include "../include/car_game.h"
#include <string>
#include <stdio.h>
#include <iostream>

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
    printf("Object with %d row(s) and %d col(s) created\n", row, col);
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
    string board_str = "";
    for (int i = 0; i< Board::amount_rows(); i++){
        vector<Box> temp_row = board[i];
        for (unsigned int j = 0; j < temp_row.size(); j++){
            if (board[i][j].is_occupied()){
                board_str+="1";
            }else{
                board_str+="0";
            }
        }
        board_str+="\n";
    }
    printf("%s\n",board_str.c_str());
}

int Board::amount_rows(){
    return board.size();
}

int Board::amount_cols(){
    return board[0].size();
}
bool Board::valid_pos(Car car){
    if(car.c_horz_dir() && (((car.c_x_pos() + car.c_size()) >= amount_cols()) || (car.c_y_pos() >= amount_rows()))) {
        cout << "Outside of board, bad initial position or too large vehicle\n";
        return false;
    } else if (!car.c_horz_dir() && (((car.c_y_pos() + car.c_size()) >= amount_rows()) || (car.c_x_pos() >= amount_cols()))) {
        cout << "Outside of board, bad initial position or too large vehicle\n";
        return false;
    } else if ((car.c_x_pos() < 0) || (car.c_y_pos() < 0)) {
        cout << "Outside of board, bad initial position\n";
        return false;
    }
    return true;
}

void Board::add_car(int x_pos, int y_pos, 
                    int size, bool horz_dir) {
    Car car = Car(x_pos, y_pos, size, horz_dir);
    if (valid_pos(car)) {
        occupants.push_back(car);
    }
}

int Board::amount_cars(){
    return occupants.size();
}
