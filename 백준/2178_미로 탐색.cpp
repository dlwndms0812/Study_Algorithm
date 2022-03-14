#include <iostream>
#include <cstring>
#include <queue>
#include <string>
using namespace std;

int arr[101][101];
bool visited[101][101];
int check[101][101];
int n, m;


int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };


void bfs(int x,int y) {
    queue<pair<int, int>>q;
    q.push(make_pair(y, x));
   
    check[y][x] = 1;
    visited[y][x] = true;

    while (!q.empty()) {
        
        int xx = q.front().second;
        int yy = q.front().first;
        q.pop();


        for (int i = 0; i < 4; i++) {
            int nx = xx + dx[i];
            int ny = yy + dy[i];

            if (nx >= 0 && ny >= 0 && nx < m && ny < n && arr[ny][nx]==1 && visited[ny][nx] == false) {
                check[ny][nx] = check[yy][xx] + 1;
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            arr[i][j] = str[j] - '0';
        }
    }

    
    bfs(0, 0);


    cout << check[n - 1][m - 1];
    return 0;
}
   
