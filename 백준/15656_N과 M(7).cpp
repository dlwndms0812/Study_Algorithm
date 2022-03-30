#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[9];
int arr1[9];
bool visited[9];

void dfs(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
         arr[cnt] = arr1[i];
         dfs(cnt + 1);
          
        
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
    
    dfs(0);
    
    return 0;

}
   
