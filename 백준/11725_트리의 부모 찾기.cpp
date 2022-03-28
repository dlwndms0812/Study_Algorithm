#include <iostream>
#include <vector>
using namespace std;

vector<int>v[100001];
int arr[100001];

void dfs(int n) {
    for (int i = 0; i < v[n].size(); i++) {
        int m = v[n][i];
        if (arr[m] == 0) {
            arr[m] = n;
            dfs(m);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
  
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
  
   
    dfs(1);

    for (int i = 2; i <= n; i++) {
        cout << arr[i] << "\n";
    }
   
   
    return 0;

}
   
