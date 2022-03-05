#include <iostream>
#include <cstring>
using namespace std;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int arr[1001][1001];
bool visited[1001][1001];
int n, m;

bool dfs(int y, int x) {
    if (visited[y][x]) {
        return false;
    }
    if (arr[y][x])
        return false;
  
    visited[y][x] = true;
    for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if (nx >= 0 && ny >= 0 && nx < m && ny < n && arr[ny][nx] == 0) {
               dfs(ny, nx);
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
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && arr[i][j]==0) {
                if (dfs(i, j)) {
                    cnt++;
                }
            }
        }
    }
   
    cout << cnt;
    return 0;
}
   
