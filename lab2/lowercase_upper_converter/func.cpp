#include "func.h"

std::vector<std::string> readInput() {
    std::vector<std::string> wordsInput;
    for (int i = 0; i < 5; i++) {
        std::string temp;
        std::cin >> temp;
        wordsInput.insert(wordsInput.begin() + i, temp);
    }
    return wordsInput;
}

std::vector<std::string> processString(std::vector<std::string> wordsInput) {
    std::sort(wordsInput.begin(), wordsInput.end());
    for (std::string &word : wordsInput) {
        if (word.length() >= 4) {
            word[3] = toupper(word[3]);
        }
    }
    return wordsInput;
}

void printWords(std::vector<std::string> wordsInput) {
    for (int i = 0; i < 5; i++) {
        std::cout << wordsInput[i] << " ";
    }
    std::cout << std::endl;
} 