#include <stdio.h>
//숫자 두개 더하는 결과값을 리턴하는 함수를 작성
//int sum(int a, int b) {
//	return a + b;
//}
#define sum(a,b) a+b
int main(void) {

	for (int i = 0; i < 10000; i++) {
		printf("%d\n",sum(i, i + 1));
	}

	return 0;
}