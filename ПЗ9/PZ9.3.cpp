#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string toBinary(string numStr) {
    long long num = stoll(numStr); 
    if (num == 0) return "0";
    
    string bin = "";
    while (num > 0) {
        bin = to_string(num % 2) + bin; 
        num /= 2;
    }
    return bin;
}

int main() {
    ifstream in("input3.txt");
    ofstream out("output3.txt");
    
    string s;
    if (getline(in, s)) { 
        string currentNum = "";
        
        for (char c : s) {
            if (isdigit(c)) {
                currentNum += c; 
            } else {
                if (!currentNum.empty()) {
                    out << toBinary(currentNum); 
                    currentNum = "";            
                }
                out << c; 
            }
        }

        if (!currentNum.empty()) {
            out << toBinary(currentNum);
        }
    }
    
    return 0;
}