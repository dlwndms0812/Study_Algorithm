#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int arr3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    
    for (int i = 0; i < answers.size(); i++)
    {
        if (arr1[i % 5] == answers[i])
            cnt1++;
        if (arr2[i % 8] == answers[i])
            cnt2++;
        if (arr3[i % 10] == answers[i])
            cnt3++;
    }
    
    int max = -1;
    
    if (cnt1 > max)
        max = cnt1;
    if (cnt2 > max)
        max = cnt2;
    if (cnt3 > max)
        max = cnt3;
    
    if (cnt1 == max)
        answer.push_back(1);
    if (cnt2 == max)
        answer.push_back(2);
    if (cnt3 == max)
        answer.push_back(3);

    return answer;
}
