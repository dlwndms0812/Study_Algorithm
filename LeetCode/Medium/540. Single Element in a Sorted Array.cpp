class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int arr[100001];
        memset(arr, -1, sizeof(arr));

        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }

        int result;
        result = 0;
        for (int i = 0; i < 100001; i++)
        {
            if (arr[i] == 0)
            {
                result = i;
                break;
            }
        }
        return result;
    }
};
