#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[11];
    long long n;
    cin >> n;
    int i = 0;
    while (1) {
        if (n < 10) {
            arr[i] = n;
            break;
        }
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }
    

    sort(arr, arr + i + 1);

    for (int j = 0; j <= i; j++) {
        cout << arr[i - j];
    }
   
  
    return 0;
}
   
