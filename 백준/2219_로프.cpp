#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int>v;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }

    if (n == 1) {
        cout << v[0];
        return 0;
    }

    sort(v.begin(), v.end());

    if (n == 2) {
        cout << v[0] * 2 << endl;
        return 0;
    }

    int sum = v[v.size() - 1];
    int cnt = 2;
    for (int i = v.size() - 2; i >= 0; i--) {
        sum = max(sum, v[i] * cnt);
        cnt++;
    }

    cout << sum;

    return 0;

}
   
