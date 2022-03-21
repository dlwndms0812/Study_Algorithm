#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    map<string, int>m;
    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        m[str]++;
    }
    int cnt = 0;

    for (auto i = m.begin(); i != m.end(); i++) {
        cnt = max(cnt, i->second);
    }

    for (auto i = m.begin(); i != m.end(); i++) {
        if (cnt == i->second) {
            cout << i->first;
            return 0;
        }

    }
    return 0;

}
   
