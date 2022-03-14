class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        int n=s.size();
        int m=0;
        while(n>0){
            if(s[m]=='(')
                st.push('(');
            
            
            else if(s[m]=='[')
                st.push('[');
            
            
            else if(s[m]=='{')
                st.push('{');
            
            
            else if(s[m]==')'){
                if(st.empty())
                    return false;
                char c=st.top();
                if(c!='(')
                    return false;
                st.pop();
            }
        
            
            else if(s[m]==']'){
                
                if(st.empty())
                    return false;
                char c=st.top();
                if(c!='[')
                    return false;
                st.pop();
            }
            
            
            else if(s[m]=='}'){
                
                if(st.empty())
                    return false;
                char c=st.top();
                if(c!='{')
                    return false;
                st.pop();
            }
            
            n--;
            m++;
        }
        
        if(!st.empty())
            return false;
        
        return true;
    }
};
