#include <iostream>
#include <cstring>

using namespace std;

int n;
int arr[101][101];
bool visited[101];
int fa, fb;
int cnt = 0;
int res = 0;
void dfs(int aa) {
    if (visited[aa]) {
        return;
    }
    
    if (aa == fb) {
        res = cnt;
        return;
    }
    visited[aa] = true;
    cnt++;

    for (int i = 1; i <= n; i++) {
        if (!visited[i] && arr[aa][i]) {
            dfs(i);
        }
    }
    cnt--;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    cin >> n;
    
    cin >> fa >> fb;
    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }
    dfs(fa);
   
    if (res == 0) {
        cout << -1;
    }
    else
        cout << res;

    return 0;
}
   
