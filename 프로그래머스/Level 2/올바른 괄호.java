import java.util.*;

class Solution {
    boolean solution(String s) {
        boolean answer = true;

        Stack<Character> st = new Stack<>();
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            
            if (c == '(')
                st.push(c);
            else {
                if (!st.empty()) {
                    if (st.peek() == '(')
                        st.pop();
                }
                else
                    st.push(c);
            }
        }
        
        if (!st.empty())
            answer = false;
        
        return answer;
    }
}
