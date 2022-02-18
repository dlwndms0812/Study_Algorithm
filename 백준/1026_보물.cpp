#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int arr1[51];
    int arr2[51];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += arr1[i] * arr2[n - i - 1];
    }
    cout << cnt;
    return 0;
}
   
