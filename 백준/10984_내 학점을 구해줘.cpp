#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        int cnt;
        float sum;
        
        cnt = 0;
        sum = 0;
        
        int tmp1;
        float tmp2;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp1 >> tmp2;
            cnt += tmp1;
            sum += tmp2 * tmp1;
        }
        
        printf("%d %.1f\n", cnt, sum / cnt);
        t--;
    }

    return 0;
}
