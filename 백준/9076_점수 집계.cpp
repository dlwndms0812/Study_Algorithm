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
        vector<int> v(5);
        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        if (v[3] - v[1] >= 4)
            printf("KIN\n");
        else
            printf("%d\n", v[1] + v[2] + v[3]);
        
        n--;
    }
    
    
    

    return 0;
}
