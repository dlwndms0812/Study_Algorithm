#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> res[10];
vector<int> v;

void dfs(int left, int right, int depth) {
    if (left == right) {
        res[depth].push_back(v[left]);
        return;
    }
        

    int mid = (left + right) / 2;
    res[depth].push_back(v[mid]);

    dfs(left, mid - 1, depth + 1);
    dfs(mid + 1, right, depth + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int m;
    
    for (int i = 0; i < pow(2, n) - 1; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    dfs(0, v.size()-1, 0);
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
   
