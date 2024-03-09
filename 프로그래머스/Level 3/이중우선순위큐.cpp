//priority_queue를 사용한 방법

#include <string>
#include <vector>
#include <queue>


using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    priority_queue<int, vector<int>, greater<int>> q_min;
    priority_queue<int, vector<int>, less<int>> q_max;
    int queue_size = 0;
    
    for (int i = 0; i < operations.size(); i++) {
        string str = operations[i];
        
        if (str[0] == 'I') {
            string value = str.substr(2, str.size());
            int num = stoi(value);
            
            q_min.push(num);
            q_max.push(num);
            queue_size++;
        
        } else if (str[0] == 'D') {
            if (queue_size == 0)
                continue;
            
            if (str[2] == '1')
                q_max.pop();
            else
                q_min.pop();
            
            queue_size--;
            
            if (queue_size == 0) {
                while (!q_min.empty())
                    q_min.pop();
                
                while (!q_max.empty())
                    q_max.pop();
            
            }
        }   
    }
    
    if (queue_size == 0) {
        while (!q_min.empty())
                q_min.pop();
                
        while (!q_max.empty())
                q_max.pop();
    }
            
    
    
    if (queue_size == 0) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else if (queue_size == 1) {
        int num;
        
        if (q_min.empty())
            num = q_max.top();
        else
            num = q_min.top();
        
        if (num < 0) {
            answer.push_back(0);
            answer.push_back(num);
        }
        else {
            answer.push_back(num);
            answer.push_back(0);
        }
    }
    else {
        answer.push_back(q_max.top());
        answer.push_back(q_min.top());
    }
    
    return answer;
}






//vector를 사용한 방법


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    vector<int> v;
    
    for (int i = 0; i < operations.size(); i++) {
        string str = operations[i];
        
        if (str[0] == 'I') {
            string value = str.substr(2, str.size());
            int num = stoi(value);
            
            v.push_back(num);
        
        } else if (str[0] == 'D') {
            if (v.empty())
                continue;
            
            sort(v.begin(), v.end());
            if (str[2] == '1')
                v.erase(v.end() - 1);
            else
                v.erase(v.begin());
        }   
    }
    
    sort(v.begin(), v.end());
    
    if (v.size() == 0) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else if (v.size() == 1) {
        if (v.front() < 0) {
            answer.push_back(0);
            answer.push_back(v.front());
        }
        else {
            answer.push_back(v.front());
            answer.push_back(0);
        }
    }
    else {
        answer.push_back(v.back());
        answer.push_back(v.front());
    }
    
    return answer;
}
