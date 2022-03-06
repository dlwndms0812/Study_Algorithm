#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int dy[4] = { 0,0,-1,1 };
int dx[4] = { -1,1,0,0 };

int arr[201][201];
int n, m;

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({ x, y });
    
    while (!q.empty()) {

        int x = q.front().first;
        int y = q.front().second;
        
        cout << x << " " << y << endl;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;

            if (arr[nx][ny] == 0)
                continue;
            
            if (arr[nx][ny]==1) {
                arr[nx][ny] = arr[x][y] + 1;
                q.push({ nx,ny });
            }
               
        }
    }
    return arr[n - 1][m - 1];
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

    cout << bfs(0, 0);
    return 0;
}
   
