#include <iostream>
#include <String>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n;
    string str;
    cin >> n;
    cin.ignore();
    getline(cin, str);

    int dy[4] = { -1,1,0,0 };
    int dx[4] = { 0,0,-1,1 };
    char c[4] = { 'L','R','U','D' };
    int x = 1;
    int y = 1;
    int nx = 0;
    int ny = 0;
    for (int i = 0; i < str.size(); i++) {
        char cc = str[i];
        for (int j = 0; j < 4; j++) {
            if (cc == c[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        if (nx<1 || ny<1 || nx>n || ny>n) {
            continue;
        }
        x = nx;
        y = ny;
      
    }

    cout << x << " " << y;
    return 0;
}
   
