#include <iostream>
#include <algorithm>
using namespace std;

int arr_1[100001];
int arr_2[100001];
int res[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr_1[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr_2[i];
    }
    sort(arr_1, arr_1 + n);

    for (int i = 0; i < m; i++) {
        int right = n - 1;
        int left = 0;
        while (left <= right) {
            int mid = (right + left) / 2;
            if (arr_1[mid] == arr_2[i]) {
                res[i] = 1;
                break;
            }
            if (arr_1[mid] > arr_2[i])
                right = mid - 1;

            else
                left = mid + 1;
        }
    }

    for (int i = 0; i < m;  i++) {
        cout << res[i] << ' ';
    }
    
	return 0;
}
