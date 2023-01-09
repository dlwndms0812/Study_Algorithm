#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string str1, str2;
    
    getline(cin, str1);
    getline(cin, str2);
    
    int arr[26] = { 0 };

    for (int i = 0; i < str1.size(); i++)
        arr[str1[i] - 'a']++;
    for (int i = 0; i < str2.size(); i++)
        arr[str2[i] - 'a']--;

    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {   
            cnt += abs(arr[i]);
        }
    }
    printf("%d\n",cnt);
    return 0;
}
