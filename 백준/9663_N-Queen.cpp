#include <iostream>
#include <math.h>
using namespace std;

int cnt = 0;
int n;
int arr[16];

bool check(int row) {
    for (int i = 0; i < row; ++i) {
        if((arr[i]==arr[row]) || (row-i==abs(arr[row]-arr[i])))
            return false;
    }
    return true;
}

void nqueen(int row) {
    if (row == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++) {
        arr[row] = i;

        if (check(row))
            nqueen(row + 1);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    cin >> n;

    nqueen(0);

    cout << cnt;

    return 0;

}
   
