#include <iostream>
#include <list>

using namespace std;

class Box{
        bool occupied;
    public:
        Box();
        Box(bool);
        void set_occupancy(bool) {occupied = (occupied = true) ? false:true;}
        int is_occupied(void) {return occupied;}
};

Box::Box(){
    occupied=false;
}
Box::Box(bool occu){
    occupied=occu;
}

int main(){
    Box box(true);
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
    return 0;
} 
