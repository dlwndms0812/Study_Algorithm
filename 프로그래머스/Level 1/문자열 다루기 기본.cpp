#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if(s.size()>6 || s.size()<4 || s.size()==5)
        answer=false;

    for(int i=0;i<s.size();i++){
        if((s[i]-'A')>=0){
            answer=false;
            break;
        }
    }
    return answer;
}
