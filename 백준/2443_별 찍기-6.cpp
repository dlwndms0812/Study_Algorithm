#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        int k = i * 2 - 1;
        for (int j = (k / 2) + 1; j < n; j++) {
            cout << " ";
        }

        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        cout << "\n";
    }
 

    return 0;

}
   
