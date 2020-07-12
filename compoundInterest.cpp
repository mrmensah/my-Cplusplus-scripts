/**
This code will calculate the compound interest given the principal and the rate and time

**/

#include <iostream>
#include <cmath>

double interest{};
double rate{};
double compoundTime{};
double principal{};
double Time{};

int main(){
    //Taking user input
    std::cout << "Enter the principal: ";
    std::cin >> principal;
    std::cout << "Enter the time: ";
    std::cin >> Time;
    std::cout << "Enter the interest rate: ";
    std::cin >> rate;
    std::cout << "Enter the compound time: ";
    std::cin >> compoundTime;

    // Calculating the compound interest.
    rate = rate / 100;  // converting the rate to fraction
    double power = compoundTime * Time;
    double ratePerCompoundTime =(1 + (rate / compoundTime)) ;
    interest = principal * pow(ratePerCompoundTime, power);

    std::cout << "The compound interest will be : " << interest << std::endl;
    return 0;
}