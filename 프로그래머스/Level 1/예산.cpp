#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(), d.end());
    
    for (int i = d.size() - 1; i >= 0; i--)
    {
        int tmp = 0;
        for (int j = 0; j <= i; j++)
        {
            tmp += d[j];
        }
        
        if (tmp <= budget)
            return i + 1;
        
    }
    
    return answer;
}
