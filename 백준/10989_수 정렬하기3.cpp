#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	int n;
	cin >> n;
	int arr[10001] = { 0 };
	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr[k]++;
	}


	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}

