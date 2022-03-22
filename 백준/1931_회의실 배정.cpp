#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }

    sort(v.begin(), v.end());
    int cnt = 1;
    int check = v[0].first;
    for (int i = 1; i < n; i++) {
        if (check <= v[i].second) {
            cnt++;
            check = v[i].first;
        }
    }
    cout << cnt;


    return 0;

}
   
