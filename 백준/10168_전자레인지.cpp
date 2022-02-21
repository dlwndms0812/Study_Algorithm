#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;

    int a = 0;
    int b = 0;
    int c = 0;

    if (t % 10 != 0) {
        cout << -1;
    }
    else {
        if (t >= 300) {
            a = t / 300;
            t = t % 300;
        }

        if (t >= 60) {
            b = t / 60;
            t = t % 60;
        }

        c = t / 10;

        cout << a << " " << b << " " << c;
    }
    return 0;
}
   
