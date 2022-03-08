#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
vector<int>v2;

int binarySearch(int k, int left, int right) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (v[mid] == k)
            return mid;
        else if (v[mid] > k)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n, m;
    cin >> n;
    

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    
    cin >> m;

    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        v2.push_back(b);
    }

    for (int i = 0; i < m; i++) {
        int res = binarySearch(v2[i], 0, n - 1);
        if (res != -1) {
            cout << "yes" << " ";
        }
        else
            cout << "no" << " ";
    }
    return 0;
}
   
