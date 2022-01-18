#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b, c, d;
    cin >> a >> b >> c >> d;
    string ab, cd;
    ab = a + b;
    cd = c + d;
    long long first = stoll(ab);
    long long second = stoll(cd);
    long long ans = first + second;

    cout << ans << endl;
    
	return 0;
}
