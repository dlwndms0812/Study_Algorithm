#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int n, m, k;
    cin >> n >> m >> k;
    int res = 0;
    if (n == m && m == k) {
        res = 10000 + (n * 1000);
    }
    else if (n == m || m == k || n == k) {
        int c = 0;
        if (n == m) {
            c = n;
        }
        else if (m == k) {
            c = m;
        }
        else
            c = k;
   
        res = 1000 + (c * 100);
    }
    else {
        int c = max(n, m);
        c = max(c, k);
        res = c * 100;
    }
    cout << res;
    return 0;
}
   
