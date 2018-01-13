#include <iostream>
#include <list>

using namespace std;

class Box{
        bool occupied;
    public:
        Box();
        Box(bool);
        void set_occpancy(bool) {occupied = (occupied = true) ? false:true;}
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
        cout << "not";
    }
    cout << " occupied";
    return 0;
} 
