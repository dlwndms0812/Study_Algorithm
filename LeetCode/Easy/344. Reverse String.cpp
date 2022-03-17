class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> v;
        for(int i=0;i<s.size();i++){
            v.push_back(s[s.size()-i-1]);
        }
        
        s.clear();
        
        for(int i=0;i<v.size();i++){
            s.push_back(v[i]);
        }
       
    }
};
