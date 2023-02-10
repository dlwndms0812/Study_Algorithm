#include <iostream>

using namespace std;

int main()
{
    int tmp;
    int sum[2] = { 0 };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> tmp;
            sum[i] += tmp;
        }
    }
    if (sum[0] > sum[1])
        printf("%d\n", sum[0]);
    else
        printf("%d\n", sum[1]);

    return 0;
}
