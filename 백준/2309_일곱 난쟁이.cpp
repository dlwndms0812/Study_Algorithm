#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[9];
    int res[7];

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    int p, q;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cnt = 0;
            for (int k = 0; k < 9; k++) {
                if (i == j)
                    continue;
                if (k == i || k == j)
                    continue;
                cnt += arr[k];
               
            }
            if (cnt == 100) {
                p = i;
                q = j;
                break;
            }
        }
    }
    
    int r = 0;
    for (int i = 0; i < 9; i++) {
        if (i == p || i == q) {
            continue;
        }
        res[r] = arr[i];
        r++;
    }
   
    sort(res, res + 7);
    for (int i = 0; i < 7; i++) {
        cout << res[i] << endl;
    }
    return 0;
}
   
