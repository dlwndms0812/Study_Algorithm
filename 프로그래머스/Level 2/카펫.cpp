#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for (int i = 1; i <= 5000; i++) {
        for (int j = 1; j <= i; j++) {
            if (i * j < brown + yellow)
                continue;
            else if (i * j > brown + yellow)
                break;
            
            int brown_cnt = i * 2;
            brown_cnt += (j - 2) * 2;
            
            if (brown_cnt == brown) {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
            
        }
    }
    return answer;
}
