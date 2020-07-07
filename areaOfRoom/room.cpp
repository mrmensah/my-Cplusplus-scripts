#include "room.h"

double room::areaInFeet(){
    return length * width;
    
}

double room::areaInSquareMeter(){
    return length * width * feetFactor;
    
}

void room::getParams(double length_, double width_){
    length = length_;
    width  = width_;
}