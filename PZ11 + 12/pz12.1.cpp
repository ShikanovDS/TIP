#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
char maze[100][100];
bool visited[100][100];
int max_pdfs = -1;

void dfs(int x, int y, int count) {
    if (x < 0 || x >= N || y < 0 || y >= M || maze[x][y] == '1' || visited[x][y]) {
        return;
    }

    if (maze[x][y] == 'P') count++; 
    if (maze[x][y] == 'E') {        
        max_pdfs = max(max_pdfs, count);
        return;
    }

    visited[x][y] = true; 
    dfs(x + 1, y, count);
    dfs(x - 1, y, count);
    dfs(x, y + 1, count);
    dfs(x, y - 1, count);
    visited[x][y] = false; 
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
        }
    }

    dfs(0, 0, 0);
    cout << max_pdfs << endl;
    return 0;
}