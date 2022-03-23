#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n;
    
    vector<int>v;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());
    
    cin >> m;

    int left = 0;
    int right = v[v.size() - 1];
    int mid = 0;
  
    
    while (left <= right) {
        mid = (left + right) / 2;

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] <= mid)
                cnt += v[i];
            else if (v[i] > mid)
                cnt += mid;
        }

        if (cnt <= m) {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    cout << right;
    return 0;

}
   
