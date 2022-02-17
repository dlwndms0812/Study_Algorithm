#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[300000] = { 0 };
  
    while (1) {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int cnt = 0;
        
        for (int i = 0; i <= 2 * n; i++) {
            arr[i] = 0;
        }

        for (int i = 2; i <= 2 * n; i++) {
           
            for (int j = i + i; j <= 2 * n; j += i) {
                if (arr[j] != 1)
                    arr[j] = 1;
            }
        }

        for (int i = n + 1; i <= 2 * n; i++) {
            if (arr[i] == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
   
