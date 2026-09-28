#include <iostream>
using namespace std;

long long getMark(long long v, long long t) {
    long long distance = v * t;
    long long mark = 109;
    if (mark < distance) {
        distance = mark;
    }
    return mark;
}

int main() {
    long long v, t;
    cin >> v >> t;
    cout << getMark(v, t) << endl;
    return 0;
}