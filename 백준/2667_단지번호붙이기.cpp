//dfs
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int n;
int arr[26][26];
bool visited[26][26];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
vector<int> v;
int cnt = 0;

void dfs(int y, int x) {
    cnt++;
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < n && arr[ny][nx]) {
            if (!visited[ny][nx]) {
                dfs(ny, nx);

            }
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    
    cin >> n;
        
    memset(arr, 0, sizeof(arr));
    memset(visited, 0, sizeof(visited));

    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < n; j++) {
            arr[i][j] = str[j]-'0';
        }
    }
        

     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             if (!visited[i][j] && arr[i][j]) {
                 cnt = 0;
                 dfs(i, j);
                 v.push_back(cnt);
                  
             }
         }
     }

     sort(v.begin(),v.end());
    
     cout << v.size() << endl;
     for (int i = 0; i < v.size(); i++) {
         cout << v[i] << endl;
    }
    return 0;
}


//bfs
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int n;

int arr[26][26];
int visited[26][26];

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int bfs(int y, int x)
{
    visited[y][x] = 1;
    
    queue<pair<int, int>> q;
    
    q.push({y, x});
    
    int cnt = 1;
    while (!q.empty())
    {
        int yy = q.front().first;
        int xx = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int ny = yy + dy[i];
            int nx = xx + dx[i];
           
            if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                continue;

            if (arr[ny][nx] == 0 || visited[ny][nx] == 1)
                continue;
        
            q.push({ny, nx});
            visited[ny][nx] = 1;
            cnt++;
        }
    }
    return (cnt);
}

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string str;
        
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = str[j] - '0';
            visited[i][j] = 0;
        }
    }
    
    vector<int> v;
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] == 0)
            {
                int tmp = bfs(i, j);
                v.push_back(tmp);
                cnt++;
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
        printf("%d\n", v[i]);
    return 0;
}
