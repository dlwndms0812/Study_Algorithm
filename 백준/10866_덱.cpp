#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	deque<int>d;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push_front") {
			int k;
			cin >> k;
			d.push_front(k);
		}

		else if (str == "push_back") {
			int k;
			cin >> k;
			d.push_back(k);
		}

		else if (str == "pop_front") {
			if (d.empty())
				cout << -1 << endl;
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}

		else if (str == "pop_back") {
			if (d.empty())
				cout << -1 << endl;
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}

		else if (str == "size")
			cout << d.size() << endl;

		else if (str == "empty") {
			cout << d.empty() << endl;
		}

		else if (str == "front") {
			if (d.empty())
				cout << -1 << endl;
			else
				cout << d.front() << endl;
		}

		else if (str == "back") {
			if (d.empty())
				cout << -1 << endl;
			else
				cout << d.back() << endl;
		}
	}
	return 0;
}

