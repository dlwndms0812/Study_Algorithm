#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    
    stack<int> s;
    vector<int> v;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    for (int i = n -1; i >= 0; i--)
    {
        if (!s.empty())
        {
            while (!s.empty())
            {
                if (s.top() > v[i])
                    break;
                s.pop();
            }
            if (s.empty())
                ans[i] = -1;
            else    
                ans[i] = s.top();
        }
        else
            ans[i] = -1;
            
        s.push(v[i]);
    }
    
    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
