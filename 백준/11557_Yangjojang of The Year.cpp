/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    
    cin >> t;

    while (t > 0) {
        int n;
        vector<pair<string, int>> v;

        cin >> n;

        for (int i = 0; i < n; i++) {
            string str;
            int tmp;

            cin >> str >> tmp;

            v.push_back({str, tmp});
        }

        sort(v.begin(), v.end(), cmp);

        cout << v[0].first << endl;
        
        t--;
    }

}
