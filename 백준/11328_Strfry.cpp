#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n > 0)
    {
        string str1, str2;
        int arr[26] = { 0 };
        
        cin >> str1 >> str2;
        
        for (int i = 0; i < str1.size(); i++)
            arr[str1[i] - 'a']++;
        for (int i = 0; i < str2.size(); i++)
            arr[str2[i] - 'a']--;
        
        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {   
                flag = -1;
                break;
            }
        }
        if (flag == 1)
            printf("Possible\n");
        else
            printf("Impossible\n");
        
        n--;
    }
    
    return 0;
}
