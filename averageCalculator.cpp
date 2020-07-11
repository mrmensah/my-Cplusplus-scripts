/**
This program is an average calculator.
It takes an array of numbers and divide by its length to find the avearage
**/

#include <iostream>
#include <string.h>

// Initializing variables
int arrayLength{};
double number[]{};
double average{};
float numSum{};


int main(){
    // Taking the array of numbers from the user
    std::cout << "Please enter the total number of numbers you want to take average of: ";
    std::cin >> arrayLength;

    //Using a for loop to take the numbers
    for (int i{}; i < arrayLength; i++){
        std::cout << "Enter the number: ";
        std::cin >> number[i];
        numSum += number[i];
    }

    // Computing the average
    average = numSum/arrayLength;
    std::cout << "The average of is " << average << std::endl;

    return 0;
}
