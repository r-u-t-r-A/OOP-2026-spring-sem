#include "func.h"
#include <iostream>
#include <cctype>
#include <unordered_set>

std::unordered_map<char, int> countCharacters(const std::string& input) {
    std::unordered_map<char, int> charCounts;
    
    for (char c : input) {
        if (c != ' ') { 
            char lower_c = std::tolower(static_cast<unsigned char>(c)); 
            charCounts[lower_c]++;
        }
    }
    
    return charCounts;
}

void printCharacterCounts(const std::string& originalInput, const std::unordered_map<char, int>& counts) {
    std::unordered_set<char> printedChars;
    
    for (char c : originalInput) {
        if (c != ' ') {
            char lower_c = std::tolower(static_cast<unsigned char>(c));
            
            if (printedChars.find(lower_c) == printedChars.end()) {
                std::cout << lower_c << "=" << counts.at(lower_c) << "\n\n";
                printedChars.insert(lower_c);
            }
        }
    }
}