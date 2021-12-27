#include <iostream>
using namespace std;

int arr[21] = { 0 };

int fun(int n) {
	if (arr[n] == 0 && n!=0) {
		arr[n]=fun(n - 1) + fun(n - 2);
		return arr[n];
	}
	else
		return arr[n];
}
int main() {
	int n;
	cin >> n;
	arr[0] = 0;
	arr[1] = 1;

	if (n == 0) {
		cout << arr[n];
	}
	else if (n == 1) {
		cout << arr[n];
	}
	else {
		fun(n);
		cout << fun(n-1) + fun(n-2);
	}

	return 0;
}
