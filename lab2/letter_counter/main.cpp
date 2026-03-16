#include <iostream>
#include <string>
#include "func.h"

int main() {
    std::string input;
    
    std::cout << "input: ";
    if (std::getline(std::cin, input)) {
        
        std::unordered_map<char, int> counts = countCharacters(input);
        
        std::cout << "\noutput:\n\n";
        printCharacterCounts(input, counts);
    }
    
    return 0;
}