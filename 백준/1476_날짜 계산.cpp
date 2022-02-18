#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt = 0;
    int e, s, m;
    cin >> e >> s >> m;

    int E = 0, S = 0, M = 0;

    while (1) {
        if (E == e && S == s && M == m) {
            cout << cnt;
            break;
        }
        cnt++;
        E++;
        S++;
        M++;
        if (E == 16) {
            E = 1;
        }
        if (S == 29)
            S = 1;
        if (M == 20)
            M = 1;
    }
    return 0;
}
   
