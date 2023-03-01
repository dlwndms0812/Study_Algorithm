#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> s;
    string str;
    int cnt;
    
    cin >> str;
    cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push('(');
        else if (str[i] == ')' && str[i - 1] == '(')
        {
            s.pop();
            cnt += s.size();
        }
        else
        {
            s.pop();
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
