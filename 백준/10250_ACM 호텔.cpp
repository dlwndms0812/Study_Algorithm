#include <iostream>
#include <algorithm>
using namespace std;

int fun(int h, int w, int n) {
    int cnt = 0;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= h; j++) {
            cnt++;
            if (cnt == n) {
                int res = j * 100 + i;
                return res;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int h, w, n;
        cin >> h >> w >> n;
        cout << fun(h, w, n) << endl;
    }
    return 0;
}
   
