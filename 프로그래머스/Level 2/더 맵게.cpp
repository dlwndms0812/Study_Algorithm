#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> q;
    
    for (int i = 0; i < scoville.size(); i++)
        q.push(scoville[i]);
    
    while (q.size() > 1) {
        if (q.top() >= K)
            break;
        
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        
        int tmp = a + (b * 2);
        
        q.push(tmp);
        
        answer++;
    }
    
    if (q.size() == 1) {
        if (q.top() >= K)
            return answer;
        else
            return -1;
    }
    
    return answer;
}
