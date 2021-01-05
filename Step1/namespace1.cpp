#include <iostream>
namespace A {
	int a=10;
	void PrintInfo() {
		std::cout << "PrintInfo() - A" << std::endl;
	}
}
namespace B {
	int a=20;
	void PrintInfo() {
		std::cout << "PrintInfo() - B" << std::endl;
	}
}
int main(void) {
	A::PrintInfo();
	B::PrintInfo();

	std::cout << A::a << std::endl;
	std::cout << B::a << std::endl;
	return 0;
}