#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int h, m;
    cin >> h >> m;
    int n;
    cin >> n;
    m += n;
    if (m >= 60) {
        while (1) {
            m = m - 60;
            h++;
            if (60 > m)
                break;

        }
    }
    if (h >= 24) {
        h = h - 24;
    }
    cout << h << " " << m;
    return 0;
}
   
