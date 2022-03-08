#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int res = 0;
int n, m;
void binarySearch(int left, int right) {
    while (left <= right) {

        int mid = (left + right) / 2;
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > mid)
                cnt += v[i] - mid;
        }
        if (cnt < m) {
            right = mid - 1;
        }
        else {
            res = mid;
            left = mid + 1;
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    cin >> n >> m;
    

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    
   
    binarySearch(0, 1000000);
    cout << res;
   
    return 0;
}
   
