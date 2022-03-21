#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        int k;
        cin >> k;

        if (n == k)
            cnt++;
    }

    cout << cnt;
    return 0;

}
   
