#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end());
    
    int len = score.size();
    
    for (int i = 0; i < (len / m + 1); i++) {
        int box_size = 0;
        int min_score = 10;
        
         if (len - (i * m) < m)
            break;
        
        for (int j = 0; j < m; j++) {
            int n = len - (i * m) - j - 1;
            if (n >= 0) {
                if (min_score > score[n])
                    min_score = score[n];
                box_size++;
            }
        }
        
        answer += (min_score * box_size);
    }
    
    return answer;
}
