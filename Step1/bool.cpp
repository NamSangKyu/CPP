#include <iostream>

int main(void) {
	//true false <---- 1byte
	std::cout << sizeof(10 > 5) << std::endl;

	//bool----> true/ false �� �����ϴ� ���� Ÿ��
	bool flag = true;
	flag = false;

	std::cout << flag << std::endl;//��� 1�� 0���� ��Ÿ��

	return 0;
}