#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t > 0)
    {
        int n, sum, tmp;
        cin >> n;
        
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            sum += tmp;
        }
        printf("%d\n", sum);
        
        t--;
    }

    return 0;
}
