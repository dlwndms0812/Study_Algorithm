#include <iostream>
#include <stack>

using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);
        
        
        if (str == ".")
            break;
        
        stack<char> s;
        bool flag = true;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '[' || str[i] == '(')
                s.push(str[i]);
            else if (str[i] == ']' || str[i] == ')')
            {
                if (s.empty())
                {
                    flag = false;
                    break;
                }
                if (str[i] == ']')
                {
                    if (s.top() != '[')
                    {
                        flag = false;
                        break;
                    }
                    s.pop();
                }
                else if (str[i] == ')')
                {
                    if (s.top() != '(')
                    {
                        flag = false;
                        break;
                    }
                    s.pop();
                }
                
            }
        }
        
        if (!s.empty())
            flag = false;
            
        if (flag == true)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
