#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[10] = { 0 };
    
    cin >> n;
    
    while (n > 10)
    {
        arr[n % 10]++;
        n /= 10;
    }
    arr[n % 10]++;
    
    int tmp = (arr[6] + arr[9] + 1) / 2;
    arr[6] = tmp;
    arr[9] = 0;
    
    int max = -1;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", max);
    
    return 0;
}
