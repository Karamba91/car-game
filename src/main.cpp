#include <iostream>
#include "../include/car_game.h"

using namespace std;

int main(){
    /*Box box(true);
    cout <<  "The new box is";
    if (!box.is_occupied()){
        cout << " not";
    }
    cout << " occupied\n";
    //Change occupancy of object
    box.set_occupancy(false);

    cout << "Same object but changed varaiable. Box is now";
    if (!box.is_occupied()){
        cout << " not";
    }
    cout << " occupied\n";
    cout << "This is the new file\n";*/
    Board board(2,2);
    board.print_board();
    return 0;
};
