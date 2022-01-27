#include <iostream>
#include <queue>
using namespace std;
int n, m, k;
int arr[1001][1001];
int visit[1001];

void dfs(int k) {
    cout << k << " ";
    visit[k] = 1;
    for (int i = 1; i <= n; i++) {
        if (visit[i] == 1 || arr[k][i] == 0)
            continue;
        dfs(i);
    }
}

void bfs(int k) {
    queue<int>q;
    q.push(k);
    visit[k] = 0;
    while (!q.empty()) {
        k = q.front();
        cout << k << " ";
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (visit[i] == 0 || arr[k][i] == 0)
                continue;
            q.push(i);
            visit[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }
    dfs(k);
    cout << endl;
    bfs(k);
    
	return 0;
}
