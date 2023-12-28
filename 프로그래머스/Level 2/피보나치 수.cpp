#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<long> fibonacci;
    
    fibonacci.push_back(0);
    fibonacci.push_back(1);
    
    for (int i = 2; i <= n; i++) {
        int tmp = fibonacci[i - 1] % 1234567 + fibonacci[i - 2] % 1234567;
        fibonacci.push_back(tmp % 1234567);
    }
    
    answer = fibonacci[n];
    
    return answer;
}
