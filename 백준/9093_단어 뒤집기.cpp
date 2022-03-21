#include <iostream>
#include <string>
#include <stack>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();

    for (int j = 0; j < n; j++) {
        string str;
        stack<char>s;
        getline(cin, str);
        str += ' ';

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ' || str[i]=='\n')
            {
                while (!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            else 
                s.push(str[i]);
        }

        cout << endl;
        
        while (!s.empty())
            s.pop();
    }
    return 0;

}
   
