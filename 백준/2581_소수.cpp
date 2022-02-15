#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int m, n;
    cin >> m >> n;
  
    int mm = 10000;
    int cnt = 0;
    bool check = true;
    if (m == 1) {
        for (int i = m + 1; i <= n; i++) {
            for (int k = 2; k < i; k++) {
                if (i % k == 0) {
                    check = false;
                }
            }
            if (check) {
                cnt += i;
                if (mm > i)
                    mm = i;
            }
            check = true;
        }
    }
    else {
        for (int i = m; i <= n; i++) {
            for (int k = 2; k < i; k++) {
                if (i % k == 0) {
                    check = false;
                }
            }
            if (check) {
                cnt += i;
                if (mm > i)
                    mm = i;
            }
            check = true;
        }
    }
    if (cnt == 0)
        cout << -1;
    else {
        cout << cnt << endl;
        cout << mm << endl;
    }
    return 0;
}
   
