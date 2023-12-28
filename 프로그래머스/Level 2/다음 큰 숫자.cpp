#include <string>
#include <vector>

using namespace std;

int count_one(int n) {
    int cnt = 0;
    
    while (n >= 1) {
        if (n % 2 == 1)
            cnt++;
        n = n / 2;
    }
    
    return cnt;
}

int solution(int n) {
    int answer = 0;
    
    int n_cnt = count_one(n);
    
    for (int i = n + 1; i < 1000001; i++) {
        if (n_cnt == count_one(i)) {
            answer = i;
            break;
        }
    }
    return answer;
}
