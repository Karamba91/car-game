//This is a header for car_game
// Includes definitions of class:
//      Box
//--------------------------------
#include <list>

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
        list< list<Box> > board;
    public:
        Board(void);
        Board(int, int);
        void print_board();
    private:
        list<Box> generate_row(int);
        list< list <Box> > populate_board(int,int);
};
