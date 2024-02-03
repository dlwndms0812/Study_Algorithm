#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    map<int, int> m;
    vector<pair<int, int>> v;
    
    string str;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '{')
            str = "";
        
        else if (s[i] == '}' || s[i] == ',') {
            if (str != "") {
                int key = stoi(str);
                m[key]++;
                str = "";
            }
        }
        
        else if (s[i] >= '0' && s[i] <= '9')
            str += s[i];
        
    }
    
    for (auto it = m.begin(); it != m.end(); it++) {
        int key = it->first;
        int value = it->second;
        
        v.push_back({key, value});
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for (int i = 0; i < v.size(); i++) {
        answer.push_back(v[i].first);
    }
    
    
    return answer;
}
