#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr1[1000001];
int arr2[1000001];
int ans[2000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    int i = 0;
    int j = 0;
    int idx = 0;
    while (idx < n + m)
    {
        if (arr1[i] > arr2[j])
        {
            ans[idx] = arr2[j];
            j++;
        }
        else
        {
            ans[idx] = arr1[i];
            i++;
        }

        idx++;

        if (i == n)
        {
            for (int p = j; p < m; p++)
            {
                ans[idx] = arr2[p];
                idx++;
            }
        }

        else if (j == m)
        {
            for (int p = i; p < n; p++)
            {
                ans[idx] = arr1[p];
                idx++;
            }
        }
    }

    for (int i = 0; i < n + m; i++)
        cout << ans[i] << " ";
    return 0;
}
