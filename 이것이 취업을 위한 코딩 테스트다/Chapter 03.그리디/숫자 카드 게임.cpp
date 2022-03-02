#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int check[101];
    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int t = 10001;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (t > a)
                t = a;
        }
        check[i] = t;
    }
    sort(check, check + n);
    cout << check[n-1];
    return 0;
}
   
