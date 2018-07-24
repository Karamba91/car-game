#include "../include/objects.h"

Car::Car(){
    // Not sure if allow object without proper initialization.
    size = 1;
    x_pos = 0;
    y_pos = 0;
    horz_dir = true;
}

Car::Car(int s, int x, int y, bool b){
    size = s;
    x_pos = x;
    y_pos = y;
    horz_dir = b; 
}

int Car::c_size(){
    return size;
}
int Car::c_x_pos(){
    return x_pos;
}

int Car::c_y_pos(){
    return y_pos;
}

bool Car::c_horz_dir(){
    return horz_dir;
}