#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<pair<int, int>> q;
    
    for (int i = 0; i < progresses.size(); i++)
        q.push({progresses[i], i});
    
    int loc = 0;
    
    while (!q.empty()) {
        int cnt = 0;
        
        if (q.front().second == loc) {
        
            if (q.front().first >= 100) {
                while (!q.empty()) {
                    q.pop();
                    cnt++;
                    loc++;
                    if (q.front().first < 100)
                        break ;
                }
                answer.push_back(cnt);
            }
        }
        
        int idx = q.front().second;
        int tmp = q.front().first + speeds[idx];
        q.pop();
        q.push({tmp, idx});
    }
    
    return answer;
}
