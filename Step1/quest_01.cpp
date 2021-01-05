#include <iostream>

int main(void) {
	char name[30];
	std::cout << "이름 입력 : ";	std::cin >> name;

	int age;
	std::cout << "나이 입력 : ";	std::cin >> age;
	
	char tel[30];
	std::cout << "연락처 입력 : ";	std::cin >> tel;

	std::cout << "이름 : " << name << std::endl;
	std::cout << "나이 : " << age << std::endl;
	std::cout << "tel : " << tel << std::endl;
	return 0;
}