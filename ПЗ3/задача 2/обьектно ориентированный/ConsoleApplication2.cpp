#include <iostream>
#include <cmath>
#include <string>

class Biker {
private:
    std::string name;
    double speed;
    const double MKAD_LENGTH = 109.0;

public:
    Biker(const std::string& n, double v) : name(n), speed(v) {}

    double calculatePosition(double time) const {
        double distance = speed * time;
        double position = fmod(distance, MKAD_LENGTH);
        if (position < 0) {
            position += MKAD_LENGTH;
        }
        return position;
    }

    void printResult(double time) const {
        std::cout << "Байкер " << name << " остановится на отметке: "
            << calculatePosition(time) << " км" << std::endl;
    }
};

int main() {
    double v, t;

    std::cout << "Введите скорость байкера (км/ч): ";
    std::cin >> v;

    std::cout << "Введите время движения (часы): ";
    std::cin >> t;

    Biker vasya("Вася", v);
    vasya.printResult(t);

    return 0;
}