#include <iostream>
using namespace std;

int fun(int k, int n) {
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j <= n; j++) {
            
             cnt += j;
            
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int a;
    cin >> a;
    int cnt = 0;
    int arr[15][15] = { 0 };
    for (int i = 0; i < 15; i++) {
        arr[0][i] = i;
    }
  

    for (int i = 0; i < a; i++) {
        int k, n;
        cin >> k;
        cin >> n;
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
            }
        }
        cout << arr[k][n] << endl;
    }
    return 0;
}
   
