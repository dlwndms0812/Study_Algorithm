#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n, m, k;
    cin >> n >> m >> k;

    int arr[1001] = { 0 };
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int cnt = 1;
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (cnt == k) {
            sum += arr[n - 2];
            cnt = 1;
        }
        else {
            sum += arr[n - 1];
            cnt++;
        }
    }
    cout << sum;

    return 0;
}
   
