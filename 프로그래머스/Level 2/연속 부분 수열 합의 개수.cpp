#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    
    vector<int> v;
    for (int i = 1; i <= elements.size(); i++) {
        queue<int> q;
        for (int j = 0; j < elements.size(); j++) {
            for (int k = 0; k < i; k++) {
                int idx = (j + k) % elements.size() ;
                q.push(elements[idx]);    
            }
            
            int sum = 0;
            while (!q.empty()) {
                sum += q.front();
                q.pop();
            }
            v.push_back(sum);   
        }
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1] && i != v.size() - 1)
            continue;
        answer++;
    }
    
    return answer;
}
