#include <iostream>
#include <cstring>
using namespace std;

int w;

void turn() {
    w = w - 1;
    if (w == -1)
        w = 3;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n, m;
    cin >> n >> m;

    int x, y;
    cin >> x >> y >> w;

    int arr[51][51];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
  
    int dx[4] = { -1,0,1,0 };
    int dy[4] = { 0,1,0,-1 };

    bool visited[51][51];
    memset(visited, 0, sizeof(visited));
    visited[n][m] = true;

    int cnt = 0;
    int check = 0;

    while (1) {
        turn();

        int nx = x + dx[w];
        int ny = y + dy[w];

        if (!visited[nx][ny] && arr[nx][ny]==0) {
            x = nx;
            y = ny;
            visited[nx][ny] = true;
            cnt++;
            check = 0;
            continue;
        }
        else {
            check++;
        }


        if (check == 4) {
            nx = x - dx[w];
            ny = y - dy[w];

            if (arr[nx][ny] == 0) {
                x = nx;
                y = ny;
            }
            else
                break;
        }

    }
    cout << cnt;
    return 0;
}
   
