#include <iostream>
using namespace std;
int main(void) {
	int num = 10;
	int& ref = num;//�����ڴ� ���� �� �ٷ� �ʱ�ȭ
	
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref<< endl;
	
	ref++;
	
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref<< endl;

	return 0;
}