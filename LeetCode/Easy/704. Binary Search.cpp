class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            if(k==target)
                return i;
        }
        return -1;
    }
};
