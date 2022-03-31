#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    int arr[10001];
    
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    long long left = 1;
    long long right = arr[n-1];
    
  
    while (left <= right) {
        int cnt = 0;
        long long mid = (left + right) / 2;
        
        for (int i = 0; i < n; i++) {
            cnt += arr[i] / mid;
        }

        if (cnt >= k) {
            left = mid + 1;
        }

        else
            right = mid - 1;
    }

    cout << right;
    return 0;

}
   
