class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right=0;
        int left=nums.size();
        int res=0;
        
        if(nums[nums.size()-1]<target)
            return nums.size();
        
        while(right<=left){
            int mid=(right+left)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                left--;
                res=mid;
            }
            else if(nums[mid]<target){
                right++;
                res=mid;
            }
        }
        
        return res;
        
    }
};
