#include <iostream>
#include <vector>

using namespace std;

int main() {
    long x;
    int n;
    cin >> x >> n;
    
    long total = 0;
    
    while (n > 0)
    {
        int a, b;
        cin >> a >> b;
        total += a * b;
        n--;
    }
    
    if (total == x)
        cout << "Yes";
    else
        cout << "No";
    
}
