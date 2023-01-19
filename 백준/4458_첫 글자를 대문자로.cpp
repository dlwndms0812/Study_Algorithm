#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin, str);
        
        for (int i = 0; i < str.size(); i++)
        {
            if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
                printf("%c", str[i] - 32);
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
