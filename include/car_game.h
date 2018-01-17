//This is a header for car_game
// Includes definitions of class:
//      Box
//--------------------------------
#include <vector>

using namespace std;

class Box{
        bool occupied;
    public:
        Box();
        Box(bool);
        void set_occupancy(bool b) {occupied = b;}
        int is_occupied(void) {return occupied;}
};

class Board{
// Board descibes the gameboard, private class varaible
// is a list of lists, where the lists represents rows. The lists
// contains objects Boxes, one per column.
        vector<vector<Box> > board;
    public:
        Board(void);
        Board(int, int);
        void print_board();
        int amount_cols();
        int amount_rows();
    private:
        vector<Box> generate_row(int);
        vector<vector<Box> > populate_board(int,int);
};
