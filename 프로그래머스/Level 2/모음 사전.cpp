#include <string>
#include <vector>

using namespace std;

char ch[5] = {'A', 'E', 'I', 'O', 'U'};
int answer = 0;
int cnt = 0;

void dfs(string str, string target) {
    if (str.compare(target) == 0) {
        answer = cnt;
        return ;
    }
    
    cnt++;
    
    if (str.size() >= 5)
        return ;
    
    for (int i = 0; i < 5; i++) {
        dfs(str + ch[i], target);
    }
}

int solution(string word) {
    
    dfs("", word);
    
    return answer;
}
