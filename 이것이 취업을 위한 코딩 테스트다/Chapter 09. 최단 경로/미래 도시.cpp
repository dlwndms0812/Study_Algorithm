#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[101][101];
   
    for (int i = 0; i < 101; i++) {
        fill(arr[i], arr[i] + 101, 1e9);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                arr[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    int p, q;
    cin >> p >> q;

    for (int k = 1; k <= n; k++) {
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                arr[a][b] = min(arr[a][b], arr[a][k] + arr[k][b]);
            }
        }
    }

    int res = arr[1][q] + arr[q][p];

    if (res >= 1e9)
        cout << -1;
    else
        cout << res;
    return 0;
}
   
