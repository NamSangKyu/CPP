#include <iostream>
//�μ��� ���� ���ϴ� �Լ�
//������
int sum(int a, int b) {
	return a + b;
}
//�Ǽ���
double sum(double a, double b) {
	return a + b;
}
//������
char sum(char a, char b) {
	return a + b;
}
//�����ε�
// �Լ��� �ߺ� �����ϱ����� ����
// 1. �Ű����� ������ �ٸ�
// 2. �Ű����� Ÿ�� ���� �ٸ�
// ����Ÿ��(��ȯ��)�� �����ε��� ������ ��ġ�� ����(����Ÿ���� ���Ƶ� ��� ����)
int main(void) {
	std::cout << sum(10, 20) << std::endl;
	std::cout << sum(345.345, 20.123) << std::endl;
	std::cout << (int)sum('A', 'a') << " " << (int)'A' << " " << (int)'a' << std::endl;
	return 0;
}