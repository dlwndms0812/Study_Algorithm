#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num = 1;
    while (1) {
        int l, p, v;
        cin >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
            break;

        int cnt = 0;
        int i = v / p;
        int j= v % p;
        if (j > l)
            cnt += l * (i + 1);
        else
            cnt += l * i + j;
        cout << "Case " << num << ": " << cnt << endl;

        num++;
    }

    return 0;

}
   
