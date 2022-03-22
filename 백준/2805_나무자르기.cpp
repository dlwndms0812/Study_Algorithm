#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    long long m;
    cin >> n >> m;
    
    vector<int>v;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    int left = 0;
    int right = v[n - 1];
    long long cnt = 0;
    long long mid = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (mid < v[i])
                cnt += v[i] - mid;
        }

        
        if (cnt >= m)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    cout << right;
    return 0;

}
   
