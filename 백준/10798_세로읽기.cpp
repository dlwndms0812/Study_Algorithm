#include <iostream>

using namespace std;

int main()
{
    string str[5];
    int max = 0;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> str[i];
        if (max < str[i].size())
            max = str[i].size();
    }
    string result = "";
    
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < str[j].size())
                result += str[j][i]; 
        }
    }
    
    cout << result;
    return 0;
}
