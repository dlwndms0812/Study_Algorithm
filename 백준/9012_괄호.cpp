#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int>s;
string str;
bool check;

bool fun(string str) {
	while(!s.empty()) {
		s.pop();
	}

	for (int j = 0; j < str.size(); j++) {
		if (str[j] == '(')
			s.push(1);
		else if (!s.empty() && str[j] == ')')
			s.pop();
		else if (s.empty() && str[j] == ')') {
			check = false;
			return check;
		}
	}

	if (s.empty())
		return true;
	else
		return false;
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	
	

	for (int i = 0; i < n; i++) {
		cin >> str;
		bool b;
		b=fun(str);
		if (b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}

