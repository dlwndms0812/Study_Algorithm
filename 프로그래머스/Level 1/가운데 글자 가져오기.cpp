#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int n=s.size();
    int k=0;
    if(n%2!=0){
        k=n/2;
        answer=s[k];
    }
    else{
        k=n/2;       
        answer=s[k-1];
        answer+=s[k];
    }
    
    return answer;
}
