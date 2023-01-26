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
        vector<int> v(10);
        for (int i = 0; i < 10; i++)
            cin >> v[i];
        
        sort(v.begin(), v.end());
        printf("%d\n", v[7]);
        n--;
    }

    return 0;
}
