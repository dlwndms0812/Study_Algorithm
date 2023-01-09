#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, k;
    vector<int> v;
    
    cin >> n >> k;
    
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    
    sort(v.begin(), v.end(), cmp);
    cout << v[k - 1];
    
    return 0;
}
