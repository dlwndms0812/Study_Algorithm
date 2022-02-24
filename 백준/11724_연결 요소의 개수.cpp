#include <iostream>
#include <cstring>
using namespace std;

int n, m;
int arr[1001][1001];
bool visited[1001];


void dfs(int v) {
    visited[v] = true;
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && arr[v][i])
            dfs(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    
    
    cin >> n >> m;
    memset(arr, 0, sizeof(arr));
    memset(visited, 0, sizeof(visited));

    for (int j = 0; j < m; j++) {
        int a, b;
        cin >> a >> b;
        arr[b][a] = arr[a][b] = 1;
    }

     int cnt = 0;
     memset(visited, false, sizeof(visited));

     for (int i = 1; i <= n; i++) {
         if (!visited[i]) {
             dfs(i);
             cnt++;
         }
     }

     cout << cnt << endl;

    return 0;
}
   
