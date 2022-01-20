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

    int n, k;
    cin >> n >> k;

    int q = fun(n, k);
    cout << q << endl;
    cout << (n / q) * (k / q) * q << endl;


	return 0;
}
