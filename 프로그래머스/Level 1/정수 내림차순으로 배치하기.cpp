#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int cnt = 0;
    int i = 0;
    vector<int> v;
    
    while (n > 10)
    {
        int tmp = n % 10;
        v.push_back(tmp);
        n = n / 10;
        cnt++;
    }
    
    v.push_back(n);
    cnt++;
    sort(v.rbegin(), v.rend());
    
    while (cnt > 0)
    {
        answer *= 10;
        answer += v[i];
        cnt--;
        i++;
    }
    
    return answer;
}
