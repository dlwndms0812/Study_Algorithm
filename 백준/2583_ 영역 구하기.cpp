//bfs
#include <iostream>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101][101] = { 0 };
int visited[101][101] = { 0 };

int dy[4] = { 1, 0, -1, 0};
int dx[4] = { 0, 1, 0, -1};

int n, m, k;

int bfs(int y, int x)
{
    visited[y][x] = 1;
    
    queue<pair<int, int>> q;
    
    q.push({y, x});
    
    int cnt = 0;
    while (!q.empty())
    {
        int yy = q.front().first;
        int xx = q.front().second;
        
        q.pop();
        cnt++;
        
        for (int i = 0; i < 4; i++)
        {
            int ny = yy + dy[i];
            int nx = xx + dx[i];
            
            if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] == 1 || arr[ny][nx] == 1)
                continue;
            q.push({ny, nx});
            visited[ny][nx] = 1;
        }
    }
    
    return (cnt);
}

int main()
{
    
    cin >> n >> m >> k;
    
    for (int i = 0; i < k; i++)
    {
        int x1, y1, x2, y2, tmp;
        cin >> x1 >> y1 >> x2 >> y2;
        
        y1 = n - y1;
        y2 = n - y2;
        
        if (y1 > y2)
        {
            tmp = y1;
            y1 = y2;
            y2 = tmp;
        }
        
        if (x1 > x2)
        {
            tmp = x1;
            x1 = x2;
            x2 = tmp;
        }
        for (int j = y1; j < y2; j++)
        {
            for (int p = x1; p < x2; p++)
                arr[j][p] = 1;        
        }
    }
    
    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 && visited[i][j] == 0)
            {
                int tmp = bfs(i, j);
                v.push_back(tmp);
                cnt++;
            }
        }
    }
    sort(v.begin(), v.end());
    printf("%d\n", cnt);
    for (int i = 0; i < v.size(); i++)
        printf("%d ", v[i]);
    
    
    
    return 0;
}

//dfs
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101][101] = { 0 };
int visited[101][101] = { 0 };

int dy[4] = { 1, 0, -1, 0};
int dx[4] = { 0, 1, 0, -1};

int n, m, k;

int sum;

void dfs(int y, int x)
{
    if (visited[y][x] == 1)
        return ;
    visited[y][x] = 1;
    sum++;
    
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] == 1 || arr[ny][nx] == 1)
            continue;
        dfs(ny, nx);
    }
}

int main()
{
    
    cin >> n >> m >> k;
    
    for (int i = 0; i < k; i++)
    {
        int x1, y1, x2, y2, tmp;
        cin >> x1 >> y1 >> x2 >> y2;
        
        y1 = n - y1;
        y2 = n - y2;
        
        if (y1 > y2)
        {
            tmp = y1;
            y1 = y2;
            y2 = tmp;
        }
        
        if (x1 > x2)
        {
            tmp = x1;
            x1 = x2;
            x2 = tmp;
        }
        for (int j = y1; j < y2; j++)
        {
            for (int p = x1; p < x2; p++)
                arr[j][p] = 1;        
        }
    }
    
    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 && visited[i][j] == 0)
            {
                sum = 0;
                dfs(i, j);
                v.push_back(sum);
                cnt++;
            }
        }
    }
    sort(v.begin(), v.end());
    printf("%d\n", cnt);
    for (int i = 0; i < v.size(); i++)
        printf("%d ", v[i]);
    
    
    
    return 0;
}
