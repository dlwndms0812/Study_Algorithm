#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", (str[i] - 32));
        else
            printf("%c", (str[i] + 32));
    }

    return 0;
}
