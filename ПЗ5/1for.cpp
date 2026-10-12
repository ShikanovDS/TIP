#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x;
    cin >> y;
    int c = 0;
    double sum = x;
    for(;sum < y;c++){
        sum = sum * 1.1;
    }
    cout << c;
    return 0;
}