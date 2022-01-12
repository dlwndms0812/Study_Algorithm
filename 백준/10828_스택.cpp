#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	stack<int>s;
	int n;
	cin >> n;
	
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		
		if (str == "push") {
			int k;
			cin >> k;
			s.push(k);
		}

		else if (str == "pop") {
			if (s.empty())
				cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}

		else if (str == "size") {
			cout << s.size() << endl;
		}

		else if (str == "empty") {
			cout << s.empty() << endl;
		}

		else if (str == "top") {
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
	}
	return 0;
}

