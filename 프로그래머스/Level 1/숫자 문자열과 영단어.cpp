#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0'){
            str+=s[i];
        }
        else if(s[i]=='z' && s[i+1]=='e' && s[i+2=='r'] &&s[i+3]=='o' ){
            str+="0";
        }
        
        else if(s[i]=='o' && s[i+1]=='n' &&s[i+2]=='e')
            str+="1";
        else if(s[i]=='t'){
            if(s[i+1]=='w' && s[i+2]=='o')
                str+="2";
            else if(s[i+1]=='h' && s[i+2]=='r' && s[i+3]=='e' &&s[i+4]=='e')
                str+="3";
        }
        
        else if(s[i]=='f'){
            if(s[i+1]=='o' && s[i+2]=='u' && s[i+3]=='r')
                str+="4";
            else if(s[i+1]=='i' && s[i+2]=='v' && s[i+3]=='e')
                str+="5";
            
        }
        
        else if(s[i]=='s'){
            if(s[i+1]=='i'&&s[i+2]=='x')
                str+="6";
            else if(s[i+1]=='e' && s[i+2]=='v' && s[i+3]=='e' &&s[i+4]=='n')
                str+="7";
        }
        
        else if(s[i]=='e' && s[i+1]=='i' && s[i+2]=='g' && s[i+3]=='h' && s[i+4]=='t')
            str+="8";
        else if(s[i]=='n' && s[i+1]=='i' && s[i+2]=='n' && s[i+3]=='e')
            str+="9";
    }
    answer=stoi(str);
    return answer;
}
