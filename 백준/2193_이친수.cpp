#include <iostream>
using namespace std;
long long dp[91] = { 0 }; //dp[자리수]

void fun(long long n) {
	//조건을 만족시키기 위해서는 제일 앞의 2숫자가 10 이어야함
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
}

int main() {
	long long n;
	cin >> n;
	fun(n);
	cout << dp[n];
	return 0;
}

//int로 하면 틀렸다고 나온다->long long 쓰기
