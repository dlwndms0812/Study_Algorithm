#include <iostream>
#include <string>
using namespace std;

bool fun(string str) {
    bool arr[26] = { false };
    arr[str[0] - 'a'] = true;
    bool check = false;
    for (int i = 1; i < str.size(); i++) {
        if (str[i - 1] == str[i]) {
            arr[str[i] - 'a'] = true;
        }
        else if ((str[i - 1] != str[i]) && !arr[str[i] - 'a']) {
            arr[str[i] - 'a'] = true;
        }
        else if ((str[i - 1] != str[i]) && arr[str[i] - 'a']) {
            return check;
        }
    }
    check = true;
    return check;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (fun(str))
            cnt++;
    }
    cout << cnt;
    return 0;
}
   
