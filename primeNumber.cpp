/**
 * This program uses the Rabin-Miller theory to test for prime numbers
 * It takes the user input and checks whether the number is prime or not.
 * **/

#include <iostream>
#include <cmath>

int number{};
int test{};
int x[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
    // Taking the user input
    std::cout << "Please Enter Your Number: ";
    std::cin >> number;

    int xSize = sizeof(x)/sizeof(x[0]);     //Taking the size of the array
    int num = number - 1;

    for (int i : x){
        if (number % i !=0){
            test = pow(i, num);
            break;
        }
    }

    if (test % number == 1){
        std::cout << number << " is a prime number" << std::endl;
    }else{
        std::cout << number << " is not a prime number" << std::endl;
    }
    return 0;
}