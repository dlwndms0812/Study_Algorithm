#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n==0)
        return answer=0;
    else
        for(int i=1;i<=n;i++){
            if(n%i==0){
                answer+=i;
            }
        }
    return answer;
}
