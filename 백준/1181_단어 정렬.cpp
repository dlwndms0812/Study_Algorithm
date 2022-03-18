#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


bool compare(string a, string b) {
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> v;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0] << endl;

    for (int i = 1; i < n; i++) {
        if (v[i - 1] == v[i]) {
            continue;
        }
        cout << v[i] << endl;
    }
    return 0;

}
   
