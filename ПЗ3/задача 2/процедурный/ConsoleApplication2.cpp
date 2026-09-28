#include <iostream>

using namespace std;

int main() {
    double y, t, res;
    int s = 109;
    cout << "введи скорость и время\n";
    cin >> y;
    cin >> t;
    res = y * t;
    if (res > s) {
        res = s;
    }
    cout << "остановится на" << res;
    return 0;
}