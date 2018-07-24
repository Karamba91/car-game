//This is a header for car_game
// Includes definitions of class:
//      Box
//      Board
//--------------------------------
#include <vector>
#include "objects.h"

using namespace std;

class Box{
        bool occupied;
    public:
        Box();
        Box(bool);
        void set_occupancy(bool b) {occupied = b;}
        bool is_occupied(void) {return occupied;}
};

class Board{
// Board descibes the gameboard, private class varaible
// is a list of lists, where the lists represents rows. The lists
// contains objects Boxes, one per column.
        vector<vector<Box> > board;
        vector<Car> occupants;
    public:
        Board(void);
        Board(int, int);
        void print_board();
        int amount_cols();
        int amount_rows();
        int amount_cars();
        void add_car(int, int, int, bool);
    private:
        vector<Box> generate_row(int);
        vector<vector<Box> > populate_board(int,int);
        bool valid_pos(Car);
};
