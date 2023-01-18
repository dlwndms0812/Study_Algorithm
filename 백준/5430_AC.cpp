#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t > 0)
    {
        string str, arr;
        int n;
        cin >> str;
        cin >> n;
        cin >> arr;
        
        deque<int> d;
        bool reverse = false;
        bool check = true;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != '[' && arr[i] != ']' && arr[i] != ',')
            {
                int num = 0 ;
                while (arr[i] != '[' && arr[i] != ']' && arr[i] != ',')
                {
                    num += (arr[i] - '0');
                    num *= 10;
                    i++;
                }
                num /= 10;
                d.push_back(num);
            }
        }
        
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'R')
                reverse = !reverse;
            else if (str[i] == 'D')
            {
                if (d.empty()) 
                {
                    check = false;
                    break;
                }
                else
                {
                    if (reverse == true)
                        d.pop_back();
                    else
                        d.pop_front();
                }
            }
            
        }
        
        if (check == false)
            printf("error\n");
        else if (reverse == false)
        {
            printf("[");
            for (int i = 0; i < d.size(); i++)
            {
                printf("%d", d[i]);
                if (i != d.size() -1)
                    printf(",");
            }
            printf("]\n");
        }
        else if (reverse == true)
        {
            printf("[");
            for (int i = d.size() - 1; i >= 0; i--)
            {
                printf("%d", d[i]);
                if (i != 0)
                    printf(",");
            }
            printf("]\n");
        }
        
        t--;
    }

    return 0;
}
