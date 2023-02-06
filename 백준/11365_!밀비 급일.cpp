#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);
        
        if (str == "END")
            break;
        
        for (int i = str.size() - 1; i >= 0; i--)
            printf("%c", str[i]);
        printf("\n");
    }

    return 0;
}
