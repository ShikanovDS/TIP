#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main(){
    ifstream in("stud.txt");
    ofstream out("studid.txt");
    string name,sname;
    set<int> used;
    srand(time(0));
    while(in >> name >> sname){
        int id;
        do {
            id = rand() % 100000;
        }while(used.count(id));
        used.insert(id);
        out << id << name << sname << "\n";
    }
return 0;
}