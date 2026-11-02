#include <iostream>
using namespace std;

long long faste(long long base,long long n){
    long long res = 1;
    for(;n>0;n = n / 2){
        if (n % 2 != 0){
            res = res * base;

        }
        base = base * base;
    }
    return res;
}
int main(){
    cout << faste(10,12);
    return 0;
}