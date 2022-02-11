#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int n;
    cin >> n;
    int cnt = 0;
    if (n == 1)
        cout << 1;
    else {
        for (int i = 2; i <= n; cnt++) {
            i += 6 * cnt;
        }
        cout << cnt;
    }
   
    return 0;
}
   
