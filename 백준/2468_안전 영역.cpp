#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int n;
int arr[101][101];
int arr1[101][101];
bool visited[101][101];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt = 0;
vector<int> v;
void dfs(int y, int x) {
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < n && arr[ny][nx]) {
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
       
    int h = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            arr1[i][j] = a;
            if (a > h)
                h = a;
        }
    }

    for (int k = 0; k <= h; k++) {

        cnt = 0;
        memset(visited, 0, sizeof(visited));
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) { 
                if (arr1[i][j] > k)
                    arr[i][j] = 1;
                else
                    arr[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && arr[i][j]) {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        v.push_back(cnt);
    }

    sort(v.begin(), v.end());
    cout << v[v.size()-1];
    return 0;
}
   
