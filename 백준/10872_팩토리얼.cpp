#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 1;

	if (n == 0) {
		cout << 1 << endl;
	}
	else {
		for (int i = n; i > 0; i--) {
			ans = ans * i;
		}
		cout << ans << endl;
	}

	return 0;
}
