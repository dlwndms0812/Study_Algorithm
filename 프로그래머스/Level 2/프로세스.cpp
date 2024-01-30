#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> q;
    
    for (int i = 0; i < priorities.size(); i++)
        q.push(priorities[i]);
    
    sort(priorities.begin(), priorities.end(), cmp);
    
    int i = 0;
    int loc = location;
    
    while(!q.empty()) {
        if (priorities[i] == q.front()) {
            q.pop();
            answer++;
            if (loc == 0)
                return answer;
            i++;
            loc--;
        }
        else {
            q.push(q.front());
            q.pop();
            loc--;
            if (loc < 0)
                loc = q.size() - 1;
        }
    }
    
    
    return answer;
}
