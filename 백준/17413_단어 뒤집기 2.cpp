#include <iostream>
#include <algorithm>
#include <stack>


using namespace std;

stack<char> s;

void get_stack()
{
    while (!s.empty())
    {
        printf("%c",s.top());
        s.pop();
    }
}

int main()
{
    string str;
    
    getline(cin, str);
    bool flag = false;
    
    for(int i = 0; i < str.size(); i++)
    {
        if (flag == true)
        {
            if (str[i] == '>')
                flag = false;
            printf("%c", str[i]);
        }
        else if (str[i] == ' ')
        {
            get_stack();
            printf(" ");
        }
        else if (str[i] == '<')
        {
            get_stack();
            flag = true;
            printf("<");
        }
        else
            s.push(str[i]);
        
    }
    get_stack();
    return 0;
}
