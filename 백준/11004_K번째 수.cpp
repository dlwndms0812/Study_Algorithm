#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	vector<long long>v;
	
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		v.push_back(j);

	}
	sort(v.begin(), v.end());

	cout << v.at(k-1);
	return 0;
}

