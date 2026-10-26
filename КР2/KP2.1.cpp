#include <iostream>

using namespace std;

long long faste(long long base, long long n){
    long long res = 1;
    while(n > 0){
        if(n%2 != 0) res = res * base;
        base = base * base;
        n = n / 2;
    }
    return res;
}

int main() {
    cout << faste(10,12);
    return 0;
}