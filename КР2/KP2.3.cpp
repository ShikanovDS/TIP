#include <iostream>
using namespace std;

void subway(int n, int from, int to,int b){
    if (n==0){
        return;
    }
    subway(n-1,from,b,to);
    cout << "Ingredient" << n << "move" << "from" << from <<  "to" << to << "\n";
    subway(n-1,to,b,from);
}

int main(){
    int n;
    cin >> n;
    subway(n,1,3,2);
    return 0;
}