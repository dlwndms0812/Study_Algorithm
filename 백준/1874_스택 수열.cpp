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
    vector<char> ans;
    
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    int idx = 0;
    int j = 1;
    s.push(0);
    
    while (idx < n)
    {
        if (j > n + 1)
        {
            printf("NO\n");
            return 0;
        }
        
        if (s.top() < v[idx])
        {
            s.push(j);
            ans.push_back('+');
            j++;
        }
        else if (s.top() > v[idx])
        {
            if (s.top() == 0 || s.empty())
            {
                printf("NO\n");
                return 0;
            }
            s.pop();
            ans.push_back('-');
        }
        else
        {
            s.pop();
            ans.push_back('-');
            idx++;
        }
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        printf("%c\n", ans[i]);
    }
    
}
