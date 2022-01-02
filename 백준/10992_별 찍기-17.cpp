#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i == n) {
			for (int j = 1; j <= 2 * n - 1; j++)
				cout << "*";
		}
		else {
			for (int j = 0; j <= n - i - 1; j++) {
				cout << " ";
			}
			cout << "*";
			if (i != 1) {
				for (int k = 1; k <= 2 * (i - 1) - 1; k++) {
					cout << " ";
				}
				cout << "*";
			}
		}
		cout << endl;
	}
	
	
	return 0;
}
