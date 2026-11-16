#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;

int main(){
    string st;
    getline(cin,st);
    for(char& c : st)
        if(!isalpha((unsigned char) c) && c != '-')
            c = ' ';
        set<string> un;
        istringstream ss(st);
        string x;
        while(ss >> x){
            for(char& c : x)
                c = tolower((unsigned char)c);
            un.insert(x);
        }
        for(const auto& x : un)
            cout << x << "\n";
    return 0;
}