#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[101] = { 0 };
    int n, m;
    cin >> n >> m;
    int res = 0;
    int cnt = 300000;

    for (int i = 0; i < n; i++) {
        int k = 0;
        cin >> k;
        arr[i] = k;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((m>=arr[i] + arr[j] + arr[k]) && (cnt>m-arr[i]-arr[j]-arr[k])) {
                    cnt=m-arr[i]-arr[j]-arr[k];
                    res = arr[i] + arr[j] + arr[k];
                }
            }
        }
    }

    cout << res;
   
    return 0;
}
   
