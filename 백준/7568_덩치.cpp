#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[2][51] = { 0 };
    int check = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[0][i] = x;
        arr[1][i] = y;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((arr[0][i] < arr[0][j]) && (arr[1][i] < arr[1][j])) {
                check++;
            }
        }
        cout << check << endl;
        check = 1;
    }
   
    return 0;
}
   
