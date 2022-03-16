class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int arr[100001];
        int s=0;
        int i=0;
        while(n!=0){
            int k=n%10;
            arr[i]=k;
            i++;
            n=n/10;
        }
        for(int j=0;j<i;j++){
            p=p*arr[j];
            s+=arr[j];
        }
        
       return p-s;
    }
};
