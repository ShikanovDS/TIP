#include <iostream>
#include <string>
using namespace std;
 int main(){
    int x,n;
    cin >> x >> n;
    string cur = to_string(x);
    for (int i = 1; i < n; i++) {
        string nexts = "";
        int lenc = cur.length();
        for(int j = 0; j < lenc; j++){
            int k = 1;
            while(j + 1 < lenc && cur[j] == cur[j+1]){
                j++;
                k++;
            }
            nexts += to_string(k) + cur[j];
        }
        cur = nexts;

    }
    cout << cur;
    return 0;
 }
#67