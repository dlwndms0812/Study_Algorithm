#include <cstdio>
#include <math.h>
using namespace std;

int cnt = 0;

void hanoi(int n, int a, int c, int b) {
	if (n == 1) {
        printf("%d %d\n",a,c);
	}
	else {
		hanoi(n - 1, a, b, c);
        printf("%d %d\n",a,c);
		hanoi(n - 1, b, c, a);
	}
}

int main() {
	int n;
    scanf("%d",&n);

    int k=pow(2,n)-1;
    printf("%d\n",k);
	
	hanoi(n, 1, 3, 2);
	return 0;
}

//c++사용하면 시간초과 나기때문에 c로 바꿔서 사용
