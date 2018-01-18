#include "../include/objects.h"

Car::Car(){
    // Not sure if allow object without proper initialization.
    size = 1;
    x_pos = 0;
    y_pos = 0;
    horz_dir = true;
}

Car::Car(unsigned int s,unsigned int x, unsigned int y, bool b){
    size = s;
    x_pos = x;
    y_pos = y;
    horz_dir = b; 
}
