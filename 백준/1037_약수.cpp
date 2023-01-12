#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    vector<int> v;
    
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    if (n != 1)
    {
        sort(v.begin(), v.end());
        printf("%d\n", v[0] * v[n - 1]);
    }
    else
        printf("%d\n", v[0] * v[0]);

    return 0;
}
