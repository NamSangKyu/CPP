#include <iostream>//옛날 버전에는 .h가 붙음

int main(void) {
	int num;

	std::cout << "숫자 입력 : ";
	std::cin >> num;

	std::cout << "입력한 숫자 : " << num << std::endl;
	return 0;
}