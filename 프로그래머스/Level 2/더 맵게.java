import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        int answer = 0;
        
        if (scoville.length <= 1)
            return -1;
        
        PriorityQueue<Integer> q = new PriorityQueue<>();
        
        for (int i : scoville)
            q.add(i);
        
        while (!q.isEmpty()) {
            if (q.peek() >= K || q.size() == 1)
                break;
            
            int first = q.poll();
            int second = q.poll();
            
            q.add(first + (second * 2));
            answer++;
        }
        
        if (q.peek() < K)
            return -1;
        
        return answer;
    }
}
