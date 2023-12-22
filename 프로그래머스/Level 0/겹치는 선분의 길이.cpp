#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    int line[201] = {0};
    
    for (vector<int> tmp : lines) {
        for (int i = tmp[0] + 1; i <= tmp[1]; i++)
            line[i + 100]++;
    }
    
    for (int i = 0; i < 201; i++) {
        if (line[i] >= 2)
            answer++;
    }
    
    return answer;
}
