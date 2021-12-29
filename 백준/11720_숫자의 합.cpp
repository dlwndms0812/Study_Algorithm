#include <iostream>
using namespace std;

int main() {
	int n=0;
	int sum = 0;
	cin >> n;
	char arr[101];
	cin >> arr;
	
	for (int i = 0; i < n; i++) {
		sum += arr[i] - '0';
	}
	cout << sum;
}
/* 이 방법으로 하면 long long을 써도 범위가 넘어가버려서 안됨
int main() {
	int n;
	long long k;
	long long sum = 0;
	cin >> n;
	cin >> k;
	while (n) {
		if (k == 0)
			break;
		sum += k % 10;
		k = k / 10;
		
	}
	cout << sum;
	return 0;
}
*/
