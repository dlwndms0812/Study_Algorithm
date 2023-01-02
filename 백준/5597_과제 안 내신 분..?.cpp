#include <iostream>

using namespace std;

int main() {
   int arr[30] = { 0 };
   int ans[2] = { 0 };
   int j = 0;
   
   for (int i = 0; i < 28; i++)
   {
       int n;
       cin >> n;
       arr[n-1] = 1;
   }
   
   for (int i = 0; i < 30; i++)
   {
       if (arr[i] == 0)
        ans[j++] = i;
      
   }
   
   if (ans[0] > ans[1])
   {
       int tmp = ans[0];
       ans[0] = ans[1];
       ans[1] = tmp;
   }
    cout << ans[0] + 1 << endl;
    cout << ans[1] + 1  << endl;
}
