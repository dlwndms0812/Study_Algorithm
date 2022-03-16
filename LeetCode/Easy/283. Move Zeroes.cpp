class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>zero;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                zero.push_back(nums[i]);
            else
                v.push_back(nums[i]);
        }
        
        nums.clear();
        
        for(int i=0;i<v.size();i++){
            nums.push_back(v[i]);
        }
        
        for(int i=0;i<zero.size();i++)
            nums.push_back(0);
        
        
    }
    
};
