#include <iostream>
#include <malloc.h>
using namespace std;
void PrintArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;
}
int main(void) {
	//malloc�� �̿��ؼ� ���������� 5���� ������ �� �ִ� �޸� ������ �Ҵ�
	int* arr = (int*)malloc(sizeof(int) * 5);
	//C++ ���� �Ҵ�
	int* ptr = new int[5]; 
	ptr[0] = 1;
	ptr[1] = 2;
	ptr[2] = 3;
	ptr[3] = 4;
	ptr[4] = 5;
	
	PrintArray(ptr,5);
	cout << "---------------" << endl;
	ptr = new int[10];
	PrintArray(ptr,5);
	delete[] ptr;

	int* num = new int;
	*num = 100;
	delete num;
	return 0;
}