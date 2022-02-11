#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int res = 0;
    if (0>=(k-m)) {
        res = -1;
    }
    else {
        res = n / (k - m);
        res = res + 1;
    }
    cout << res;
   
    return 0;
}
   
