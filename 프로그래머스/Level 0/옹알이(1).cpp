#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string str[4] = {"aya", "ye", "woo", "ma"};
    
    for (string tmp : babbling) {
        int len = 0;
        int total_size = tmp.size();
        int used[4] = {0, 0, 0, 0};
        
        for (int j = 0; j < 4; j++) {
            for (int i = 0; i < 4; i++) {
                if (used[i] == 0) {
                    int index = tmp.find(str[i], 0);

                    if (index < tmp.size()) {
                        tmp.replace(index, str[i].size(), "0");
                        len += str[i].size();
                        used[i] = 1;
                    }
                }
            }
        }

        if (len == total_size)
            answer++;
    }
    return answer;
}
