#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> tmp;
    
    if (arr.size() <= 1)
        answer.push_back(-1);
    else 
    {
        tmp.assign(arr.begin(), arr.end());
        sort(tmp.begin(), tmp.end());
        int n = tmp[0];
        
        for(int i = 0; i < arr.size(); i++)
        {
            if (n != arr[i])
                answer.push_back(arr[i]);
        }
    }
    return answer;
}
