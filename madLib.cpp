/** This is a program for programming exercise in a book by Brian Hogan

Create a simple mad-lib program that prompts for a noun,
a verb, an adverb, and an adjective and injects those into a
story that you create.

Example Output
Enter a noun: dog
Enter a verb: walk
Enter an adjective: blue
Enter an adverb: quickly
Do you walk your blue dog quickly? That's hilarious!
**/

/**
    Pseudo code

    Initialize noun
    Initialize verb
    initialize adjective
    initialize adverb
    intialize sentence

    prompt user for noun
    prompt user for verb
    prompt user for adjective
    prompt user for adverb

    construct sentence

    Output constructed sentence
**/

#include <iostream>
#include <strings.h>

std::string noun{};
std::string verb{};
std::string adjective{};
std::string adverb{};

int main(){
    std::cout << "This code describes how an animal climbs a tree"<< std::endl;

    //Taking user input
    std::cout << "Enter a noun: ";
    getline(std::cin,noun);

    std::cout << "Enter a verb: ";
    getline(std::cin,verb);

    std::cout << "Enter a adjective: ";
    getline(std::cin,adjective);

    std::cout << "Enter a adverb: ";
    getline(std::cin,adverb);

    std::cout << "The " + noun + " " + verb + " the " + adjective + " tree " + adverb + "."<< std::endl;

    return 0;   //return zero
}