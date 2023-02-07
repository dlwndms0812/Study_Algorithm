#include <iostream>

using namespace std;

int main()
{
    int i;
    
    cin >> i;
    while (i > 0)
    {
        string str;
        cin >> str;
        
        if (str.size() == 1)
            printf("%c%c\n", str[0], str[0]);
        else
            printf("%c%c\n", str[0], str[str.size() - 1]);
        i--;
    }

    return 0;
}
