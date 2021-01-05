#include <iostream>
using namespace std;
//두개의 정수를 받아서 두 정수를 교환하는 swap
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