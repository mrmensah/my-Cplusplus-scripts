/**
Create a program that calculates the area of a room. Prompt
the user for the length and width of the room in feet. Then
display the area in both square feet and square meters.

Example Output
What is the length of the room in feet? 15
What is the width of the room in feet? 20
You entered dimensions of 15 feet by 20 feet.
The area is
300 square feet
27.871 square meters

**/


#include <iostream>
#include "room.h"

// Initializing the variables
double Length{};
double Width{};

int main(){
    room r; // Invoking the room class

    // Taking user input
    std::cout << "What is the length of the room in feet? :";
    std::cin >> Length;
    std::cout << "What is the width of the room in feet? :";
    std::cin >> Width;

    // r.getParams(Length, Width);
    double feetArea = r.areaInFeet();
    double squareArea = r.areaInSquareMeter();
    
    std::cout << "The area of the room is " << std::endl; 
    std::cout << feetArea << " square feet" << std::endl;
    std::cout << squareArea << " square meters" << std::endl;

    return 0;
}