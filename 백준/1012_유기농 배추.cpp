//dfs
#include <iostream>
#include <cstring>
using namespace std;

int n, m, v;
bool arr[51][51];
bool visited[51][51];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


bool dfs(int y, int x) {
    if (visited[y][x])
        return false;

    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[ny][nx])
            dfs(ny, nx);
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m >> v;
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));

        for (int j = 0; j < v; j++) {
            int a, b;
            cin >> a >> b;
            arr[b][a] = 1;
        }

        int cnt = 0;

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                if (arr[j][k] && !visited[j][k]) {
                    if (dfs(j, k))
                        cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
  
//bfs
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int t, n, m, k;
int arr[51][51];
int visited[51][51];

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };


void bfs(int y, int x)
{
    visited[y][x] = 1;
    
    queue<pair<int, int>> q;
    q.push({y, x});
    
    while (!q.empty())
    {
        int yy = q.front().first;
        int xx = q.front().second;
        
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = yy + dy[i];
            int nx = xx + dx[i];
            
            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;
            if (arr[ny][nx] == 0 || visited[ny][nx] == 1)
                continue;
                
            q.push({ny, nx});
            visited[ny][nx] = 1;
        }
    }
}

int main()
{
    cin >> t;
    
    while (t--)
    {
        cin >> m >> n >> k;
    
        for (int i = 0; i < n; i++)
        {
            fill(arr[i], arr[i] + m, 0);
            fill(visited[i], visited[i] + m, 0);
        }

        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }
    
        int cnt = 0;
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1 && visited[i][j] == 0)
                {
                    bfs(i, j);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
