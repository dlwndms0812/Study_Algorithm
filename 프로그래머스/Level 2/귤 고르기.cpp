#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> arr(10000001);
    int cnt = 0;
    
    for (int i = 0; i < tangerine.size(); i++) {
        arr[tangerine[i] - 1]++;
    }
    
    sort(arr.begin(), arr.end(), cmp);
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 2) {
            answer++;
            if (cnt + arr[i] >= k)
                cnt = k;
            else
                cnt += arr[i];
        }
        if (cnt == k)
            return answer;
    }
    answer += (k - cnt);
    return answer;
}
