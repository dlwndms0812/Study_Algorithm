class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        
        for(int i=0;i<=n;i++){
            int k=i;
            int m=0;
            vector<int>vv;
            
            if(k==0){
                v.push_back(0);
                continue;
            }
            
            while(k!=0){
                m=k%2;
                k=k/2;
                vv.push_back(m);
            }
            int cnt=0;
            
            for(int j=0;j<vv.size();j++){
                int p=vv[j];
                
                if(p==1)
                    cnt++;
            }
            
            vv.clear();
            
            v.push_back(cnt);
        }
        
        return v;
    }
};
