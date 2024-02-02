#include <vector>
#include <queue>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int solution(vector<vector<int>> maps)
{   
    int visited[101][101] = { 0 };
    int arr[101][101] = { 0 };
    
    int n = maps.size();
    int m = maps[0].size();
    
    queue<pair<int, int>> q;
    
    q.push({0, 0});
    visited[0][0] = 1;
    arr[0][0] = 1;
    
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if (nx < 0 || nx >= m || ny < 0 || ny >= n || 
                visited[ny][nx] == 1 || maps[ny][nx] == 0)
                continue;
            
            q.push({ny, nx});
            visited[ny][nx] = 1;
            arr[ny][nx] = arr[y][x] + 1;
        }
    }
    
    if (arr[n - 1][m - 1] == 0)
        return -1;
    
    return arr[n - 1][m - 1];
}
