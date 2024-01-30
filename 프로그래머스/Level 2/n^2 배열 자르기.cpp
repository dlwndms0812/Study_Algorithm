#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for (long long i = left; i <= right; i++) {
        long long y = i / n;
        long long x = i % n;
        
        if (y >= x)
            answer.push_back(y + 1);
        else
            answer.push_back(x + 1);
    }
    
    return answer;
}
