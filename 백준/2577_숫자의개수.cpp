#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    long long num;
    int arr[10] = { 0 };
    
    cin >> a >> b >> c;
    
    num = a * b * c;

    while (num > 10)
    {
        arr[num % 10]++;
        num /= 10;
    }
    arr[num]++;
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
