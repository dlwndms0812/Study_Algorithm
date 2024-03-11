#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    stack<int> s;
    
    for (int i = numbers.size() - 1; i >= 0; i--) {
        if (s.empty()) {
            s.push(numbers[i]);
            answer.push_back(-1);
            continue;
        }
        
        while (!s.empty()) {
            if (s.top() <= numbers[i])
                s.pop();
            else
                break;
        }
        
        if (s.empty()) {
            answer.push_back(-1);
            s.push(numbers[i]);
        }
        else {
            answer.push_back(s.top());
            s.push(numbers[i]);
        }
        
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}
