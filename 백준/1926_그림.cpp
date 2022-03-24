#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int arr[501][501];
bool visited[501][501];
int cnt = 0;
int sum = 0;
int res = 0;
int n, m;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y) {
    if (visited[x][y])
        return;

    visited[x][y] = true;
    sum++;
   
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny] && arr[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && arr[i][j]) {
                sum = 0;
                dfs(i,j);
                cnt++;
                res = max(res, sum);
            }
        }
    }

    cout << cnt << endl;
    cout << res;
   
    return 0;

}
   
