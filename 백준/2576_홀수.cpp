#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> v;

    for (int i = 0; i < 7; i++) {
        int k;
        cin >> k;
        if (k % 2 == 1)
            v.push_back(k);

    }

    sort(v.begin(), v.end());
    
    int sum = 0;
    if (v.empty()) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    cout << sum << endl;
    cout << v[0];
    return 0;

}
   
