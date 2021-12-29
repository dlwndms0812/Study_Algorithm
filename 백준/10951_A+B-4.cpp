#include <iostream>
using namespace std;

int main() {
	int a, b;

	while(cin >> a >> b){ //입력이 없을때 예외처리를 위함
		cout << a + b << endl;
	}

	return 0;
}
