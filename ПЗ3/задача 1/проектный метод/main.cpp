#include <iostream>
#include <cmath>
#include "geometry.h"

int main() {
    double a, b;
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;

    std::cout << "c = " << hypotenuse(a, b) << "\n";
    return 0;
}