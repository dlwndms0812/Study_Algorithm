class Solution {
public:
    int countOdds(int low, int high) {
        int cnt=0;
        
        int n=(high-low+1);
        if(n%2==0){
            cnt=n/2;
        }
        else{
            if(low%2==1 && high%2==1){
                cnt=n/2+1;
            }
            else
                cnt=n/2;
        }
        
        return cnt;
    }
};
