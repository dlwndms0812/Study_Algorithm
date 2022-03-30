#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[9];
int arr1[9];
bool visited[9];

void dfs(int cnt,int k) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = k; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = arr1[i];
            dfs(cnt + 1, i);
            visited[i] = false;
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    sort(arr1, arr1 + n);
    
    dfs(0,0);
    
    return 0;

}
   
