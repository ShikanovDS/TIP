#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> calories(n);
    for (int i = 0; i < n; i++) {
        cin >> calories[i];
    }

    if (d > 1) {
        cout << 0 << endl;
        return 0;
    }

    int min_cal = calories[0];
    int max_cal = calories[0];
    
    for (int i = 1; i < n; i++) {
        if (calories[i] < min_cal) min_cal = calories[i];
        if (calories[i] > max_cal) max_cal = calories[i];
    }
    
    cout << max_cal - min_cal << endl;
    return 0;
}