#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int t, n;

int x, y, x2, y2;

int arr[301][301];

int dy[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dx[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };

int main()
{
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        cin >> x >> y;
        cin >> x2 >> y2;
    
        for (int i = 0; i < n; i++)
            fill(arr[i], arr[i] + n, -1);
            
        queue<pair<int, int>> q;
        q.push({y, x});
        
        arr[y][x] = 0;
        
        while (arr[y2][x2] == -1)
        {
            int yy = q.front().first;
            int xx = q.front().second;
            
            q.pop(); 
            
            for (int i = 0; i < 8; i++)
            {
                int ny = yy + dy[i];
                int nx = xx + dx[i];
                
                if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                    continue;
                if (arr[ny][nx] != -1)
                    continue;
                arr[ny][nx] = arr[yy][xx] + 1;
                q.push({ny, nx});
            }
        }
        printf("%d\n", arr[y2][x2]);
    }
    return 0;
}
