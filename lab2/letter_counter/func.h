#ifndef LETTER_COUNTER_H
#define LETTER_COUNTER_H

#include <string>
#include <unordered_map>

std::unordered_map<char, int> countCharacters(const std::string& input);

void printCharacterCounts(const std::string& originalInput, const std::unordered_map<char, int>& counts);

#endif 