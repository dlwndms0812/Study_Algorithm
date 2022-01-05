#include <iostream>
using namespace std;
int dp[1001][11]; //dp[자리수][끝자리수]

void fun(int n) {
	
	for (int i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) { //i가 j보다 커야하므로 k를 사용
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 10007;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	fun(n);
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += dp[n][i];
	}
	cout << ans % 10007;
	return 0;
}
