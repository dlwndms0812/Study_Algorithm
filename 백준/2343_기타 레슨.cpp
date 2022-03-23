#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<int>v;

    int right = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
        right += k;
    }



    int left = *max_element(v.begin(), v.end());
    
    int mid = 0;
  
    
    while (left <= right) {
        mid = (left + right) / 2;

        int cnt = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (sum + v[i] > mid) {
                sum = 0;
                cnt++;
            }
            sum += v[i];
        }

        if (sum != 0)
            cnt++;

        if (cnt > m) {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    cout << left;
    return 0;

}
   
