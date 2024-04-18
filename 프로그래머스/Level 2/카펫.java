class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[2];
        
        for (int i = 1; i <= 5000; i++) {
            for (int j = 1; j <= 5000; j++) {
                if (i * j < brown + yellow)
                    continue;
                else if (i * j > brown + yellow)
                    break;
                
                int brown_cnt = i * 2;
                brown_cnt += (j - 2) * 2;
                
                
                if (brown_cnt == brown) {
                    answer[0] = j;
                    answer[1] = i;
                    return answer;
                }
                
                
            }
        }
        return answer;
    }
}
