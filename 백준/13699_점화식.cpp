#include <iostream>
using namespace std;

long long dp[36] = { 0 };

long long t(long long n) {
	if (dp[n] > 0)
		return dp[n];
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= i - 1; j++) {
				dp[i] += t(i - j - 1) * t(j);
			}
		}
		return dp[n];
	}
}

int main() {
	dp[0] = 1;
	long long n;
	cin >> n;
	cout << t(n);
}
