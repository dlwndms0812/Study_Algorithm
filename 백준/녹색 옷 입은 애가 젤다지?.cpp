#include <iostream>
#include <algorithm>
#include <queue>
#include <limits.h>
#include <cstring>

using namespace std;

int board[126][126];
int arr[126][126];

int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

void init(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = 0;
            arr[i][j] = INT_MAX;
        }
    }
}

void bfs(int n) {

    queue<pair<int, int>> q;

    q.push({0, 0});
    arr[0][0] = board[0][0];

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                continue;
            
            if (arr[ny][nx] > arr[y][x] + board[ny][nx]) {
                arr[ny][nx] = arr[y][x] + board[ny][nx];
                q.push({ny, nx});
            }
        }
    }

}


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int idx = 1;
    
    while (1) {
        int n;
        cin >> n;

        if (n == 0)
            break;

        init(n);
        
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cin >> board[i][j];
        }

        bfs(n);

        cout << "Problem " << idx << ": " << arr[n - 1][n - 1] << endl;

        idx++;
    }

}
