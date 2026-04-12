#include <iostream>
#include <vector>
#include "polynomial.h"

int main() {
   /*
    Polynomial p1(std::vector<double>{3.0, 2.0, 6.0});
    Polynomial p2(std::vector<double>{2.0, 0.0, -3.0, 4.0});

    std::cout << "P1: " << p1 << std::endl;
    std::cout << "P2: " << p2 << std::endl;
    std::cout << "P1 + P2: " << (p1 + p2) << std::endl;
    std::cout << "P1 - P2: " << (p1 - p2) << std::endl;
    std::cout << "P1 * 2: " << (p1 * 2.0) << std::endl;
    std::cout << "P1 * P2: " << (p1 * p2) << std::endl;
    std::cout << "P1[2]: " << p1[2] << std::endl;
    std::cout << "P2[1]: " << p2[1] << std::endl;
*/
    Polynomial p3(std::vector<double>{6.0, -5.0, 1.0});
    std::cout << "p3: " << p3 << std::endl;
    std::vector<double> roots = p3.solve();
    std::cout << "p3 roots: ";
    for (double root : roots) {
        std::cout << "x = " << root << ", ";
    }
    std::cout << std::endl;
    std::cout << "p3(3) = " << p3.solve(3.0) << std::endl; 
    return 0;
}