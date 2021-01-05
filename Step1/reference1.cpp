#include <iostream>
using namespace std;
int main(void) {
	int num = 10;
	int& ref = num;//참조자는 선언 후 바로 초기화
	
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref<< endl;
	
	ref++;
	
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref<< endl;

	return 0;
}