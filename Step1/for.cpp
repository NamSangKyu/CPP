#include <iostream>

int main(void) {
	int total = 0;

	// �ʱ�ȭ �������� �ݺ������� �� �������� ������ ����
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			total += i;
	}
	//i++;//i�� ���������� �ݺ��� ������ �����
	std::cout << "1~100���� ������ ¦�� ���� : " << total << std::endl;

	return 0;
}