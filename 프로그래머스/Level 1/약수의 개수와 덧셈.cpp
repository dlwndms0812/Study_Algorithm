#include <string>
#include <vector>

using namespace std;
int fun(int k){
    int n=0;
    for(int i=1;i<=k;i++){
        if(k%i==0)
            n++;
    }
    return n;
}
int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++){
        int n=fun(i);
        if(n%2==0)
            answer+=i;
        else
            answer-=i;
    }
    return answer;
}
