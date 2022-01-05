#include <iostream>
using namespace std;
int dp[12] = { 0 };

void fun(int n) {
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
}

int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
 
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k > 3) {
			fun(k);
		}
		cout << dp[k] << endl;
	}
	return 0;
}
