#include <iostream>
using namespace std;

long long cw(int n){
    if (n <= 1) return 1;
    return cw(n-1) + cw(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << cw(n);
    return 0;
}