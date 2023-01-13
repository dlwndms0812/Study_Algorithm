/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    
    stack<int> s;
    vector<int> v(n + 1, 0);
    vector<int> cnt(1000001, 0);
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
        cnt[tmp]++;
    }
    
    for (int i = n; i > 0; i--)
    {
        if (!s.empty())
        {
            while (!s.empty())
            {
                if (cnt[s.top()] > cnt[v[i]])
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
    
    for (int i = 1; i <= n; i++)
        printf("%d ", ans[i]);

    return 0;
}
