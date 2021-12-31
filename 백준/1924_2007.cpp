#include <iostream>
using namespace std;

int main() {
	int m, d;
	cin >> m >> d;
	int cnt = 0;
	for (int i = 1; i < m; i++) {
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) {
			cnt += 31;
			
		}
		else if (i == 2) {
			cnt += 28;
			
		}
		else {
			cnt += 30;
			
		}
	}
	cnt += d;
	int ans = 0;
	ans = cnt % 7;

	if (ans == 1) {
		cout << "MON";
	}
	else if (ans == 2) {
		cout << "TUE";
	}
	else if (ans == 3) {
		cout << "WED";
	}
	else if (ans == 4) {
		cout << "THU";
	}
	else if (ans == 5) {
		cout << "FRI";
	}
	else if (ans == 6) {
		cout << "SAT";
	}
	else {
		cout << "SUN";
	}
	return 0;
}
