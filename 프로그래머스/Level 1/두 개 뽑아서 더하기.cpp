#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int check[200]={0};
    
    for(int i=0;i<numbers.size();i++){
        for(int j=i+1;j<numbers.size();j++){
            int n=numbers[i]+numbers[j];
            if(check[n]!=1){
                answer.push_back(n);
                check[n]=1;
            }
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}
