#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int n;
    cin >> n;
    int k = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        k += i;
        if (n <= k) {
            cnt = i;
            break;
        }
    }
    int p = k - n;
    if (cnt % 2 == 0) {
        cout << cnt - p << "/" << 1 + p;
    }
    else
        cout << 1 + p << "/" << cnt - p;
    return 0;
}
   
