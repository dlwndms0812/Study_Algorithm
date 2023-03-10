#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k;
    int arr[100001];
    
    cin >> n >> k;
    
    queue<pair<int, int>> q;
    
    fill(arr, arr + 100001, 0);
    
    q.push({n, 0});
    
    int min = 0;
    int cnt = 0;
    
    while (!q.empty())
    {
        int x = q.front().first;
        int time = q.front().second;
        
        q.pop();
        arr[x] = 1;
        
        if (cnt != 0 && x == k && time == min)
            cnt++;
        
        if (cnt == 0 && x == k)
        {
            min = time;
            cnt++;
        }
        for (int nx : {x - 1, x + 1, 2 * x})
        {
            if (nx < 0 || nx > 100000)
                continue;
            if (arr[nx] == 1)
                continue;
            q.push({nx, time + 1});
        }
    }
    
    cout << min << "\n";
    cout << cnt;
    
    return 0;
}
