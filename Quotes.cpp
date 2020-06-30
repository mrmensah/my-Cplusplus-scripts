/**
This program prompts for a quote and an author.
Display the quotation and author as shown in the example
output.

What is the quote? These aren't the droids you're looking for.
Who said it? Obi-Wan Kenobi
Obi-Wan Kenobi says, "These aren't the droids
you're looking for."
**/

/** Pseudocode
    initialize author_name variable
    initialize quote variable
    
    Prompt user for quote 
    Prompt user for author
    
    Display Qoute with Author's Name
**/

#include <iostream>
#include <string.h>

int main(){
    // Initializing variables
    std::string authorName{};
    std::string quote{"Hello World"};
    // Taking quote
    std::cout << "Enter the quote: ";
    getline(std::cin, quote);
    // Taking author's Name
    std::cout << "Enter the author's name: ";
    getline(std::cin, authorName);
    // Displaying the quote with the author's name
    std::cout << authorName + " says, " + '"' + quote + '"' << std::endl;

    return 0;
}
