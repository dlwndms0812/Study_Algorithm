import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        ArrayList<Integer> list = new ArrayList<>();
        
        Queue<Integer> q_progresses = new LinkedList<>();
        Queue<Integer> q_speeds = new LinkedList<>();
        
        for (int i : progresses)
            q_progresses.add(i);
        
        for (int i : speeds) {
            q_speeds.add(i);
        }
        
        while (!q_progresses.isEmpty()) {
            int len = q_progresses.size();
            int cnt = 0;
            
            for (int i = 0; i < len; i++) {
                int progress = q_progresses.poll();
                int speed = q_speeds.poll();
                
                progress += speed;
                
                q_progresses.add(progress);
                q_speeds.add(speed);
            }
            
            for (int i = 0; i < len; i++) {
                if (q_progresses.peek() >= 100) {
                   cnt++;
                    q_progresses.poll();
                    q_speeds.poll();
                }
                else
                    break;
            }
            
            if (cnt > 0)
                list.add(cnt);
        }
        
        int[] answer = new int[list.size()];
        
        for (int i = 0; i < list.size(); i++)
            answer[i] = list.get(i);
        
        return answer;
    }
}
