#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int xw = w - x;
    int yh = h - y;

    int res = 0;

    if (xw >= yh) {
        res = yh;
    }
    else
        res = xw;

    if (res >= x)
        res = x;

    if (res >= y)
        res = y;

    cout << res;

    
    return 0;
}
   
