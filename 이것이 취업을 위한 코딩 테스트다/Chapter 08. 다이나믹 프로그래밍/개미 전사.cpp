#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n;
    cin >> n;
    
    int dp[101];
    memset(dp, 0, sizeof(dp));

    vector<int>v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    dp[0] = v[0];
    dp[1] = max(dp[0], v[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + v[i]);
    }

    cout << dp[n-1];
    return 0;
}
   
