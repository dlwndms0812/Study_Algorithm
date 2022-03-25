#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int n, m;
    cin >> n >> m;

    int check[101];
    memset(check, 0, sizeof(check));

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        check[a] = b;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        check[a] = b;
        
    }


    queue<int>q;

    q.push(1);
    int arr[101];
    memset(arr, -1, sizeof(arr));
    arr[1] = 0;

    while (!q.empty()) {   
        int x = q.front();
        q.pop();

        for (int i = 1; i <= 6; i++) {
            int nx = x + i;
            if (nx > 100)
                continue;

            if (check[nx] != 0) {
                nx = check[nx];
            }

            if (arr[nx] == -1) {
                arr[nx] = arr[x] + 1;
                q.push(nx);
            }
        }
    }

    cout << arr[100];
    return 0;

}
   
