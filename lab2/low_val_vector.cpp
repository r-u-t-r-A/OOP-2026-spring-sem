#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<float> test_vector = {0};
    
    for (int i = 0; i < 5; i++) {
        float temp = 0.0;
        cin >> temp;
        test_vector.insert(test_vector.begin() + i, temp);
    }
    float lowest_val = test_vector[0];
    for (int j = 0; j < 5; j++) {
        if (lowest_val > test_vector[j]) {
            lowest_val = test_vector[j];
        }
    }
    cout << lowest_val << endl;

}