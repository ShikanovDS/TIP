#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x;
    cin >> y;
    int c = 0;
    while (x < y){
        c = c + 1;
        x = x * 1.1;
    }
    cout << c;
    return 0;
}