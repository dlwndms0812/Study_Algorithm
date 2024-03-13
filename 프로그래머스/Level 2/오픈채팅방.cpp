#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> split(string str) {
    vector<string> v;
    istringstream iss(str);
    string buffer;
    
    while (getline(iss, buffer, ' '))
        v.push_back(buffer);
    
    return v;
}


vector<string> solution(vector<string> record) {
    vector<string> answer;
    
    vector<pair<string, string>> pair;
    
    map<string, string> m;
    
    for (int i = 0; i < record.size(); i++) {
        vector<string> v = split(record[i]);
        
        if (v[0].compare("Enter") == 0) {
            pair.push_back(make_pair(v[0], v[1]));
            m[v[1]] = v[2];        
        } 
        else if (v[0].compare("Leave") == 0) {
            pair.push_back(make_pair(v[0], v[1]));
        }
        else if (v[0].compare("Change") == 0) {
            m[v[1]] = v[2];
        }
    }
    
    for (int i = 0; i < pair.size(); i++) {
        string str = "";
        if (pair[i].first.compare("Enter") == 0) {
            str += m[pair[i].second];
            str += "님이 들어왔습니다.";
        } else {
            str += m[pair[i].second];
            str += "님이 나갔습니다.";
        }
        
        answer.push_back(str);
    }
    
    return answer;
}
