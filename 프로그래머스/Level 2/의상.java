import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        
        HashMap<String, Integer> map = new HashMap<>();
        
        for (String [] str : clothes) {
            String category = str[1];
            map.put(category, map.getOrDefault(category, 0) + 1);
        }
        
        for (String str : map.keySet()) {
            answer *= (map.get(str) + 1);
        }
        
        return answer - 1;
    }
}
