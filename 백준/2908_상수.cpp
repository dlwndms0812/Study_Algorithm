#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str1;
    string str2;

    string ss1;
    string ss2;

    stack<char> s1;
    stack<char> s2;

    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++) {
        s1.push(str1[i]);
    }
    for (int i = 0; i < str1.size(); i++) {
        ss1 += s1.top();
        s1.pop();
    }

    for (int i = 0; i < str2.size(); i++) {
        s2.push(str2[i]);
    }
    for (int i = 0; i < str2.size(); i++) {
        ss2 += s2.top();
        s2.pop();
    }

    int n1 = stoi(ss1);
    int n2 = stoi(ss2);

    if (n1 > n2)
        cout << n1;
    else
        cout << n2;

	return 0;
}
