#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    scanf("%d:%d", &n, &m);
    bool bb = false;

    if (n < m) {
        int tmp = n;
        n = m;
        m = tmp;
        bb = true;
    }
    int a = m;
    int b = n;

    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    if (!bb) {
        cout << n / a << ":" << m / a;
    }
    else
        cout << m / a << ":" << n / a;

    return 0;

}
   
