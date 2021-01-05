#include <iostream>

int main(void) {
	//화면에 출력                    \n
	std::cout << "Hello World1" << std::endl;
	std::cout << "Hello World2" << std::endl;

	int n = 10;
	double p = 3.14;
	char str[] = "test";

	// 변수 및 값이 나열된 순서대로 출력
	std::cout << n << " " << p << " " << str << std::endl;
	return 0;
}