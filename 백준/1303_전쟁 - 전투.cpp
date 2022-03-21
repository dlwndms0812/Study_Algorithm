#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char arr[101][101];
bool visited[101][101];
int cnt = 0;
int n, m;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int x, int y, char c) {
    if (visited[x][y])
        return;

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < m && ny < n && arr[nx][ny] == c && !visited[nx][ny]) {
            cnt++;
            dfs(nx, ny, c);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++) {
            arr[i][j] = str[j];
        }
    }

    memset(visited, 0, sizeof(visited));
    int w = 0;
    int b = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                cnt = 1;
                dfs(i, j, arr[i][j]);
                if (arr[i][j] == 'W')
                    w += cnt * cnt;
                else
                    b += cnt * cnt;
            }
        }
    }

    cout << w << " " << b;
    return 0;

}
   
