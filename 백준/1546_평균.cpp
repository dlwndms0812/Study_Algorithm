#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float arr[1000];
	int max = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
		if (max < a)
			max = a;
	}
	float score = 0;
	for (int i = 0; i < n; i++) {
		float b = arr[i] / max;
		arr[i] = b;
		score += arr[i];
	}
	cout << score/n*100;

	return 0;
}
