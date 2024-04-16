import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for (int i : nums) {
            if (map.containsKey(i) == true)
                map.put(i, map.get(i) + 1);
            else
                map.put(i, 1);
        }
        
        int n = nums.length;
        
        if (map.size() >= n / 2)
            answer = n / 2;
        else
            answer = map.size();
        return answer;
    }
}
