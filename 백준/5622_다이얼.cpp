#include <iostream>
#include <string>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;

    cin >> str;

    int cnt = 0;

    int arr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        cnt = cnt + arr[str[i] - 'A'];
    }
   
    cout << cnt;
    return 0;

}
   
