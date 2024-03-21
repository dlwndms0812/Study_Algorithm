#include <string>
#include <vector>

using namespace std;

int visited[51] = { 0 };
int answer = 100000;

void dfs(string str, string target, vector<string> words, int n) {
    
    if (str == target) {
        answer = min(answer, n);
        return ;
    }
    
    vector<int> v_idx;
    for (int i = 0; i < words.size(); i++) {
        if (visited[i] == 1)
            continue;
        
        int diff = 0;
        for (int j = 0; j < words[i].size(); j++) {
            if (words[i][j] != str[j])
                diff++;
        }
        
        if (diff == 1)
            v_idx.push_back(i);
    }
    
    for (int i = 0; i < v_idx.size(); i++) {
        visited[v_idx[i]] = 1;
        dfs(words[v_idx[i]], target, words, n + 1);
        visited[v_idx[i]] = 0;
    }
    
    
}


int solution(string begin, string target, vector<string> words) {
    
    bool flag = false;
    
    for (int i = 0; i < words.size(); i++) {
        if (words[i] == target) {
            flag = true;
            break;
        }
    }
    
    if (flag == false)
        return 0;
    
    dfs(begin, target, words, 0);
    return answer;
}
