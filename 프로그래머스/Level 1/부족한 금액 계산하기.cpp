using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    long long n=0;
    for(int i=1;i<=count;i++){
        n+=price*i;
    }
    if(n>money){
        answer=n-money;
    }
    return answer;
}
