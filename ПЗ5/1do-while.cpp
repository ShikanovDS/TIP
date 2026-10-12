#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x;
    cin >> y;
    int c = 0;
    double sum = x;
    do {
        if(sum >= y){
            break;
        }
        sum = sum * 1.1;
        c = c + 1;
    }while(sum < y);
    cout << c;
    return 0;
}