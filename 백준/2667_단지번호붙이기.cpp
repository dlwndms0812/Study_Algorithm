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
   
