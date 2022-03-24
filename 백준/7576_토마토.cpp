#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int arr[1001][1001];
int visited[1001][1001];
int n, m;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

queue <pair<int, int>> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            visited[i][j] = -1;

            if (arr[i][j] == 1) {
                q.push({ i,j });
                visited[i][j]++;
            }

        }
    }


    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m && visited[nx][ny]==-1 && arr[nx][ny] == 0) {
                q.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
    
    int res = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (res <= visited[i][j])
                res = visited[i][j];

            if (arr[i][j] == 0 && visited[i][j] == -1) {
                cout << -1;
                return 0;
            }
        }
    }

    cout << res;

    return 0;

}
   
