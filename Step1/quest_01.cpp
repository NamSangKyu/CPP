#include <iostream>

int main(void) {
	char name[30];
	std::cout << "�̸� �Է� : ";	std::cin >> name;

	int age;
	std::cout << "���� �Է� : ";	std::cin >> age;
	
	char tel[30];
	std::cout << "����ó �Է� : ";	std::cin >> tel;

	std::cout << "�̸� : " << name << std::endl;
	std::cout << "���� : " << age << std::endl;
	std::cout << "tel : " << tel << std::endl;
	return 0;
}