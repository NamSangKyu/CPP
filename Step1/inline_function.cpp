#include <iostream>
//���� �ΰ� ���ϴ� ������� �����ϴ� �Լ��� �ۼ�
//ª�� �Լ��� inline�� ���� �ʾƵ� �ڵ����� inline ó��(Compiler)
//inline ���¿� �������� ������ inline�� �ٿ��� �ڵ����� ����
//inline �Լ��� ��ũ�� �Լ��� ������ ����
inline int sum(int a, int b) {
	return a + b;
}

int main(void) {
	
	for (int i = 0; i < 10000; i++) {
		std::cout << sum(i, i + 1) << std::endl;
	}

	return 0;
}