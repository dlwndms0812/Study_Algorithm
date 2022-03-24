#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>;
using namespace std;

int arr[201][201];
bool visited[201][201];

queue<pair<int, int>> q;
int dx[] = { -2,-2,0,0,2,2 };
int dy[] = { -1,1,-2,2,-1,1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    memset(visited, 0, sizeof(visited));

    q.push({ r1,c1 });
    arr[r1][c1] = 1;
    visited[r1][c1] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx == r2 && ny == c2) {
                cout << arr[x][y];
                return 0;
            }

            if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny]) {
                visited[nx][ny] = true;
                arr[nx][ny] = arr[x][y] + 1;
                q.push({ nx,ny });
              
            }
        }
    }
    cout << -1;
    return 0;

}
   
