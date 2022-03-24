#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int arr[100001];
int n, m;

queue <int> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    q.push(n);
    arr[n] = 1;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        if (x == m) {
            cout<<arr[x]-1;
            return 0;
        }
        if (x - 1 >= 0 && arr[x - 1] == 0) {
            q.push(x - 1);
            arr[x - 1] = arr[x] + 1;
        }

        if (x + 1 <= 100000 && arr[x + 1] == 0) {
            q.push(x + 1);
            arr[x + 1] = arr[x] + 1;
        }

        if (2 * x <= 100000 && arr[2 * x] == 0) {
            q.push(x * 2);
            arr[x * 2] = arr[x] + 1;
        }
    }

    return 0;

}
   
