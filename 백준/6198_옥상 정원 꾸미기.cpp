#include <iostream>
#include <stack>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    
    stack<int> s;
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        
        while(!s.empty())
        {
            if (s.top() > tmp)
                break;
            s.pop();
        }
        
        cnt += s.size();
        s.push(tmp);
    }
    printf("%lld\n", cnt);

    return 0;
}
