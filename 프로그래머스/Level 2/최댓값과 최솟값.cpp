#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string tmp;
 
    while (getline(ss, tmp, delimiter)) {
        result.push_back(tmp);
    }
 
    return result;
}

string solution(string s) {
    string answer = "";
    
    vector<string> str = split(s, ' ');
    vector<int> num;
    
    for (string tmp : str) {
        int i = stoi(tmp);
        num.push_back(i);
    }
    
    sort(num.begin(), num.end());
    
    answer = to_string(num[0]) + ' ' + to_string(num[num.size() - 1]);
    
    return answer;
}
