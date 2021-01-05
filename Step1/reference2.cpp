#include <iostream>
using namespace std;
//�ΰ��� ������ �޾Ƽ� �� ������ ��ȯ�ϴ� swap
void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void RefSwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a = 10, b = 20;
	cout << a << " , " << b << endl;
	Swap(&a, &b);
	cout << a << " , " << b << endl;

	RefSwap(a, b);
	cout << a << " , " << b << endl;

	return 0;
}