#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> a(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    vector<vector<int>> dp = a;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            if (i == 0 && j == 0) continue;
            if (i == 0)      dp[i][j] += dp[i][j-1];             
            else if (j == 0) dp[i][j] += dp[i-1][j];              
            else             dp[i][j] += max(dp[i-1][j], dp[i][j-1]);
        }

    vector<pair<int,int>> path;
    int i = N-1, j = M-1;
    while (true) {
        path.push_back({i, j});
        if (i == 0 && j == 0) break;
        if (i == 0) j--;
        else if (j == 0) i--;
        else if (dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }

    cout << "Сумма: " << dp[N-1][M-1] << "\n";
    for (int k = path.size()-1; k >= 0; k--)
        cout << path[k].first << " " << path[k].second << "\n";
}