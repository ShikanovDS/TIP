
#include <iostream>

using namespace std;

int main(){
    double x,y,c;
    cin >> x; // задаём переменные
    cin >> y;
    c = 0.3*(3*x - 4*y) - 5*(0.2*x-y); //формула из варианта 25
    cout << c; //выводим результат
    return 0;
}
