#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		q.push(i);
	}
	int cnt = 1;

	while (q.size()>1) {
		if (cnt % 2 == 0) {
			int start = q.front();
			q.pop();
			q.push(start);
		}
		else
			q.pop();
		cnt++;

	}
	cout << q.front();
	return 0;

}
