#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string echo;
    cout << "Input: ";
    cin >> echo; 
    reverse(echo.begin(), echo.end());
    cout << "output: " << echo << endl;

}