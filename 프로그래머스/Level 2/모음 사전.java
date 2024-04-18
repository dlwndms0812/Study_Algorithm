import java.util.*;

class Solution {
    String[] alpha = { "A", "E", "I", "O", "U" };
    ArrayList<String> list = new ArrayList<>();
    
    public void dfs(String str, int len) {
        list.add(str);
        
        if (len == 5)
            return;
        
        for (int i = 0; i < 5; i++)
            dfs(str + alpha[i], len + 1);
    }
    
    public int solution(String word) {
        int answer = 0;
        
        dfs("", 0);
        
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).equals(word))
                return i;
        }
        return answer;
    }
}
