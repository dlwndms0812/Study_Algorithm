#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    getline(cin, str);

    int cnt = 1;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ')
            cnt++;
    }
    
    if (str[0] == ' ') {
        cnt = cnt - 1;
    }
   
    if (str[str.size() - 1] == ' ') {
        cnt = cnt - 1;
    }
    
    cout << cnt;
    
	return 0;
}
