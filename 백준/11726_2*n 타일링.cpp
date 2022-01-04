#include <iostream>
#include <math.h>
using namespace std;
int dp[1001] = { 0 };

void fun(int n) {
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] = dp[i] % 10007;
	}
}

int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	if (n > 2) {
		fun(n);
	}
	cout << dp[n];
	return 0;
}
