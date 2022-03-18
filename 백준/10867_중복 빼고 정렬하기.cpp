#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    cout << v[0] << " ";

    for (int i = 1; i < n; i++) {
        if (v[i - 1] == v[i]) {
            continue;
        }
        cout << v[i] << " ";
    }
    return 0;

}
   
