#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int a=x;
    int b=0;
    while(x>0) {
        b+=x%10;
        x=x/10;
    }
    if(a%b!=0){
        answer=false;
    }
    
    return answer;
}

//주어지는 수가 10의자리 수만 있지 않다는 것을 간과하였음
