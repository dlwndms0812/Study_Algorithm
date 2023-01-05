#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_2(int num, int n)
{
    vector<int> v;
    
    while (num >= 2)
    {
        v.push_back(num % 2);
        num /= 2;
    }
    v.push_back(num);
    if (v.size() != n)
    {
        int cnt = n - v.size();
        for (int i = 0; i < cnt; i++)
            v.push_back(0);
    }
    reverse(v.begin(), v.end());
    return v;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    int arr[n][n];
    
    for (int i = 0; i < n; i++)
    {
        vector<int> v = get_2(arr1[i], n);
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = v[j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        vector<int> v = get_2(arr2[i], n);
        for(int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
                arr[i][j] = v[j];
        }
    }
    
    
    for (int i = 0; i < n; i++)
    {
        string str;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
                str += ' ';
            else
                str += '#';
        }
        answer.push_back(str);
    }
    return answer;
}
