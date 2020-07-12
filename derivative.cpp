/**
 * Calculating derivatives to the second power.
 * The code completely ignores the value with no variable attached to it since it will be zero in 
 * final answer.
**/

#include <iostream>
double coeffOne{};
double coeffTwo{};

int main(){
    std::cout << "Enter the coefficient of the highest power: ";
    std::cin >> coeffOne;
    std::cout << "Enter the coefficient of the next power: ";
    std::cin >> coeffTwo;

    double newCoeffOne =  2*coeffOne;
    double newCoeffTwo = coeffTwo;
    std::cout << "The derivative is : " << newCoeffOne << "x + " << newCoeffTwo << std::endl; 

    return 0;
}