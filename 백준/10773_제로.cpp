#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        
        if (tmp != 0)
            s.push(tmp);
        else
            s.pop();
    }
    
    int ans = 0;
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }
    printf("%d\n", ans);
}
