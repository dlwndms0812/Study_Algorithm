#include <string>
#include <cmath>

using namespace std;

int solution(string t, string p) {
    long answer = 0;
    
    int pp = p.size();
    int tt = t.size();

    long long n = stoll(p);
    for (int i = 0; i < tt - pp + 1; i++)
    {
        string str = "";
        for (int j = 0 ; j < pp; j++)
            str += t[i + j];
        
        long long tmp = stoll(str);
        if (tmp <= n)
            answer++;
            
    }
    
    return answer;
}
