#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int arr[2][6] = { 0 };
    
    cin >> n >> k;
    
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[a][b - 1]++;
    }
    
    int cnt = 0;
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i][j] > 0)
            {
                if (arr[i][j] <= k)
                    cnt++;
                else
                {
                    if (arr[i][j] % k == 0)
                        cnt += arr[i][j] / k;
                    else
                        cnt += arr[i][j] / k + 1;
                }
            }
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}
