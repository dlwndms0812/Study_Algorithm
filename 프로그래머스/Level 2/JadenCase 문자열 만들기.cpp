#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int blank = 0;
    for(int i = 0; i < s.size(); i++) {
        if (i == 0 || blank == 1) {
            blank = 0;
            if ((s[i] >= '0' && s[i] <= '9') || s[i] == ' ' ||
               (s[i] >= 'A' && s[i] <= 'Z'))
                answer += s[i];
            else
                answer += s[i] - 32;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                answer += s[i] + 32;
            else
                answer += s[i];
        }
        
        if (s[i] == ' ')
            blank = 1;
    }
    return answer;
}
