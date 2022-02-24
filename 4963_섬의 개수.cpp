#include <iostream>
#include <cstring>
using namespace std;

int n, m;
int arr[51][51];
bool visited[51][51];
int dx[8] = { 0,0,-1,1,-1,-1,1,1 };
int dy[8] = { 1,-1,0,0,-1,1,-1,1 };

void dfs(int y, int x) {
   
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[ny][nx]) {
            if (!visited[ny][nx]) {
                visited[ny][nx] = true;
                dfs(ny, nx);

            }
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int a;
                cin >> a;
                arr[i][j] = a;
            }
        }
        
        int cnt = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && arr[i][j]) {
                    visited[i][j] = true;
                    dfs(i, j);
                    cnt++;
                  
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
   
