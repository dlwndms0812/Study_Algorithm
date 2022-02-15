#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int n;
    int k = 2;
    cin >> n;
   
     while (n != 0) {
         if (n == 1)
             break;
         else if (n % k == 0) {
             printf("%d\n", k);
             n = n / k;
         }
         else
             k++;
     }
    
    return 0;
}
   
