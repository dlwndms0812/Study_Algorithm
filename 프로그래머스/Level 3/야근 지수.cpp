#include <string>
#include <vector>
#include <queue>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

long long solution(int n, vector<int> works) {
    long long answer = 0;
    
    priority_queue<int, vector<int>> q;
    
    for (int i = 0; i < works.size(); i++)
        q.push(works[i]);
    
    while (n != 0 && !q.empty()) {
        int value = q.top();
        q.pop();
        if (value == 0)
            return 0;
        
        q.push(value - 1);
        n--;
    }
    
    while (!q.empty()) {
        int value = q.top();
        q.pop();
        
        answer += value * value;
    }
    
    return answer;
}
