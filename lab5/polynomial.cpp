#include "polynomial.h"
#include <cmath>
#include <algorithm>

Polynomial::Polynomial() {
    coefficients = {0.0, 7.0, 0.0, -1.3, 2.0};
}

Polynomial::Polynomial(const std::vector<double>& terms) {
    coefficients = terms;
}

Polynomial Polynomial::operator+(const Polynomial& source) const {
    size_t maxSize = std::max(coefficients.size(), source.coefficients.size());
    std::vector<double> result(maxSize, 0.0);
    
    for (size_t i = 0; i < maxSize; ++i) {
        double a = (i < coefficients.size()) ? coefficients[i] : 0.0;
        double b = (i < source.coefficients.size()) ? source.coefficients[i] : 0.0;
        result[i] = a + b;
    }
    return Polynomial(result);
}

Polynomial Polynomial::operator-(const Polynomial& source) const {
    size_t maxSize = std::max(coefficients.size(), source.coefficients.size());
    std::vector<double> result(maxSize, 0.0);
    
    for (size_t i = 0; i < maxSize; ++i) {
        double a = (i < coefficients.size()) ? coefficients[i] : 0.0;
        double b = (i < source.coefficients.size()) ? source.coefficients[i] : 0.0;
        result[i] = a - b;
    }
    return Polynomial(result);
}

Polynomial Polynomial::operator*(double scalar) const {
    std::vector<double> result = coefficients;
    for (double& val : result) {
        val *= scalar;
    }
    return Polynomial(result);
}

Polynomial Polynomial::operator*(const Polynomial& source) const {
    if (coefficients.empty() || source.coefficients.empty()) {
        return Polynomial(std::vector<double>());
    }
    
    std::vector<double> result(coefficients.size() + source.coefficients.size() - 1, 0.0);
    for (size_t i = 0; i < coefficients.size(); ++i) {
        for (size_t j = 0; j < source.coefficients.size(); ++j) {
            result[i + j] += coefficients[i] * source.coefficients[j];
        }
    }
    return Polynomial(result);
}

double Polynomial::operator[](int index) const {
    if (index >= 0 && index < static_cast<int>(coefficients.size())) {
        return coefficients[index];
    }
    return 0.0; 
}

std::ostream& operator<<(std::ostream& stream, const Polynomial& source) {
    if (source.coefficients.empty()) {
        stream << "0";
        return stream;
    }

    bool isFirst = true;
    bool allZero = true;

    for (int i = source.coefficients.size() - 1; i >= 0; --i) {
        if (source.coefficients[i] != 0.0) {
            allZero = false;
            
            if (!isFirst) {
                if (source.coefficients[i] > 0) {
                    stream << " + ";
                } else {
                    stream << " - ";
                }
            } else if (source.coefficients[i] < 0) {
                stream << "-";
            }

            stream << std::abs(source.coefficients[i]);

            if (i > 0) {
                stream << "x^" << i;
            }
            
            isFirst = false;
        }
    }
    
    if (allZero) {
        stream << "0";
    }
    
    return stream;
}

double Polynomial::solve(double x) const {
    double result = 0.0;
    for (size_t i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x, i);
    }
    return result;
}

std::vector<double> Polynomial::solve() const {
    std::vector<double> roots;
    if (coefficients.empty()) {
        return roots; 
    }

    if (coefficients.size() == 2) {
        double root = -coefficients[0] / coefficients[1];
        roots.push_back(root);
        return roots;
    }

    if (coefficients.size() == 3) {
        double a = coefficients[2];
        double b = coefficients[1];
        double c = coefficients[0];
        
        double discriminant = b * b - 4 * a * c;
        
        if (discriminant > 0) {
            double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
            roots.push_back(root1);
            roots.push_back(root2);
        }
    }

    return roots;
}