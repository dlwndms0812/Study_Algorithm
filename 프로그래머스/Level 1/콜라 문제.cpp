#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a)
    {
        answer += b * (n / a);
        n = n - (a * (n / a)) + (b * (n / a)); 
    }
    return answer;
}
