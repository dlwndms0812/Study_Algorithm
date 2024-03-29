#include <string>
#include <vector>

using namespace std;

int dp[101][101] = { 0 };

int solution(int m, int n, vector<vector<int>> puddles) {
    
    for (int i = 0; i < puddles.size(); i++) {
        dp[puddles[i][1]][puddles[i][0]] = -1;
    }
    
    dp[1][1] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (dp[i][j] == -1)
                continue;
            
            int sum = 0;
            
            if (dp[i - 1][j] != -1)
                sum += dp[i - 1][j];
            if (dp[i][j - 1] != -1)
                sum += dp[i][j - 1];
            
            dp[i][j] += sum % 1000000007;
        }
    }
    
    return (dp[n][m]);
}
