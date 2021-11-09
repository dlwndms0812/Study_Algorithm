#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(1){
        int x=0;
        x=n%10;
        n=n/10;
        answer+=x;
        if(n<10)
            break;
    }
    
    answer+=n;
    
    cout << answer << endl;

    return answer;
}
