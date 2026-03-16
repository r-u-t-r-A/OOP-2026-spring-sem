#include "func.h"

int main(void) {
    std::vector<std::string> words;
    words = readInput();
    words = processString(words);
    printWords(words);
}
