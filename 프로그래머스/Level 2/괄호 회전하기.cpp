#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.size();
    
    for (int i = 0; i < len; i++) {
        stack<char> st;
        bool flag = true;
        
        for (int j = i; j < len; j++) {
            if (flag == false)
                break;
            
            if (s[j] == '[' || s[j] == '(' || s[j] == '{')
                st.push(s[j]);
            else {
                if (st.empty())
                    flag = false;
                else {
                    if ((s[j] == ']' && st.top() == '[') ||
                        (s[j] == ')' && st.top() == '(') ||
                        (s[j] == '}' && st.top() == '{'))
                        st.pop();
                }
            }
        }
        
        for (int j = 0; j < i; j++) {
            if (flag == false)
                break;
            
            if (s[j] == '[' || s[j] == '(' || s[j] == '{')
                st.push(s[j]);
            else {
                if (st.empty())
                    flag = false;
                else {
                    if ((s[j] == ']' && st.top() == '[') ||
                        (s[j] == ')' && st.top() == '(') ||
                        (s[j] == '}' && st.top() == '{'))
                        st.pop();
                }
            }
        }
        
        if (!st.empty())
            flag = false;
        
        if (flag == true)
            answer++;
            
    }
    
    return answer;
}
