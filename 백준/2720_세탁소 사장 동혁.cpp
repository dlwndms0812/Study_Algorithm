#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int q = 0, d = 0, ni = 0, p = 0;
        if (k >= 25) {
            q = k / 25;
            k = k % 25;
        }
        if (k >= 10) {
            d = k / 10;
            k = k % 10;
        }
        if (k >= 5) {
            ni = k / 5;
            k = k % 5;
        }
        p = k;
        cout << q << " " << d << " " << ni << " " << p << endl;
    }
    return 0;
}
   
