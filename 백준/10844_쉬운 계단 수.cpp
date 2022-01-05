#include <iostream>
using namespace std;
long long dp[101][11]; //dp[자리수][끝자리수]

void fun(int n) {
	dp[1][0] = 0;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) //dp[자리수][1]
				dp[i][j] = dp[i - 1][j + 1] % 1000000000;

			else if (j == 9) //dp[자리수][8]
				dp[i][j] = dp[i - 1][j - 1] % 1000000000;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}
}

int main() {
	int n;
	cin >> n;
	fun(n);
	long long ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += dp[n][i];
	}
	cout << ans % 1000000000;
	return 0;
}
