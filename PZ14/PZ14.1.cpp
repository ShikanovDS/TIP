#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string x;
    getline(cin,x);
    stack<char> sk;
    for (char c : x){
        if (c == '(') sk.push(')');
        else if (c == '[') sk.push(']');
        else if (c == '{') sk.push('}');
        else if (c == ')' || c == ']' || c == '}'){
            if (sk.empty() || sk.top() != c){cout << "no"; return 0;}
            sk.pop();
        }
    }
    cout << (sk.empty() ? "yes" : "no");
    return 0;

}
