#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n;
    cin >> n;
    
    int dp[30001];
    memset(dp, 0, sizeof(dp));

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
        if (i % 5 == 0)
            dp[i] = min(dp[i], dp[i / 5] + 1);
    }
   
    cout << dp[n];

    return 0;
}
   
