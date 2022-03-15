class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int arr[100001];
        for(int i=0;i<nums.size();i++){
            arr[(i+k) % nums.size() ]=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i];
        }
        
    }
};
