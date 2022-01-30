#include <string>
#include <vector>

using namespace std;

int fun(int n, int m){
    while(m!=0){
       int k=n%m;
       n=m;
       m=k;
    }
    return n;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
   
    int x=fun(n,m);
    answer.push_back(x);
    answer.push_back(x*(n/x)*(m/x));
    
    return answer;
}
