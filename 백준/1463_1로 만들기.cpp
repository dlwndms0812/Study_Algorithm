#include <iostream>
#include <math.h>
using namespace std;
int arr[1000001] = { 0 };

void fun(int n) {
	arr[1] = 0;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i / 2] + 1); //2로 나누는 것이 적게 걸리나? 아니면 1을 먼저 뺀게 적게 걸리나? 고르기
		}
		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}
}

int main() {
	int n;
	cin >> n;
	fun(n);
	cout << arr[n];
	return 0;
}
