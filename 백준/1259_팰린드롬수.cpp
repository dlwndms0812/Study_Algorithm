#include <iostream>
#include<string>
#include <cstring>
using namespace std;

int main() {
	string s;
	string ans;
	cin >> s;
	while (s != "0") {
		ans = "yes";
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() - i-1])
				ans = "no";
		}
		cout << ans << endl;
		cin >> s;
	}
	return 0;
}
