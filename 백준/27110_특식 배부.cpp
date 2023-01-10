#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[3];
    
    cin >> n;
    cin >> arr[0] >> arr[1] >> arr[2];
    
    int cnt = 0;
    
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] <= n)
            cnt+= arr[i];
        else
            cnt += n;
    }
    printf("%d\n",cnt);
        
    
    return 0;
}
