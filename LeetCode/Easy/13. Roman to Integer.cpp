class Solution {
public:
    int romanToInt(string s) {
        int cnt=0;
        int ss=s.size();
        int n=0;
        while(ss>0){
            char c=s[n];
            
            if(c=='I'){
                if(s[n+1]=='V'){
                    cnt+=4;
                    n++;
                    ss--;
                }
                else if(s[n+1]=='X'){
                    cnt+=9;
                    n++;
                    ss--;
                }
                else
                    cnt+=1;
            }
                
            else if(c=='V')
                cnt+=5;
            
            else if(c=='X'){
                if(s[n+1]=='L'){
                    cnt+=40;
                    n++;
                    ss--;
                }
                else if(s[n+1]=='C'){
                    cnt+=90;
                    n++;
                    ss--;
                }
                else
                    cnt+=10;
            }
            
            else if(c=='L')
                cnt+=50;
            
            else if(c=='C'){
                if(s[n+1]=='D'){
                    cnt+=400;
                    n++;
                    ss--;
                }
                else if(s[n+1]=='M'){
                    cnt+=900;
                    n++;
                    ss--;
                }
                else
                    cnt+=100;
            }
            else if(c=='D')
                cnt+=500;
            
            else 
                cnt+=1000;
            
            n++;
            ss--;
        }
        
        return cnt;
    }
};
