#include <iostream>
using namespace std;

char arr[51][51];
int n, m;

int W(int n,int k) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    if (arr[i + n][j + k] != 'W')
                        cnt++;
                }
                else {
                    if (arr[i + n][j + k] != 'B')
                        cnt++;
                }
            }
            else {
                if (j % 2 == 0) {
                    if (arr[i + n][j + k] != 'B')
                        cnt++;
                }
                else{
                    if (arr[i + n][j + k] != 'W')
                        cnt++;
                }

            }
        }
    }

    return cnt;
}

int B(int n,int k) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    if (arr[i + n][j + k] != 'B')
                        cnt++;
                }
                else {
                    if (arr[i + n][j + k] != 'W')
                        cnt++;
                }
            }
            else {
                if (j % 2 == 0) {
                    if (arr[i + n][j + k] != 'W')
                        cnt++;
                }
                else {
                    if (arr[i + n][j + k] != 'B')
                        cnt++;
                }

            }
        }
    }
    return cnt;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    cin >> n >> m;
   
    int cnt = 250;
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            arr[i][j] = ch;
        }
    }

    for (int i = 0; i <= n-8; i++) {
        for (int j = 0; j <= m-8; j++) {
            int w = W(i,j);
            int b = B(i,j);
            int k = 0;
            if (w > b)
                k = b;
            else
                k = w;

            if (cnt > k) {
                res = k;
                cnt = res;
            }
            
        }
   }
    cout << res;
  
    return 0;
}
   
