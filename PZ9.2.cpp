#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fin1("input1.txt");
    ifstream fin2("input2.txt");
    
    string X, Y;
    fin1 >> X;
    fin2 >> Y;

    if (X.find(Y) != string::npos) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}