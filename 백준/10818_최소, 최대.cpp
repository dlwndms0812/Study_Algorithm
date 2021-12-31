#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int max = -1000000;
	int min = 1000000;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k > max)
			max = k;
		if (k < min)
			min = k;
	}
	cout << min << " " << max;
	
	return 0;
}
