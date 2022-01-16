#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	int arr[26] = { 0 };

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		arr[str[i]-'a']++;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}

