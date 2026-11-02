#include <iostream>
#include <fstream>
#include <unordered_set>
#include <cctype>
using namespace std;
int main(){
    ifstream in("input1.txt");
    ofstream out("output1.txt");
    unordered_set<char> banned = {'u','s','e','r','a','g','m','n','t'};
    char ch;
    while(in.get(ch)){
        if (banned.find(std::tolower(ch)) == banned.end()){
            out.put(ch);
        }
    }
    return 0;
}