#include <iostream>
#include <vector>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        float sum = 0;
        for (int j = 0; j < m; j++) {
            int k = 0;
            cin >> k;
            sum += k;
            v.push_back(k);
        }
        sum = sum / m;
        
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (v[j] > sum)
                cnt++;
        }
        printf("%.3f%%\n", (float)cnt / m * 100);
        v.clear();
    }
    
   
    return 0;
}
   
