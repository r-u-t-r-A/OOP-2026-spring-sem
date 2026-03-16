#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

std::vector<std::string> readInput();

std::vector<std::string> processString(std::vector<std::string> wordsInput);
  
void printWords(std::vector<std::string> wordsInput);

#endif