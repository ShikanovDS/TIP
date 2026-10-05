#include <iostream>
#include <cmath> // для функции sqrt (корень)

using namespace std;

int main() {
    double a, b, c;
    char symbol;

    // Считываем коэффициенты многочлена и управляющий символ
    if (!(cin >> a >> b >> c >> symbol)) {
        return 0; 
    }
    // В зависимости от символа делаем нужное действие
    if (symbol == 'E') {
        //выводим имя и фамилию
        cout << "Шиканов Дмитрий" << endl;
    } 
    else if (symbol == 'p') {
        //ищем корни 0
        if (a == 0 && b == 0) {
            // Если a и b равны 0 то x может быть любым (при c=0) или корней нет
            if (c == 0) {
                cout << "x is any real number" << endl;
            } else {
                cout << "No roots" << endl;
            }
        } 
        else if (a == 0) {
            // Если a = 0 уравнение становится линейным
            cout << "x = " << -c / b << endl;
        } 
        else {
            // дискриминант
            double D = b * b - 4 * a * c;

            if (D > 0) {
                double x1 = (-b + sqrt(D)) / (2 * a);
                double x2 = (-b - sqrt(D)) / (2 * a);
                cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
            } 
            else if (D == 0) {
                double x = -b / (2 * a);
                cout << "x = " << x << endl;
            } 
            else {
                cout << "No real roots" << endl;
            }
        }
    } 
    else if (symbol == 'h') {
        //Считываем еще два числа и находим большее из них
        double num1, num2;
        cin >> num1 >> num2;

        if (num1 > num2) {
            cout << num1 << endl;
        } else {
            cout << num2 << endl;
        }
    }
    return 0;
}
