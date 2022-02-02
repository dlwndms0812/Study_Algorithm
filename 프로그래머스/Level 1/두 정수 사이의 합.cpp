#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b){
        int k=a;
        a=b;
        b=k;
    }
    
    for(int i=a;i<=b;i++){
        answer+=i;
    }
    return answer;
}
