#include <iostream>
using namespace std;

int fun(int n, int k) {
    int tmp;
    while (k) {
        tmp = n % k;
        n = k;
        k = tmp;
    }
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int n, k;
        cin >> n >> k;

        int q = fun(n, k);
 
        cout << (n / q) * (k / q) * q << endl;
    }

	return 0;
}
