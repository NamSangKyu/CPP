#include <stdio.h>
//���� �ΰ� ���ϴ� ������� �����ϴ� �Լ��� �ۼ�
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