#include <string>
#include <vector>

using namespace std;

char oper[2] = { '+', '-' };

int numbers_size = 0;
int target_num = 0;
int answer = 0;

void dfs(int idx, int sum, vector<int> numbers) {
    if (idx == numbers_size) {
        if (sum == target_num)
            answer++;
        return ;
    }
    
    for (int i = 0; i < 2; i++) {
        int tmp = sum;
        if (oper[i] == '+')
            tmp += numbers[idx];
        else
            tmp -= numbers[idx];
        
        dfs(idx + 1, tmp, numbers);   
    }
}

int solution(vector<int> numbers, int target) {
    
    numbers_size = numbers.size();
    target_num = target;
    
    dfs(0, 0, numbers);
    
    return answer;
}
