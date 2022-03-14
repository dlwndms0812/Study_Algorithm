class Solution {
public:
    bool isPalindrome(int x) {
        bool check;
        if(x<0){
            check=false;
            return check;
        }
        
        if(x%10==0 && x!=0){
            check=false;
            return check;
        }
        
        string str=to_string(x);
        int left=0;
        int right=str.size()-1;
        
        while(left<=right){
            if(str[left]!=str[right]){
                check=false;
                return check;
            }
            left++;
            right--;
        }
        
        check=true;
        return check;
        
    }
};
