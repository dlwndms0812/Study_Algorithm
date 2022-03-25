#include <iostream>
using namespace std;

int arr[27][2];


void pre(int c) {
    if (c == -1)
        return;
    cout << char(c+'A');
    pre(arr[c][0]);
    pre(arr[c][1]);
}

void in(int c) {
    if (c == -1)
        return;
    in(arr[c][0]);
    cout << char(c+'A');
    in(arr[c][1]);
}

void post(int c) {
    if (c == -1)
        return;
    post(arr[c][0]);
    post(arr[c][1]);
    cout << char(c+'A');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
  
  
    for (int i = 0; i < n; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        if (b == '.')
            arr[a-'A'][0] = -1;
        else
            arr[a - 'A'][0] = b - 'A';

        if (c == '.')
            arr[a - 'A'][1] = -1;
        else
            arr[a - 'A'][1] = c - 'A';

    }

   
    pre(0);
    cout << endl;
    in(0);
    cout << endl;
    post(0);
   
    return 0;

}
   
