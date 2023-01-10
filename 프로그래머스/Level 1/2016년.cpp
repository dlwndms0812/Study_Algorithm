#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    int cnt = 0;
    for (int i = 1; i <= a - 1; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 | i == 8 | i == 10 | i == 12)
            cnt += 31;
        else if (i == 2)
            cnt += 29;
        else
            cnt += 30;
    }
    
    cnt += b;
    
    if (cnt % 7 == 0)
        answer = "THU";
    else if (cnt % 7 == 1)
        answer = "FRI";
    else if (cnt % 7 == 2)
        answer = "SAT";
    else if (cnt % 7 == 3)
        answer = "SUN";
    else if (cnt % 7 == 4)
        answer = "MON";
    else if (cnt % 7 == 5)
        answer = "TUE";
    else
        answer = "WED";
    
    return answer;
}
