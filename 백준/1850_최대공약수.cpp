#include <iostream>
using namespace std;

long long fun(long long n, long long k) {
    long long tmp;
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

   
    long long n, k;
    cin >> n >> k;

    long long q = fun(n, k);
    for (int i = 0; i < q; i++) {
        cout << 1;
    }

	return 0;
}
