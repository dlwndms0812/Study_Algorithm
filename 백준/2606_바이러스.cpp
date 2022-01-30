#include <iostream>
using namespace std;
int arr[101][101];
int visited[101];
int cnt = 0;

void dfs(int n, int k) {
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0 && arr[k][i] == 1) {
            visited[i] = 1;
            dfs(n, i);
            cnt++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }
    visited[1] = 1;
    dfs(n, 1);
  
    cout << cnt;
    
	return 0;
}
