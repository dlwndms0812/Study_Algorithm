#include <iostream>
#include <math.h>
using namespace std;
int fun(int n) {
	int sum = n;
	while (1) {
		if (n == 0) break;
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}
int main() {
	bool arr[10001] = { false }; //int->long->bool로 해결
	for (int i = 1; i < 10001; i++) {
		int ans=fun(i);
		if (ans <= 10000)  //이 부분 조건을 걸어야 배열 크기가 넘어가지 않음
			arr[ans] = true;
	}

	for (int i = 1; i < 10001; i++) {
		if (!arr[i]) {
			printf("%d\n",i);
		}
	}
	return 0;
}

//왜 long long으로 해서는 실행이 안되는지??? 알고싶다
