#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    n = 1000 - n;
    
    if (n >= 500) {
        cnt += n / 500;
        n = n % 500;
    }
    if (n >= 100) {
        cnt += n / 100;
        n = n % 100;
    }
    if (n >= 50) {
        cnt += n / 50;
        n = n % 50;
    }
    if (n >= 10) {
        cnt += n / 10;
        n = n % 10;
    }
    if (n >= 5) {
        cnt += n / 5;
        n = n % 5;
    }
    cnt += n;
    
   
    cout << cnt;
    return 0;
}
   
