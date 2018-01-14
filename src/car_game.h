//This is a header for car_game
// Includes definitions of class:
//      Box
//--------------------------------

class Box{
        bool occupied;
    public:
        Box();
        Box(bool);
        void set_occupancy(bool b) {occupied = b;}
        int is_occupied(void) {return occupied;}
};
