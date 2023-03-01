#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);
        
        if (str == "#")
            break;
        
        int cnt;
        
        cnt = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                cnt++;
            else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                cnt++;
        }
        printf("%d\n", cnt);
    }
    
    return 0;
}
