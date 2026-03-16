#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int input = 0;
    vector<long> vector = {1};
    cin >> input;
    if (input == 0) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 1; i <= input; i++) {
        vector.insert(vector.begin() + i, vector[i - 1] * i);
        std::cout << vector[i] << " ";
    }
    std::cout << endl;
}