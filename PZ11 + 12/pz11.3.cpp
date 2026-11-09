#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    const int INF = 1e9;
    vector<vector<int>> dp(d + 1, vector<int>(n + 1, INF));

    for (int i = 1; i <= n; i++)
        dp[1][i] = a[i-1] - a[0];

    for (int k = 2; k <= d; k++) {
        for (int i = k; i <= n; i++) {
            for (int j = k - 1; j < i; j++) {
                int cur = max(dp[k-1][j], a[i-1] - a[j]);
                if (cur < dp[k][i]) dp[k][i] = cur;
            }
        }
    }

    cout << dp[d][n];
    return 0;
}