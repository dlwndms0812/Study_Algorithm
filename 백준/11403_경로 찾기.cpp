#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            if (k == 0)
                arr[i][j] = 10000;
            else
                arr[i][j] = 1;
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 10000)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << "\n";
    }


    return 0;

}
   
