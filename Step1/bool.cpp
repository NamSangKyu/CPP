#include <iostream>

int main(void) {
	//true false <---- 1byte
	std::cout << sizeof(10 > 5) << std::endl;

	//bool----> true/ false 만 저장하는 변수 타입
	bool flag = true;
	flag = false;

	std::cout << flag << std::endl;//출력 1과 0으로 나타냄

	return 0;
}