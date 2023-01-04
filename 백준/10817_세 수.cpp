#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    
    if ((a == b) && (b == c))
        cout << a;
    else if (a == b || a == c)
        cout << a;
    else if (b == c)
        cout << b;
    else
    {
        if ((a < b) && (b < c) && (a < c))
            cout << b;
        else if ((a < b) && (b > c) && (a < c))
            cout << c;
        else if ((a > b) && (b < c) && (a < c))
            cout << a;
        else if ((a < b) && (b > c) && (a > c))
            cout << a;
        else if ((a > b) && (b < c) && (a > c))
            cout << c;
        else
            cout << b;
    }
    return 0;
}
