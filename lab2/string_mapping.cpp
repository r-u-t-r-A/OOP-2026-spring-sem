#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    map <string, int> words;
    string keys[4];
    for (int i = 0; i < 4; i++) {
        string temp;
        cin >> temp;
        words.insert({temp, temp.length()});
        keys[i] = temp;
    }
    for (int j = 0; j < 4; j++) {
        cout << keys[j] << "=" << words.at(keys[j]) << " ";
    }
}