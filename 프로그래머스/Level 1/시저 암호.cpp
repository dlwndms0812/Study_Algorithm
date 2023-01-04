#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            answer += ' ';
        else 
        {
            if (s[i] + n > 'z' && (s[i] >= 'a' && s[i] <= 'z'))
            {
                int tmp = 'z' - s[i];
                int idx = n - tmp;
                answer += 'a' - 1 + idx;
            }
            else if (s[i] + n > 'Z' && (s[i] >= 'A' && s[i] <= 'Z'))
            {
                int tmp = 'Z' - s[i];
                int idx = n - tmp;
                answer += 'A' - 1 + idx;
            }
            else
                answer += s[i] + n;
        }
    }
    return answer;
}
