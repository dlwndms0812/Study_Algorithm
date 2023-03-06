#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    bool flag = true;
    
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            flag = false;
            break;
        }
    }
        
    if (flag)
        printf("1\n");
        
    else
        printf("0\n");
    return 0;
}
