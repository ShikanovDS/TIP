#include <iostream>
#include "mkad.h"

int main() {
    int v, t;

    std::cout << "Введите скорость байкера (км/ч): ";
    std::cin >> v;

    std::cout << "Введите время в пути (ч): ";
    std::cin >> t;

    int mark = calculateMark(v, t);

    std::cout << "Байкер Вася остановится на отметке: "
              << mark << " км" << std::endl;

    return 0;
}