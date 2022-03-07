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
       
    int n, k;
    cin >> n >> k;
    
    vector<int> v1;
    vector<int> v2;
  
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v2.push_back(a);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), compare);

    for (int i = 0; i < k; i++) {
        if (v1[i] < v2[i])
            swap(v1[i], v2[i]);
    }
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += v1[i];
    }
    cout << sum;

    return 0;
}
   
