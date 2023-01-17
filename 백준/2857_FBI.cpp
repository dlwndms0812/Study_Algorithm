#include <iostream>
#include <string>
#include <vector> 

using namespace std;


int main()
{
    vector<int> v;
    for (int i = 0 ; i < 5; i++)
    {
        string str;
        cin >> str;
        
        if (str.find("FBI") != string::npos)
            v.push_back(i + 1);
    }
    
    if (v.empty())
        printf("HE GOT AWAY!");
    else
    {
        for (int i = 0; i < v.size(); i++)
            printf("%d ", v[i]);
    }
    
    return 0;
}
