#include <vector>
#include <iostream>
using namespace std;

bool fun(int n){
    bool ck=true;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            ck=false;
            return ck;
        }
    }
    return ck;
}

int solution(vector<int> nums) {
    int answer = -1;

    int cnt=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                int n=nums[i]+nums[j]+nums[k];
                if(fun(n))
                    cnt++;
            }
        }
    }

    answer=cnt;
    return answer;
}
