#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum = 0;
    while (n > 0)
    {
        string str;
        cin >> str;
        
        stack<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'A')
            {
                if (s.empty())
                    s.push('A');
                else
                {
                    if (s.top() == 'A')
                        s.pop();
                    else
                        s.push('A');
                        
                }
            }
            else if (str[i] == 'B')
            {
                if (s.empty())
                    s.push('B');
                else
                {
                    if (s.top() == 'B')
                        s.pop();
                    else
                        s.push('B');
                        
                }
            }
        }
        
        if (s.empty())
            sum++;
        n--;
    }

    printf("%d\n", sum);
    return 0;
}
