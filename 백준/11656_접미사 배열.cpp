#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    string arr[1001];

    for (int i = 0; i < str.size(); i++) {
        arr[i] = str.substr(i, str.size() - i);
    }

    sort(arr, arr + str.size());

    for (int i = 0; i < str.size(); i++) {
        cout << arr[i] << endl;
    }

	return 0;
}
