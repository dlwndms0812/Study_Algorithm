#include <iostream>
#include <deque>

using namespace std;


int main()
{
    int cnt = 0;
    deque<int> d;
    
    int n, m;
    cin >> n >> m;
    
    int tmp;
    for (int i = 1; i <= n; i++)
    {
        d.push_back(i);
    }
    
    int idx = 0;
    while (m > 0)
    {
        int tmp;
        cin >> tmp;
        
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i] == tmp)
            {
                idx = i;
                break;
            }
        }
        
        if (idx < d.size() - idx)
        {
            while (1)
            {
                if (d.front() == tmp)
                {
                    d.pop_front();
                    break;
                }
                cnt++;
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else 
        {
            while (1)
            {
                if (d.front() == tmp)
                {
                    d.pop_front();
                    break;
                }
                cnt++;
                d.push_front(d.back());
                d.pop_back();
            }
        }
        
        m--;
    }
    
    printf("%d\n", cnt);
    return 0;
}
