#include <iostream>
#include <cstring>
using namespace std;

int n, m, v;
bool arr[51][51];
bool visited[51][51];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


bool dfs(int y, int x) {
    if (visited[y][x])
        return false;

    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[ny][nx])
            dfs(ny, nx);
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m >> v;
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));

        for (int j = 0; j < v; j++) {
            int a, b;
            cin >> a >> b;
            arr[b][a] = 1;
        }

        int cnt = 0;

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                if (arr[j][k] && !visited[j][k]) {
                    if (dfs(j, k))
                        cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
   
