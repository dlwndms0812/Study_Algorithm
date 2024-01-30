#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    for (int i = 0; i <= discount.size() - 10; i++) {
        bool flag = true;
        map<string, int> m;
        
        for (int j = i; j < i + 10; j++) {
            
            if (m.count(discount[j]) == 0)
                m[discount[j]] = 1;
            else
                m[discount[j]] += 1;
        }
        
        for (int j = 0; j < want.size(); j++) {
            if (m.count(want[j]) == 0) {
                flag = false;
                break;
            }
            else {
                if (m[want[j]] != number[j]) {
                    flag = false;
                    break;
                }
                else
                    m[want[j]] = 0;
            }
        }
        
        map<string, int>::iterator it;
        
        for (it = m.begin(); it != m.end(); it++) {
            if (it->second != 0)
            {
                flag = false;
                break;
            }
        }
        
        if (flag == true)
            answer++;
    }
    
    return answer;
}
