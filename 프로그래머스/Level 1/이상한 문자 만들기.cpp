#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    int i = 0;
    
    while (idx < s.size())
    {
        if (s[idx] == ' ')
        {
            i = 0;
            answer += s[idx];
        }
        else {
            if (i % 2 == 0)
            {
                if (s[idx] >= 'a' && s[idx] <= 'z')
                    answer += s[idx] - 32;
                else
                    answer += s[idx];
            }
            else
            {
                if (s[idx] >= 'A' && s[idx] <= 'Z')
                    answer += s[idx] + 32;
                else
                    answer += s[idx];
            }
            i++;
        }
        idx++;
    }
    return answer;
}
