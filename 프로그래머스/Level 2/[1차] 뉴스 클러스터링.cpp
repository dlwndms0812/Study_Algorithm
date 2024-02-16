#include <string>
#include <vector>
#include <cctype>
#include <cmath>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    int inter_cnt = 0;
    int union_cnt = 0;
    
    int str1_cnt = 0;
    int str2_cnt = 0;
    
    vector<string> v1;
    vector<string> v2;
    
    for (int i = 1; i < str1.size(); i++) {
        if (isalpha(str1[i - 1]) && isalpha(str1[i])) {
            string s = "";
            char c1 = tolower(str1[i - 1]);
            char c2 = tolower(str1[i]);
            s += c1;
            s += c2;
            
            v1.push_back(s);
        }
    }
    
    vector<string> v;
    for (int i = 1; i < str2.size(); i++) {
        if (isalpha(str2[i - 1]) && isalpha(str2[i])) {
            string s = "";
            char c1 = tolower(str2[i - 1]);
            char c2 = tolower(str2[i]);
            s += c1;
            s += c2;
            
            v2.push_back(s);
        }
    }
    
    union_cnt = v1.size() + v2.size();
        
    for (int i = 0; i < v2.size(); i++) {
        for (int j = 0; j < v1.size(); j++) {
            if (v2[i] == v1[j]) {
                v1.erase(v1.begin() + j);
                inter_cnt++;
                break;
            }
        }
    }
    
    //공집합일 경우
    if (union_cnt == 0) {
        inter_cnt = 1;
        union_cnt = 1;
    }
    else
        union_cnt -= inter_cnt;
    
    answer = ((double)inter_cnt / (double)union_cnt) * 65536;

    return answer;
}
