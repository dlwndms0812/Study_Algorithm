#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int pp=0;
    int yy=0;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='p' || s[i]=='P')
            pp++;
        else if(s[i]=='y' || s[i]=='Y')
            yy++;
    }
    if(pp!=yy)
        answer=false;

    cout << answer << endl;

    return answer;
}
