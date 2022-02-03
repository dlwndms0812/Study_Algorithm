#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[26] = { 0 };

    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a') {
            arr[str[i] - 'a']++;
        }
        else
            arr[str[i] - 'A']++;
    }
    
    int n = 0;
    int k = 0;
    for (int i = 0; i < 26; i++) {
        if (n < arr[i]) {
            n = arr[i];
            k = i;
        }

    }

    int cnt = 0;

    for (int i = 0; i < 26; i++) {
        if (n == arr[i])
            cnt++;
    }

    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(k + 'A');
	return 0;
}
