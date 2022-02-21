#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long n;
    cin >> n;
    long long sum = 0;
    int i = 1;
    while (1) {
        sum += i;
        if (sum > n) {
            cout << i - 1;
            return 0;
        }
        else if (sum == n) {
            cout << i;
            return 0;
        }
        i++;
    }
    return 0;
}
   
