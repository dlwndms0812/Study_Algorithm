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
