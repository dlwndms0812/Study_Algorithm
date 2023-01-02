#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int cnt = 0;
    
    if (num == 0 || num == 1)
        return 0;
    
    long n = num;
    while (1) 
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        cnt++;
        
        if (n == 1)
            break;
        if (cnt == 500)
            return -1;
    }
    
    answer = cnt;
    return answer;
}
