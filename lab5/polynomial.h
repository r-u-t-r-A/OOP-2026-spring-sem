#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <list>
#include <iostream>

class Polynomial {
private:
    std::vector<double> coefficients;

public:
    Polynomial();
    Polynomial(const std::vector<double>& terms);

    Polynomial operator+(const Polynomial& source) const;
    Polynomial operator-(const Polynomial& source) const;
    Polynomial operator*(double scalar) const;
    Polynomial operator*(const Polynomial& source) const;
    double operator[](int index) const;

    friend std::ostream& operator<<(std::ostream& steam, const Polynomial& source);
};

#endif // POLYNOMIAL_H