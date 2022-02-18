#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, k;
    cin >> n >> k;
    int cnt = 1;
    for (int i = 0; i < k; i++) {
        cnt = cnt * (n - i);
        
    }
    for (int i = 1; i <= k; i++) {
        cnt = cnt / i;
    }
    cout << cnt;
    return 0;
}
   
