#include <iostream>
#include <cstring>
using namespace std;

int arr[1001];
bool visited[1001] = { false };
int n;


void cal(int k) {
    for (int i = 1; i <= k; i++) {
        if (visited[i] == false) {
            arr[i] = i * (i + 1) / 2;
            visited[i] = true;
           
        }
    }
}

bool fun(int k) {
   
    cal(k);
    
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k; j++) {
            for (int p = 1; p <= k; p++) {
                int res = arr[i] + arr[j] + arr[p];
                
                if (res == k)
                    return true;
            }
        }
    }


    return false;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    arr[0] = 0;
    visited[0] = true;
   

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        cout << fun(k) << endl;
    }

    return 0;

}
   
