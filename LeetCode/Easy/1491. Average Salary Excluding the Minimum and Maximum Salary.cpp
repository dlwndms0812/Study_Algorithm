class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double d;
        for(int i=1;i<salary.size()-1;i++){
            d+=salary[i];
        }
        
        d=d/(salary.size()-2);
        
        return d;
    }
};
