#include <iostream>

using namespace std;

double hypotenuse(double a, double b) {
    return sqrt((a * a) + (b * b));
}

int main() {
    double a, b;
    cin >> a;
    cin >> b;
    cout << hypotenuse(a, b);
    return 0;
}