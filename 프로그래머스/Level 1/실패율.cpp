#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<float, int> a, pair<float, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<int> fail(N);
    vector<int> player(N);
    
    
    for (int i = 0; i < stages.size(); i++)
    {
        for (int j = 0; j < N && j < stages[i]; j++)
        {
            if ((j + 1) <= stages[i])
            {   
                player[j]++;
                if ((j + 1) == stages[i])
                    fail[j]++;
            }
        }
    }
    
    
    vector<pair<float, int>> v;
    for (int i = 0; i < N; i++)
    {
        if (player[i] == 0)
            v.push_back({0, i + 1});
        else
            v.push_back({((float)fail[i] / player[i]), i + 1});
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for (int i = 0; i < v.size(); i++)
    {
        answer.push_back(v[i].second);
    }
    
    return answer;
}
