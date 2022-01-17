#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[26];
    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (arr[str[i] - 'a'] == -1) {
            arr[str[i] - 'a'] = i;
        }

    }

    for (int i = 0; i < 26; i++) {
        cout << arr[i] << endl;
    }
    return 0;
	
}
