#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    vector<long long> fibonacci;
    
    fibonacci.push_back(0);
    fibonacci.push_back(1);
    
    for (int i = 2; i <= n + 1; i++) {
        int tmp = fibonacci[i - 1] % 1234567 + fibonacci[i - 2] % 1234567;
        fibonacci.push_back(tmp % 1234567);
    }
    
    return fibonacci[n + 1];
}
