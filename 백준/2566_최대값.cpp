#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int tmp;
    int x = 1;
    int y = 1;
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> tmp;
            if (tmp > max)
            {
                max = tmp;
                x = j + 1;
                y = i + 1;
            }
        }
    }
    
    printf("%d\n", max);
    printf("%d %d\n", y, x);
    
    return 0;
}
