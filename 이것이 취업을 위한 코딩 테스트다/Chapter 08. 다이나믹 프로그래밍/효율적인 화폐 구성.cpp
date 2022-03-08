#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int>dp(m + 1, 10001);
   
    vector<int>v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = v[i]; j <= m; j++) {
            if (dp[j - v[i]] != 10001){
                dp[j] = min(dp[j], dp[j - v[i]] + 1);
            }
        }
    }

    if (dp[m] == 10001)
        cout << -1;
    else
        cout << dp[m];
    return 0;
}
   
