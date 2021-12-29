#include <iostream>
using namespace std;

int main() {
	int a, b;
	char c;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> c >> b;  //scanf로 하면 "%d,%d"로 하면 됨
		cout << a + b << endl;
	}

	return 0;
}
