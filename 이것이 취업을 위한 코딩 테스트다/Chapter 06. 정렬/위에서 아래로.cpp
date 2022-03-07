#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int x, int y) {
    return x > y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n;
    cin >> n;
    
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
   
