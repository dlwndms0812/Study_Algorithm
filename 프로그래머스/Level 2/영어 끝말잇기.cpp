#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    for(int i = 1; i < words.size(); i++) {
        
        if (words[i - 1][words[i - 1].size() - 1] != words[i][0]) {
            int person = (i % n) + 1;
                int idx = (i / n) + 1;
                answer.push_back(person);
                answer.push_back(idx);
                return answer;
        }
        
        for(int j = 0; j < i; j++) {
            if (words[i] == words[j]) {
                int person = (i % n) + 1;
                int idx = (i / n) + 1;
                answer.push_back(person);
                answer.push_back(idx);
                return answer;
            }
        }
    }

    answer.push_back(0);
    answer.push_back(0);
    return answer;
}
