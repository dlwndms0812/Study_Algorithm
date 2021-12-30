#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int n = (str.length() + 9) / 10; //10의 자리수로 딱 안나눠 떨어질 때를 대비하여 9더하기
	for (int i = 0; i < n; i++) {
		cout << str.substr(10 * i, 10) << endl;
	}
}
