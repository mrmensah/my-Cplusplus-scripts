/**
 *  This code converts numbers in base 10 to any base
 **/

#include <iostream>
#include <string.h>
#include <cmath>

int main(){
    // Initializing the variables
    int number{};
    int base {};
    std::string Hex[6] = {"A", "B", "C", "D", "E", "F"};
    std::string result{};
    
    //Accepting user input
    std::cout << "Enter the number: ";
    std::cin >> number;
    std::cout << "Enter the base: ";
    std::cin >> base;
    int temp = number;

    // implementation of the code
    for(int i{}; temp > 0; i++){
        int remainder = (temp%base);
        std::string sRemainder = std::to_string(remainder);
        if (base == 16){
            if (sRemainder == "10"){ sRemainder = Hex[0];}
            else if (sRemainder == "11"){ sRemainder = Hex[1];}
            else if (sRemainder == "12"){ sRemainder = Hex[2];}
            else if (sRemainder == "13"){ sRemainder = Hex[3];}
            else if (sRemainder == "14"){ sRemainder = Hex[4];}
            else if (sRemainder == "15"){ sRemainder = Hex[5];}
        }
        result = (sRemainder) + result;
        temp /= base;
    }

    // Displaying the results
    std::cout << number << " base " << base << " = " << result << std::endl; 

    return 0;
}