#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    
    int x;
    cin >> x;
    
    int cnt = 0;
    
    sort(v.begin(), v.end());
   
    int right = 0;
    int left = n - 1;
    
    while (right < left)
    {
        if (v[right] + v[left] < x)
            right++;
        else if (v[right] + v[left] > x)
            left--;
        else 
        {
            cnt++;
            left--;
            right++;
        }
        
    }
    printf("%d\n", cnt);
    
    return 0;
}
