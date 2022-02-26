#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int n;
int arr[101][101];
bool visited[101][101];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int c, int y, int x) {
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < n && arr[ny][nx]==c) {
            if (!visited[ny][nx]) {
                visited[ny][nx] = true;
                dfs(c, ny, nx);

            }
        }
    }
    
}

void dfs2(int y, int x) {
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < n && (arr[ny][nx]==1 || arr[ny][nx]==2)) {
            if (!visited[ny][nx]) {
                visited[ny][nx] = true;
                dfs2(ny, nx);

            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    cin >> n;

    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < n; j++) {
            if (str[j] == 'R')
                arr[i][j] = 1;
            else if (str[j] == 'G')
                arr[i][j] = 2;
            else
                arr[i][j] = 3;
        }
    }
    

    int r = 0;
    int g = 0;
    int b = 0;

    memset(visited, 0, sizeof(visited));
     

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && arr[i][j] == 1) {
                r++;
                dfs(1, i, j);
            }
            else if (!visited[i][j] && arr[i][j] == 2) {
                g++;
                dfs(2, i, j);
            }
            else if (!visited[i][j] && arr[i][j] == 3) {
                b++;
                dfs(3, i, j);
            }
        }
    }

    memset(visited, 0, sizeof(visited));
    int rg = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((arr[i][j] == 1 || arr[i][j] == 2) && !visited[i][j]) {
                rg++;
                dfs2(i, j);
            }
        }
    }
  
    cout << r + g + b << " " << rg + b;
    
    return 0;
}
   
