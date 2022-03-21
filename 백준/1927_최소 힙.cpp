#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>>pq;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        if (k == 0) {
            if (pq.empty())
                printf("0\n");
            else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else
            pq.push(k);
    }
    return 0;

}
   
