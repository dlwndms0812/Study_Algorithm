import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        
        Stack<Integer> st = new Stack<Integer>();
        
        for (int i = arr.length - 1; i >= 0; i--) {
            if (!st.empty()) {
                if (st.peek() != arr[i])
                    st.push(arr[i]);
            }
            else
                st.push(arr[i]);
        }
        
        int[] answer = new int[st.size()];
        
        for (int i = 0; i < answer.length; i++)
            answer[i] = st.pop();

        return answer;
    }
}
