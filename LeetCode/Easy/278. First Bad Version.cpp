class Solution {
public:
    int firstBadVersion(int n) {
        int right=1;
        int left=n;
        long long mid;
        
        while(right<=left){
            mid=right+(left-right)/2;
            
            if(isBadVersion(mid))
                left=mid-1;
            else
                right=mid+1;
        }
        return right;
    }
};
