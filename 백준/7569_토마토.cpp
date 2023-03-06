#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int dx[6] = { 1, -1, 0, 0, 0, 0};
int dy[6] = { 0, 0, 1, -1, 0, 0};
int dh[6] = { 0, 0, 0, 0, 1, -1};

int main()
{
    int arr[101][101][101];
    int visited[101][101][101];
    
    int n, m, h;
    cin >> m >> n >> h;
    
    queue<pair<pair<int, int>, int>> q;
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[k][i][j];
                visited[k][i][j] = 0;
            
                if (arr[k][i][j] == 1)
                    q.push({{i, j}, k});
                if (arr[k][i][j] == 0)
                    visited[k][i][j] = -1;
            }
        }
    }
    
    while (!q.empty())
    {
        pair<pair<int, int>, int> qq = q.front();
        int y = qq.first.first;
        int x = qq.first.second;
        int hh = qq.second;
        
        q.pop();
        
        for (int i = 0; i < 6; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int nh = hh + dh[i];
            
            if (ny < 0 || nx < 0 || nh < 0 || ny >= n || nx >= m || nh >= h || visited[nh][ny][nx] >= 0)
                continue;
            visited[nh][ny][nx] = visited[hh][y][x] + 1;
            q.push({{ny, nx}, nh});
        }
    }
    
    int max = 0;
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visited[k][i][j] == -1)
                {
                    printf("-1\n");
                    return (0);
                }
                if (max < visited[k][i][j])
                    max = visited[k][i][j];
            }
        }
    }
    
    printf("%d\n", max);

    return 0;
}
