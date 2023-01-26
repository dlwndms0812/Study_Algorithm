#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        vector<int> v;
        int tmp;
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                v.push_back(tmp);
                sum += tmp;
            }
        }
        sort(v.begin(), v.end());
        printf("%d %d\n", sum, v[0]);
        n--;
    }

    return 0;
}
