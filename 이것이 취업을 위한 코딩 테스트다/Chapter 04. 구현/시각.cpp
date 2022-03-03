#include <iostream>
#include <String>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n = 0;
    cin >> n;
    int cnt = 0;
    for (int h = 0; h <= n; h++) {
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {
                if (h % 10 == 3 || m % 10 == 3 || m / 10 == 3 || s % 10 == 3 || s / 10 == 3)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
   
