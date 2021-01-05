#include <iostream>
namespace A {
	int a = 10;
	void PrintInfo() {
		std::cout << "PrintInfo() - A" << std::endl;
	}
}
namespace B {
	int a = 20;
	void PrintInfo() {
		std::cout << "PrintInfo() - B" << std::endl;
	}
}
using A::PrintInfo;
//using B::PrintInfo;
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;

int main(void) {
	PrintInfo();
	cout << "Hello World" << endl;
	return 0;
}