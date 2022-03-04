#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    string str;
    cin >> str;
    int n = str[0] - 'a' + 1;
    int m = int(str[1])-48;

    int dx[8] = { 2, 2, -2, -2, 1, -1, 1, -1 };
    int dy[8] = { 1,-1, 1, -1, 2, 2, -2, -2 };
    int cnt = 0;
    
    for (int i = 0; i < 8; i++) {
        int nx = n + dx[i];
        int ny = m + dy[i];

        if (nx <= 8 && ny <= 8 && nx >= 1 && ny >= 1)
            cnt++;
        
    }
    cout << cnt;
    return 0;
}
   
