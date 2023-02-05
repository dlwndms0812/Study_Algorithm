#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 1; i < food.size(); i++)
    {
        if (food[i] != 0 && food[i] % 2 != 0)
            food[i]--;
    }
    
    vector<int> tmp;
    
    for (int i = 1; i < food.size(); i++)
    {
        for (int j = 0; j < food[i] / 2; j++)
            tmp.push_back(i);
    }
    
    for (int i = 0; i < tmp.size(); i++)
        answer += tmp[i] + '0';
    answer += '0';
    for (int i = tmp.size() - 1; i >= 0; i--)
        answer += tmp[i] + '0';
    
    return answer;
}
