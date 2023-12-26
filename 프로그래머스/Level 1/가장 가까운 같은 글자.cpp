#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i = 0; i < s.size(); i++) {
        int find = -1;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j])
                find = i - j;
        }
        answer.push_back(find);
    }
    return answer;
}
