#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, string>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}

//stable sort(안정정렬)
//정렬을 했을때 중복된 값들의 순서가 변하지 않으면 안정 정렬, 그렇지 않으면 불안정 정렬
